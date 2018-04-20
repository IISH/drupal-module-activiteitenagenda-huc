<?php
/**
 * @file
 * iishagenda_event.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function iishagenda_event_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-agenda.
  $menus['menu-agenda'] = array(
    'menu_name' => 'menu-agenda',
    'title' => 'Agenda',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-agenda-admin.
  $menus['menu-agenda-admin'] = array(
    'menu_name' => 'menu-agenda-admin',
    'title' => 'Agenda Admin',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  t('Agenda Admin');

  return $menus;
}
