<?php


/**
 * Outputs ics file based on Event id
 */
function _generate_ics()
{
  global $base_url;
  $node_id = arg(1);

  if (isset($node_id) && is_numeric($node_id)) {

    $address = "";

    $entity = entity_load('node', array($node_id));
    $entity = array_shift($entity);

    $string_after_clean_up = preg_replace("/[^a-z0-9\s]/i", "", $entity->title);
    $string_after_clean_up = str_replace(" ", "-", $string_after_clean_up);
    $filename = $string_after_clean_up . "_" . $entity->vid . ".ics";
    if(_iishagenda_is_event_private($node_id)){
      $filename = $node_id . ".ics";
    }

    $output_rooms = array();
    $rooms = field_get_items('node', $entity, 'field_event_room');
    if (is_array($rooms)) {
      foreach ($rooms as $room) {
        $r = entity_load('node', array($room["nid"]));
        $r = array_shift($r);
        $output_rooms[] = $r->title;
      }

      if (count($output_rooms) > 0) {
        $display_room = "Zaal: " . implode(", ", $output_rooms) . "; ";
      }else{
        $display_room = "";
      }
      $room = node_load($room["nid"]);
      $room_wrapper = entity_metadata_wrapper('node',$room);
      $location = $room_wrapper->field_room_location->value();
      $location_name = $location->name;
      $loc = $location->field_address[LANGUAGE_NONE][0];
      $address = '\n'.$loc['thoroughfare'].' '.$loc['postal_code']. ' '.$loc['locality'];
      $address = $display_room . $location_name . $address;
    }

    $warning = "*** Check voor dit evenement de agenda voor eventuele wijzigingen *** ";
    $summary = _iishagenda_change_node_title_if_private($entity->nid, $entity->title);
    $datestart = strtotime($entity->field_event_date[LANGUAGE_NONE][0]['value']);
    $dateend = strtotime($entity->field_event_date[LANGUAGE_NONE][0]['value2']);
    $description = $warning . issetor($entity->body[LANGUAGE_NONE][0]['value'], '');
    $uri = $base_url . "/node/" . $entity->vid;



    $output = "BEGIN:VCALENDAR
VERSION:2.0
PRODID:HuC
CALSCALE:GREGORIAN
BEGIN:VTIMEZONE
TZID:Europe/Amsterdam
BEGIN:DAYLIGHT
TZOFFSETFROM:+0100
RRULE:FREQ=YEARLY;BYMONTH=3;BYDAY=-1SU
DTSTART:19810329T020000
TZNAME:GMT+2
TZOFFSETTO:+0200
END:DAYLIGHT
BEGIN:STANDARD
TZOFFSETFROM:+0200
RRULE:FREQ=YEARLY;BYMONTH=10;BYDAY=-1SU
DTSTART:19961027T030000
TZNAME:GMT+1
TZOFFSETTO:+0100
END:STANDARD
END:VTIMEZONE
BEGIN:VEVENT
DTEND;TZID=Europe/Amsterdam:" . dateToCal($dateend) . "
UID:" . uniqid() . "
DTSTAMP:" . dateToCal(time()) . "
LOCATION:" . escapeString($address) . "
DESCRIPTION:" . escapeString($description) . "
URL;VALUE=URI:" . escapeString($uri) . "
SUMMARY:" . escapeString($summary) . "
DTSTART;TZID=Europe/Amsterdam:" . dateToCal($datestart) . "
END:VEVENT
END:VCALENDAR";

    header('Content-type: text/calendar; charset=utf-8');
    header('Content-Disposition: attachment; filename=' . $filename);
    echo $output;


  } else {
    return t("Invalid argument");
  }
}


function dateToCal($timestamp)
{
  return date('Ymd\THis', $timestamp);
}