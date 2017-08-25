<?php
/**
 * @file
 * iishagenda_room.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function iishagenda_room_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-agenda.
  $menus['menu-agenda'] = array(
    'menu_name' => 'menu-agenda',
    'title' => 'Agenda',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');


  return $menus;
}
