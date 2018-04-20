<?php
/**
 * @file
 * iishagenda_room.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function iishagenda_room_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_room';
  $strongarm->value = '0';
  $export['language_content_type_room'] = $strongarm;

  return $export;
}
