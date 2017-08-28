<?php
/**
 * @file
 * iishagenda_room.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iishagenda_room_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rooms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rooms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Zaaloverzicht';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'room',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_room_location']['id'] = 'field_room_location';
  $handler->display->display_options['fields']['field_room_location']['table'] = 'field_data_field_room_location';
  $handler->display->display_options['fields']['field_room_location']['field'] = 'field_room_location';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_room_type']['id'] = 'field_room_type';
  $handler->display->display_options['fields']['field_room_type']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['fields']['field_room_type']['field'] = 'field_room_type';
  $handler->display->display_options['fields']['field_room_type']['hide_empty'] = TRUE;
  /* Field: Content: Telefoon */
  $handler->display->display_options['fields']['field_room_phone']['id'] = 'field_room_phone';
  $handler->display->display_options['fields']['field_room_phone']['table'] = 'field_data_field_room_phone';
  $handler->display->display_options['fields']['field_room_phone']['field'] = 'field_room_phone';
  $handler->display->display_options['fields']['field_room_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_room_phone']['type'] = 'text_plain';
  /* Field: Content: Maximale capaciteit */
  $handler->display->display_options['fields']['field_capacity']['id'] = 'field_capacity';
  $handler->display->display_options['fields']['field_capacity']['table'] = 'field_data_field_capacity';
  $handler->display->display_options['fields']['field_capacity']['field'] = 'field_capacity';
  $handler->display->display_options['fields']['field_capacity']['label'] = 'Max. capaciteit';
  $handler->display->display_options['fields']['field_capacity']['empty'] = '-';
  $handler->display->display_options['fields']['field_capacity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Facilities */
  $handler->display->display_options['fields']['field_facilities']['id'] = 'field_facilities';
  $handler->display->display_options['fields']['field_facilities']['table'] = 'field_data_field_facilities';
  $handler->display->display_options['fields']['field_facilities']['field'] = 'field_facilities';
  $handler->display->display_options['fields']['field_facilities']['empty'] = '-';
  $handler->display->display_options['fields']['field_facilities']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_facilities']['delta_offset'] = '0';
  /* Field: Content: Capaciteit toelichting */
  $handler->display->display_options['fields']['field_capacity_note']['id'] = 'field_capacity_note';
  $handler->display->display_options['fields']['field_capacity_note']['table'] = 'field_data_field_capacity_note';
  $handler->display->display_options['fields']['field_capacity_note']['field'] = 'field_capacity_note';
  $handler->display->display_options['fields']['field_capacity_note']['label'] = 'Toelichting';
  $handler->display->display_options['fields']['field_capacity_note']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_capacity_note']['empty'] = '-';
  /* Field: Content: Setup */
  $handler->display->display_options['fields']['field_setup']['id'] = 'field_setup';
  $handler->display->display_options['fields']['field_setup']['table'] = 'field_data_field_setup';
  $handler->display->display_options['fields']['field_setup']['field'] = 'field_setup';
  $handler->display->display_options['fields']['field_setup']['label'] = 'Opstelling';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room' => 'room',
  );
  /* Filter criterion: Content: Location (field_room_location) */
  $handler->display->display_options['filters']['field_room_location_tid']['id'] = 'field_room_location_tid';
  $handler->display->display_options['filters']['field_room_location_tid']['table'] = 'field_data_field_room_location';
  $handler->display->display_options['filters']['field_room_location_tid']['field'] = 'field_room_location_tid';
  $handler->display->display_options['filters']['field_room_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_room_location_tid']['expose']['operator_id'] = 'field_room_location_tid_op';
  $handler->display->display_options['filters']['field_room_location_tid']['expose']['label'] = 'Location ';
  $handler->display->display_options['filters']['field_room_location_tid']['expose']['operator'] = 'field_room_location_tid_op';
  $handler->display->display_options['filters']['field_room_location_tid']['expose']['identifier'] = 'field_room_location_tid';
  $handler->display->display_options['filters']['field_room_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_room_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_location_tid']['vocabulary'] = 'room_location';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'rooms';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Zalen';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['name'] = 'menu-agenda';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['rooms'] = array(
    t('Master'),
    t('Zaaloverzicht'),
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
    t('Location'),
    t('Type'),
    t('Telefoon'),
    t('Max. capaciteit'),
    t('-'),
    t('Facilities'),
    t('Toelichting'),
    t('Opstelling'),
    t('Location '),
    t('Page'),
  );
  $export['rooms'] = $view;

  return $export;
}
