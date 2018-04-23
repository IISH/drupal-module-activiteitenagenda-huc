<?php
/**
 * @file
 * iishagenda_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function iishagenda_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agenda';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'administer-events' => 'administer-events',
        'approval-list' => 'approval-list',
        'calendar' => 'calendar',
        'catering' => 'catering',
        'locations' => 'locations',
        'my-events' => 'my-events',
        'node/add/event' => 'node/add/event',
        'rooms' => 'rooms',
        'upcoming-events' => 'upcoming-events',
      ),
    ),
    'node' => array(
      'values' => array(
        'event' => 'event',
        'room' => 'room',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'calendar' => 'calendar',
        'calendar-flex' => 'calendar-flex',
        'upcoming-events' => 'upcoming-events',
        'upcoming-flex' => 'upcoming-flex',
        'catering' => 'catering',
        'catering-archive' => 'catering-archive',
        'clone/*' => 'clone/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'room_location' => 'room_location',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'iishagenda-user_hello' => array(
          'module' => 'iishagenda',
          'delta' => 'user_hello',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'iishagenda-location_menu' => array(
          'module' => 'iishagenda',
          'delta' => 'location_menu',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'menu-menu-agenda' => array(
          'module' => 'menu',
          'delta' => 'menu-agenda',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'menu-menu-agenda-admin' => array(
          'module' => 'menu',
          'delta' => 'menu-agenda-admin',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'agenda',
    ),
  );
  $context->condition_mode = 0;
  $export['agenda'] = $context;

  return $export;
}
