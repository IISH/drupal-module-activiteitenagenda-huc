<?php


/**
 * Validator function to check if a admin is set if the location is checked for booking control
 * @param $form
 * @param $form_state
 */
function _iishagenda_check_admincontrol($form, &$form_state) {

  $booking_control = $form_state['values']['field_booking_control'][LANGUAGE_NONE][0]['value'];
  $admin_email = $form_state['values']['field_admin_email'][LANGUAGE_NONE][0]['email'];

  if ($booking_control == "1" && empty($admin_email)) {
    form_set_error('field_admin_email', 'Bij booking control moet er een locatiebeheerder zijn ingesteld.');
  }
}


function _custom_validation($form, &$form_state) {

  if ($form['#form_id'] == 'event_node_form' ) {
    $form_errors = form_get_errors();
    $drupal_errors = drupal_get_messages('error');
    if(count($form_errors)>0){

      foreach($drupal_errors['error'] as $key => $error) {
        if (in_array($error, $form_errors)) {
          unset($drupal_errors['error'][$key]);
        }
      }
      form_clear_error();
      foreach($form_errors as $key => $message) {
        switch($key){
          case 'title':
            $m = t('Geef een titel op aub.');
            break;
          case 'field_event_date][und][0][value':
            $m = t('Geef een startdatum en -tijd op aub.');
            break;
          case 'field_event_date][und][0][value2':
            $m = t('Geef een eindtijd op aub.');
            break;
          case 'field_people][und][0][value':
            $m = t('Geef het aantal personen op aub.');
            break;
        }
        if(isset($m)){
          form_set_error($key,$m);
        }
      //  drupal_set_message($m, 'error');
      }
    }
  }
}



/**
 * Implementation of hook_form_alter().
 */
function iishagenda_form_alter(&$form, $form_state, $form_id)
{

  $debug = false;

  if($form_id == "taxonomy_form_term" && $form["#vocabulary"]->machine_name == "room_location"){
    $form['#validate'][] = '_iishagenda_check_admincontrol';
  }

  if ($form_id == 'event_node_form') {

    $form['#validate'][] = '_custom_validation';

    unset($form['actions']['preview']);

    // Auto check all locations if form is new
    $node = $form_state['node'];

    $form['field_clone_of']['#access'] = false;
    $form['field_show_frontpage']['#access'] = false;

    if (!isset($node->nid) || isset($node->is_new)) {

      // prefill some fields to fasten debugging
      if ($debug) {
        $form["title"]["#default_value"] = "event " . time();
        $hour = (60 * 60);
        $day = $hour * 24;
        $s = time() + (rand(1, 8) * $hour) + (rand(1, 30) * $day);
        $form["field_event_date"][LANGUAGE_NONE][0]["#default_value"]["value"] = date("d M Y H:i", $s);
        $form["field_event_date"][LANGUAGE_NONE][0]["#default_value"]["value2"] = date("d M Y H:i", ($s + $hour));
        $form["field_people"][LANGUAGE_NONE][0]["#default_value"] = '5';
        $form["field_people"][LANGUAGE_NONE][0]["value"]["#default_value"] = '5';
      }

      // set status to aproved when user is admin
      if(is_user_admin()){
        $form['field_event_status'][LANGUAGE_NONE]['#default_value'] = 'approved';
      }

      $v = taxonomy_vocabulary_machine_name_load('room_location');
      $locations = taxonomy_get_tree($v->vid, 0, 1);

      $default = array();
      foreach ($locations as $location) {
        $default[] = $location->tid;
      }
      $form['field_locations'][LANGUAGE_NONE]['#default_value'] = $default;
    }


    // Add check button
    $form['check'] = array(
      '#type' => 'button',
      '#name' => 'check-avb',
      '#value' => t('Controleer beschikbaarheid'),
      '#weight' => 49,
      '#ajax' => array(
        'callback' => '_iishagenda_rebuild_rooms',
        'wrapper' => 'rooms-replace',
        'method' => 'replace',
        'effect' => 'fade'
      )
    );


    $form['field_note']['#weight'] = 49;
    $form['#group_children']['check'] = 'group_accomodation';
    $form['#group_children']['facilities'] = 'group_accomodation';


	//
    $options = _iishagenda_get_available_rooms($form, $form_state);
	$msg = '';
    if (!array_key_exists('values', $form_state)) {
//	    $msg = t('');
    } else if (count($options) == 0) {
        $msg = t('Sorry, geen zalen beschikbaar. Pas aub de data aan.');
    }

    $currentrooms = "";
    $rooms = issetor($form['#node']->field_event_room[LANGUAGE_NONE], false);

    if (is_array($rooms)) {
      $currentrooms = "<div class='currentrooms'>Voormalige selectie:<br>";
      foreach ($rooms as $room) {
        if ($room["nid"] !== null) {
          $room_node = node_load($room["nid"]);
          $currentrooms .= "- " . $room_node->title . "<br>";
        }
      }
      $currentrooms .= "</div>";
    }

    $form['field_event_room'][LANGUAGE_NONE]['#prefix'] = '<div id="rooms-replace">';
    $form['field_event_room'][LANGUAGE_NONE]['#suffix'] = $msg . '</div>';
    $form['field_event_room'][LANGUAGE_NONE]['#options'] = $options;
    $form['field_event_room'][LANGUAGE_NONE]['#description'] = $currentrooms . $form['field_event_room'][LANGUAGE_NONE]['#description'];

    if($form['field_event_option'][LANGUAGE_NONE]['#default_value'] == '1' && $form['field_event_status'][LANGUAGE_NONE]['#default_value'] !== 'cancelled'){

      $form['submit_cancel'] = array(
        '#type' => 'submit',
        '#value' => t('Annuleer optie'),
        '#attributes' => array(
          'class' => array('btn')
        ),
        '#submit' => array('_iishagenda_option_cancel','node_form_submit'),
        '#weight'=>50
      );

      $form['submit_approve'] = array(
        '#type' => 'submit',
        '#value' => t('Bevestig deze optie als gekozen datum.'),
        '#attributes' => array(
          'class' => array('btn')
        ),
        '#submit' => array('_iishagenda_option_confirm','node_form_submit'),
        '#weight'=>50
      );
   }

    return $form;
  }
}


/**
 *  set status to cancel and save
 */
function _iishagenda_option_cancel($form, &$form_state){
	global $user, $base_url;

	$event = $form['#entity'];
	if(!is_user_admin() && !_iishagenda_is_event_controlled($event)){
		$subject = t("De reservering is geannuleerd / The reservation has been cancelled: " . $event->title);
		$body = array();
		$body[] = t("De reservering '" . $event->title . "' is geannuleerd.");
		$body[] = t("Zie") . ': ' . $base_url . "/node/".$event->nid;
		$body[] = '';
		$body[] = t("The reservation '" . $event->title . "' has been cancelled.");
		$body[] = t("See") . ': ' . $base_url . "/node/".$event->nid;
		_isshagenda_compose_send_mail($user->mail,$subject,$body,false);
	}
	$form_state['values']['field_event_status'][LANGUAGE_NONE][0]['value'] = 'cancelled';
}


/**
 *  uncheck option field
 */
function _iishagenda_option_confirm($form, &$form_state){
  $form_state['values']['field_event_option'][LANGUAGE_NONE][0]['value'] = '0';
}


/**
 *  Returns renderable array
 */
function _iishagenda_rebuild_rooms($form, $form_state)
{
  $form_state["rebuild"] = true;
  return $form['field_event_room'];
}


/**
 * Returns available rooms based on date
 */
function _iishagenda_get_available_rooms($form, $form_state)
{
  // TODO: if node is being edited, use values of the node instead of form state (because its empty when edit form loads initially)
  // defining variables
  $nid = issetor($form['nid']['#value'], null);

  $location_ids = array();
  $facilities_ids = array();
  $startdate = '2000-01-01T00:00:00';
  $enddate = '3001-01-01T00:00:00';
  $people = 0;

  if($form_state['rebuild']){

    // when rebuild use
    if (isset($form_state['values']['field_needed_facilities'])) {
      $facilities = $form_state['values']['field_needed_facilities'][LANGUAGE_NONE];
      foreach ($facilities as $facility) {
        if ($facility["tid"] !== null) $facilities_ids[] = intval($facility["tid"]);
      }
    }

    // gather selected location ids
    if (isset($form_state['values']['field_locations'])) {
      $locations = $form_state['values']['field_locations'][LANGUAGE_NONE];
      foreach ($locations as $location) {
        if ($location["tid"] !== null) $location_ids[] = intval($location["tid"]);
      }
    }

    $people =  issetor($form_state['values']['field_people'][LANGUAGE_NONE][0]['value'],'0');
    $startdate = issetor($form_state['values']['field_event_date'][LANGUAGE_NONE][0]['value'], '2000-01-01T00:00:00');
    $enddate = issetor($form_state['values']['field_event_date'][LANGUAGE_NONE][0]['value2'], '3001-01-01T00:00:00');

  } else if($form['nid']['#value'] !== null){
    // use node values as defaults
    $location_ids = $form['field_locations'][LANGUAGE_NONE]['#default_value'];
    $facilities_ids = $form['field_needed_facilities'][LANGUAGE_NONE]['#default_value'];
    $people = $form['field_people'][LANGUAGE_NONE][0]['value']['#default_value'];
    $startdate =  $form['#node']->field_event_date[LANGUAGE_NONE][0]['value'];
    $enddate =  $form['#node']->field_event_date[LANGUAGE_NONE][0]['value2'];
  }

	// todogcux
	// return empty room array if reqyured fields are empty
	// dit werkt/helpt niet !!!
	if ( $location_ids == '' || $startdate == '' || $enddate == '' || $people == '' || $people == '0') {
		return array();
	}

  // check which events times intersects with startdate
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'event')
    ->fieldCondition('field_event_date', 'value', $startdate, '>=')
    ->fieldCondition('field_event_date', 'value', $enddate, '<=')
    ->fieldCondition('field_event_status', 'value', 'cancelled', '!=');
  $results = $query->execute();

  // check which events times intersects with enddate
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'event')
    ->fieldCondition('field_event_date', 'value2', $startdate, '>=')
    ->fieldCondition('field_event_date', 'value2', $enddate, '<=')
    ->fieldCondition('field_event_status', 'value', 'cancelled', '!=');
  $results2 = $query->execute();

  // check which events times covers in time total
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'event')
    ->fieldCondition('field_event_date', 'value', $startdate, '<=')
    ->fieldCondition('field_event_date', 'value2', $enddate, '>=')
    ->fieldCondition('field_event_status', 'value', 'cancelled', '!=');
  $results3 = $query->execute();

  //merging data
  $events1 = count($results) > 0 ? $results['node'] : array();
  $events2 = count($results2) > 0 ? $results2['node'] : array();
  $events3 = count($results3) > 0 ? $results3['node'] : array();
  $events = $events1 + $events2 + $events3;//  merge and removes duplicates

  //remove current node to keep current choices
  if ($nid !== null) {
    unset($events[$nid]);
  }

  $events = node_load_multiple(array_keys($events));
  $booked_rooms = array();

  // loop through events to get booked rooms
  foreach ($events as $event) {
    $rooms = field_get_items('node', $event, 'field_event_room');
    if (is_array($rooms)) {
      foreach ($rooms as $room) {
        $booked_rooms[] = $room["nid"];
      }
    }
  }

  // todogcux
  // get all rooms (except unpublished)
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'room')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->fieldOrderBy('field_room_location', 'tid', 'ASC')
    ->fieldOrderBy('field_capacity', 'value', 'ASC');

  // Add facility condition
  if (count($facilities_ids) > 0) {
    foreach ($facilities_ids as $facilities_id) {
      if ($facilities_id !== 0) $query->fieldCondition('field_facilities', 'tid', $facilities_id);
    }
  }

  // Add location condition
  if (count($location_ids) > 0) {
    $query->fieldCondition('field_room_location', 'tid', $location_ids);
  }

  // TODOGCU
  // Add people condition
  // if not admin then check room capacity (if admin don't check room capacity)
//	if ( !is_user_admin() ) {
  if ( !is_user_event_administrator_all_rooms() ) {
	$query->fieldCondition('field_capacity', 'value', $people, '>=');
  }
  $results = $query->execute();

  $options = array();

  // remove booked rooms form all rooms
  foreach ($booked_rooms as $booked_room) {
    unset($results['node'][$booked_room]);
  }

  if (isset($results['node'])) {
    $nodes = node_load_multiple(array_keys($results['node']));

    foreach ($nodes as $node) {

      $location = field_get_items('node', $node, 'field_room_location');
      $location_term = taxonomy_term_load($location[0]['tid']);

      // capacity
      $capacity = field_get_items('node', $node, 'field_capacity');
      $capacity_num = $capacity[0]['value'];
      $capacity_note = field_get_items('node', $node, 'field_capacity_note');
      $capacity_note = $capacity_note[0]['value'];
      if ($capacity_note) {
        $capacity_note = " - " . $capacity_note;
      } else {
        $capacity_note = "";
      }

      $options[$node->nid] = '<b>'.$location_term->name . "</b> &#10142; <b>" . $node->title . "</b> - Max. " . $capacity_num . " personen" . $capacity_note;
    }
  }

  if(count($options) == 0 && $form_state['rebuild'] && $form_state['triggering_element']['#name'] !== "field_attachment_und_0_upload_button" ){
    drupal_set_message('Er zijn helaas geen beschikbare zalen gevonden. Kies aub een andere dag / tijd of locatie.');
  }

  return $options;
}

/**
 * @param $var
 * @param bool $default
 * @return bool
 */
function issetor(&$var, $default = false)
{
  return isset($var) ? $var : $default;
}