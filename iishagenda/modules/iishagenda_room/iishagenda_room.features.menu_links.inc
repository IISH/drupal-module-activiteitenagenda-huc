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

  // Exported menu link: menu-agenda_locaties:locations.
  $menu_links['menu-agenda_locaties:locations'] = array(
    'menu_name' => 'menu-agenda',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Locaties',
    'options' => array(
      'identifier' => 'menu-agenda_locaties:locations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 0,
  );
  // Exported menu link: menu-agenda_zalen:rooms.
  $menu_links['menu-agenda_zalen:rooms'] = array(
    'menu_name' => 'menu-agenda',
    'link_path' => 'rooms',
    'router_path' => 'rooms',
    'link_title' => 'Zalen',
    'options' => array(
      'identifier' => 'menu-agenda_zalen:rooms',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Locaties');
  t('Zalen');

  return $menu_links;
}
