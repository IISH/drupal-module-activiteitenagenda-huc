<?php
/**
 * @file
 * iish_agenda_holiday.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iish_agenda_holiday_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'holidays';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'holidays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vakantie en feestdagen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create holiday content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<br>
<br>
<a href=\'/node/add/holiday\'>Vakantie- / feestdag toevoegen</a><br>
<br>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_holiday_date']['id'] = 'field_holiday_date';
  $handler->display->display_options['fields']['field_holiday_date']['table'] = 'field_data_field_holiday_date';
  $handler->display->display_options['fields']['field_holiday_date']['field'] = 'field_holiday_date';
  $handler->display->display_options['fields']['field_holiday_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['field_holiday_locations']['id'] = 'field_holiday_locations';
  $handler->display->display_options['fields']['field_holiday_locations']['table'] = 'field_data_field_holiday_locations';
  $handler->display->display_options['fields']['field_holiday_locations']['field'] = 'field_holiday_locations';
  $handler->display->display_options['fields']['field_holiday_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_holiday_locations']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'holiday' => 'holiday',
  );
  /* Filter criterion: Content: Locations (field_holiday_locations) */
  $handler->display->display_options['filters']['field_holiday_locations_tid']['id'] = 'field_holiday_locations_tid';
  $handler->display->display_options['filters']['field_holiday_locations_tid']['table'] = 'field_data_field_holiday_locations';
  $handler->display->display_options['filters']['field_holiday_locations_tid']['field'] = 'field_holiday_locations_tid';
  $handler->display->display_options['filters']['field_holiday_locations_tid']['value'] = '';
  $handler->display->display_options['filters']['field_holiday_locations_tid']['vocabulary'] = 'room_location';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'holidays';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vakantie- / feestdagen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['holidays'] = array(
    t('Master'),
    t('Vakantie en feestdagen'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<br>
<br>
<a href=\'/node/add/holiday\'>Vakantie- / feestdag toevoegen</a><br>
<br>'),
    t('Title'),
    t('Date'),
    t('Locations'),
    t('Edit link'),
    t('Page'),
  );
  $export['holidays'] = $view;

  return $export;
}
