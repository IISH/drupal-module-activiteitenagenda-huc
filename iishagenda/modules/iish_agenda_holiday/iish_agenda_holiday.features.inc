<?php
/**
 * @file
 * iish_agenda_holiday.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iish_agenda_holiday_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iish_agenda_holiday_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function iish_agenda_holiday_node_info() {
  $items = array(
    'holiday' => array(
      'name' => t('Holiday'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
