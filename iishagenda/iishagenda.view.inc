<?php

/**
 * Makes changes to event views output
 */
function iishagenda_views_pre_render(&$view) {
  global $base_url;

  // Add location name to page title (if filtered)
  if ($view->name === 'calendar' || ($view->name === 'upcoming_events' && $view->current_display == 'page')) {
    $location_id = _iishagenda_determine_location();
    $location = taxonomy_term_load($location_id);
    $view->build_info['title'] .= " - ".$location->name."";
  }

  switch ($view->name) {
    case 'today_events':
      foreach ($view->result as $r => &$result) {
        _cancelcheck($result);
      }
      break;
    case 'upcoming_events':
    case 'upcoming_flex':
      $ics_icon = $base_url . "/".drupal_get_path("module","iishagenda")."/images/ics-icon.gif";
      foreach ($view->result as $r => &$result) {
        if ($view->current_display !== "page_1") _cancelcheck($result); // My events display should show any status
        $result->field_field_event_date[0]['rendered']["#markup"] = "<a class='ics-link' href='" . $base_url . "/ics/".$result->nid."' title='Download .ics'><img src='".$ics_icon."' alt='ics'></a>".$result->field_field_event_date[0]['rendered']["#markup"];
      }
      break;
    case 'calendar':
    case 'calendar_flex':
      foreach ($view->result as $r => &$result) {
        _cancelcheck($result);
        $status = issetor($result->field_field_event_status[0]['raw']['value'], false);
        if (!$status || $status == "new") {
          $result->node_title = "- nog niet bevestigd -";
        }
      }
      break;
    case 'catering':
      foreach ($view->result as $r => &$result) {
        _cancelcheck($result);
      }
      break;

    case 'catering_archive':
      foreach ($view->result as $r => &$result) {
        _cancelcheck($result);
      }
      break;
  }
}

/**
 * Add cancelled div for cancelled events
 */
function _cancelcheck(&$result) {
  if (isset($result->field_field_event_status) && isset($result->field_field_event_status[0])) {
    if ($result->field_field_event_status[0]['raw']['value'] == 'cancelled') {
      $result->field_field_event_status[0]['rendered'] = "<span class='cancelled'>geannuleerd</span>";
    } else {
      $result->field_field_event_status[0]['rendered'] = "";
    }
  } else if (isset($result->field_field_canceled)) {
    // TODO: has to be removed when status field becomes the only one
    if ($result->field_field_canceled[0]['raw']['value'] == 1) {
      $result->field_field_canceled[0]['rendered'] = "<span class='cancelled'>geannuleerd</span>";
    } else {
      $result->field_field_canceled[0]['rendered'] = "";
    }
  }
}
