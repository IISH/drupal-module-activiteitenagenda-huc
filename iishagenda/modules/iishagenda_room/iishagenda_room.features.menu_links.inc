<?php
/**
 * @file
 * iishagenda_room.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function iishagenda_room_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-agenda_locations:locations.
  $menu_links['menu-agenda_locations:locations'] = array(
    'menu_name' => 'menu-agenda',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Locations',
    'options' => array(
      'identifier' => 'menu-agenda_locations:locations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');

  return $menu_links;
}
