<?php
/**
 * @file
 * iishagenda_room.features.inc
 */

/**
 * Implements hook_views_api().
 */
function iishagenda_room_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function iishagenda_room_image_default_styles() {
  $styles = array();

  // Exported image style: room.
  $styles['room'] = array(
    'label' => 'Room',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function iishagenda_room_node_info() {
  $items = array(
    'room' => array(
      'name' => t('Room'),
      'base' => 'node_content',
      'description' => t('A room is used as a location for Events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
