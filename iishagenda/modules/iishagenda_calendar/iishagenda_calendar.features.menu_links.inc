<?php
/**
 * @file
 * iishagenda_calendar.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function iishagenda_calendar_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-agenda_kalender:calendar.
  $menu_links['menu-agenda_kalender:calendar'] = array(
    'menu_name' => 'menu-agenda',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Kalender',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-agenda_kalender:calendar',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Kalender');

  return $menu_links;
}
