<?php
/**
 * @file
 * iishagenda_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iishagenda_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'catering';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Catering';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Catering';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
    12 => '12',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_note' => 'field_note',
    'title' => 'title',
    'field_event_date_1' => 'field_event_date_1',
    'field_event_room' => 'field_event_room',
    'field_event_date' => 'field_event_date',
    'field_people' => 'field_people',
    'field_catering' => 'field_catering',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_room' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catering' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Catering vandaag</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h2>Catering Binnenkort</h2>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er zijn vandaag geen <b>goedgekeurde</b> reserveringen die catering en/of faciliteiten nodig hebben';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Zaal (field_event_room) */
  $handler->display->display_options['relationships']['field_event_room_nid']['id'] = 'field_event_room_nid';
  $handler->display->display_options['relationships']['field_event_room_nid']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['relationships']['field_event_room_nid']['field'] = 'field_event_room_nid';
  $handler->display->display_options['relationships']['field_event_room_nid']['delta'] = '-1';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Evenement';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[title]<br>
[field_event_date]<br>
[field_event_date_1]<br>
[field_event_status]
';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Field: Opmerking */
  $handler->display->display_options['fields']['field_note']['id'] = 'field_note';
  $handler->display->display_options['fields']['field_note']['table'] = 'field_data_field_note';
  $handler->display->display_options['fields']['field_note']['field'] = 'field_note';
  $handler->display->display_options['fields']['field_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_note']['element_label_colon'] = FALSE;
  /* Field: Content: Aantal personen */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'field_data_field_people';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['label'] = '# Pers.';
  /* Field: Content: Catering */
  $handler->display->display_options['fields']['field_catering']['id'] = 'field_catering';
  $handler->display->display_options['fields']['field_catering']['table'] = 'field_data_field_catering';
  $handler->display->display_options['fields']['field_catering']['field'] = 'field_catering';
  $handler->display->display_options['fields']['field_catering']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_catering']['settings'] = array(
    'add' => '',
    'edit' => '',
    'translate' => '',
    'delete' => '',
    'description' => 0,
    'view_mode' => 'full',
    'hide_empty' => 1,
    'empty' => 1,
  );
  $handler->display->display_options['fields']['field_catering']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_catering']['delta_offset'] = '0';
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'today';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'approved' => 'approved',
    'cancelled' => 'cancelled',
  );
  $handler->display->display_options['filters']['field_event_status_value']['group'] = 1;
  /* Filter criterion: Content: Catering (field_catering) */
  $handler->display->display_options['filters']['field_catering_value']['id'] = 'field_catering_value';
  $handler->display->display_options['filters']['field_catering_value']['table'] = 'field_data_field_catering';
  $handler->display->display_options['filters']['field_catering_value']['field'] = 'field_catering_value';
  $handler->display->display_options['filters']['field_catering_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_catering_value']['group'] = 2;
  /* Filter criterion: Field: Opmerking (field_note) */
  $handler->display->display_options['filters']['field_note_value']['id'] = 'field_note_value';
  $handler->display->display_options['filters']['field_note_value']['table'] = 'field_data_field_note';
  $handler->display->display_options['filters']['field_note_value']['field'] = 'field_note_value';
  $handler->display->display_options['filters']['field_note_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_note_value']['group'] = 2;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '52',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    12 => 0,
    10 => 0,
    11 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'room_location';

  /* Display: Catering vandaag (page) */
  $handler = $view->new_display('page', 'Catering vandaag (page)', 'page');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'catering:block_1';
  $handler->display->display_options['path'] = 'catering';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Catering';
  $handler->display->display_options['menu']['weight'] = '40';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Catering binnenkort block */
  $handler = $view->new_display('block', 'Catering binnenkort block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Catering per week';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_2',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_note' => 'field_note',
    'title' => 'title',
    'field_event_date_1' => 'field_event_date_1',
    'field_event_date' => 'field_event_date',
    'field_event_room' => 'field_event_room',
    'field_people' => 'field_people',
    'field_catering' => 'field_catering',
    'field_event_date_2' => 'field_event_date_2',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_room' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catering' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Catering per week</h2>
Dit zijn de komende evenementen (na vandaag) die catering en/of faciliteiten nodig hebben, ingedeeld per week.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Evenement';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[title]<br>
[field_event_date]<br>
[field_event_date_1]<br>
[field_event_status]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Field: Opmerking */
  $handler->display->display_options['fields']['field_note']['id'] = 'field_note';
  $handler->display->display_options['fields']['field_note']['table'] = 'field_data_field_note';
  $handler->display->display_options['fields']['field_note']['field'] = 'field_note';
  $handler->display->display_options['fields']['field_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_note']['alter']['text'] = '[field_event_room]<br>
<span class=\'field-note\'>[field_note]</span>';
  $handler->display->display_options['fields']['field_note']['element_label_colon'] = FALSE;
  /* Field: Content: Aantal personen */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'field_data_field_people';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['label'] = '# Pers.';
  /* Field: Content: Catering */
  $handler->display->display_options['fields']['field_catering']['id'] = 'field_catering';
  $handler->display->display_options['fields']['field_catering']['table'] = 'field_data_field_catering';
  $handler->display->display_options['fields']['field_catering']['field'] = 'field_catering';
  $handler->display->display_options['fields']['field_catering']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_catering']['settings'] = array(
    'add' => '',
    'edit' => '',
    'translate' => '',
    'delete' => '',
    'description' => 0,
    'view_mode' => 'full',
    'hide_empty' => 1,
    'empty' => 1,
  );
  $handler->display->display_options['fields']['field_catering']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_catering']['delta_offset'] = '0';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = 'Week';
  $handler->display->display_options['fields']['field_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'week',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event-date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'today';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Catering (field_catering) */
  $handler->display->display_options['filters']['field_catering_value']['id'] = 'field_catering_value';
  $handler->display->display_options['filters']['field_catering_value']['table'] = 'field_data_field_catering';
  $handler->display->display_options['filters']['field_catering_value']['field'] = 'field_catering_value';
  $handler->display->display_options['filters']['field_catering_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_catering_value']['group'] = 2;
  /* Filter criterion: Field: Opmerking (field_note) */
  $handler->display->display_options['filters']['field_note_value']['id'] = 'field_note_value';
  $handler->display->display_options['filters']['field_note_value']['table'] = 'field_data_field_note';
  $handler->display->display_options['filters']['field_note_value']['field'] = 'field_note_value';
  $handler->display->display_options['filters']['field_note_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_note_value']['group'] = 2;
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'approved' => 'approved',
    'cancelled' => 'cancelled',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '52',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'room_location';

  /* Display: Catering vandaag block */
  $handler = $view->new_display('block', 'Catering vandaag block', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_note' => 'field_note',
    'title' => 'title',
    'field_event_date_1' => 'field_event_date_1',
    'field_event_date' => 'field_event_date',
    'field_people' => 'field_people',
    'field_catering' => 'field_catering',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catering' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $translatables['catering'] = array(
    t('Master'),
    t('Catering'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('<h2>Catering vandaag</h2>'),
    t('<h2>Catering Binnenkort</h2>'),
    t('Er zijn vandaag geen <b>goedgekeurde</b> reserveringen die catering en/of faciliteiten nodig hebben'),
    t('field_event_room'),
    t('Evenement'),
    t('[title]<br>
[field_event_date]<br>
[field_event_date_1]<br>
[field_event_status]
'),
    t('Zaal'),
    t('Opmerking'),
    t('# Pers.'),
    t('Has taxonomy term'),
    t('Catering vandaag (page)'),
    t('more'),
    t('Catering binnenkort block'),
    t('Catering per week'),
    t('<h2>Catering per week</h2>
Dit zijn de komende evenementen (na vandaag) die catering en/of faciliteiten nodig hebben, ingedeeld per week.'),
    t('[title]<br>
[field_event_date]<br>
[field_event_date_1]<br>
[field_event_status]'),
    t('[field_event_room]<br>
<span class=\'field-note\'>[field_note]</span>'),
    t('Week'),
    t('Event-date -  start date (field_event_date)'),
    t('Catering vandaag block'),
  );
  $export['catering'] = $view;

  $view = new view();
  $view->name = 'catering_archive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'catering_archive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Catering archief';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
    12 => '12',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_note' => 'field_note',
    'title' => 'title',
    'field_event_date_1' => 'field_event_date_1',
    'field_event_room' => 'field_event_room',
    'field_event_date' => 'field_event_date',
    'field_people' => 'field_people',
    'field_catering' => 'field_catering',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_room' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catering' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h2>Catering Binnenkort</h2>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Geen (goedgekeurde) evenementen gevonden.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Zaal (field_event_room) */
  $handler->display->display_options['relationships']['field_event_room_nid']['id'] = 'field_event_room_nid';
  $handler->display->display_options['relationships']['field_event_room_nid']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['relationships']['field_event_room_nid']['field'] = 'field_event_room_nid';
  $handler->display->display_options['relationships']['field_event_room_nid']['delta'] = '-1';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Evenement';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[title]<br>
[field_event_date]<br>
[field_event_date_1]<br>
[field_event_status]
';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Field: Opmerking */
  $handler->display->display_options['fields']['field_note']['id'] = 'field_note';
  $handler->display->display_options['fields']['field_note']['table'] = 'field_data_field_note';
  $handler->display->display_options['fields']['field_note']['field'] = 'field_note';
  $handler->display->display_options['fields']['field_note']['label'] = '';
  $handler->display->display_options['fields']['field_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_note']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_note']['alter']['text'] = '<span class=\'field-note\'>[field_note]</span>';
  $handler->display->display_options['fields']['field_note']['element_label_colon'] = FALSE;
  /* Field: Content: Aantal personen */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'field_data_field_people';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  /* Field: Content: Catering */
  $handler->display->display_options['fields']['field_catering']['id'] = 'field_catering';
  $handler->display->display_options['fields']['field_catering']['table'] = 'field_data_field_catering';
  $handler->display->display_options['fields']['field_catering']['field'] = 'field_catering';
  $handler->display->display_options['fields']['field_catering']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_catering']['settings'] = array(
    'add' => '',
    'edit' => '',
    'translate' => '',
    'delete' => '',
    'description' => 0,
    'view_mode' => 'full',
    'hide_empty' => 1,
    'empty' => 1,
  );
  $handler->display->display_options['fields']['field_catering']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_catering']['delta_offset'] = '0';
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'approved' => 'approved',
    'cancelled' => 'cancelled',
  );
  $handler->display->display_options['filters']['field_event_status_value']['group'] = 1;
  /* Filter criterion: Content: Catering (field_catering) */
  $handler->display->display_options['filters']['field_catering_value']['id'] = 'field_catering_value';
  $handler->display->display_options['filters']['field_catering_value']['table'] = 'field_data_field_catering';
  $handler->display->display_options['filters']['field_catering_value']['field'] = 'field_catering_value';
  $handler->display->display_options['filters']['field_catering_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_catering_value']['group'] = 2;
  /* Filter criterion: Field: Opmerking (field_note) */
  $handler->display->display_options['filters']['field_note_value']['id'] = 'field_note_value';
  $handler->display->display_options['filters']['field_note_value']['table'] = 'field_data_field_note';
  $handler->display->display_options['filters']['field_note_value']['field'] = 'field_note_value';
  $handler->display->display_options['filters']['field_note_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_note_value']['group'] = 2;
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Vanaf';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    12 => 0,
    10 => 0,
    11 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'today';
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value_1']['id'] = 'field_event_date_value_1';
  $handler->display->display_options['filters']['field_event_date_value_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value_1']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['operator_id'] = 'field_event_date_value_1_op';
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['label'] = 'Tot';
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['operator'] = 'field_event_date_value_1_op';
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['identifier'] = 'field_event_date_value_1';
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    12 => 0,
    10 => 0,
    11 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value_1']['default_date'] = 'now + 30 day';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '52',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'room_location';

  /* Display: Catering archive (page) */
  $handler = $view->new_display('page', 'Catering archive (page)', 'page');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'catering-archive';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Catering archief';
  $handler->display->display_options['menu']['weight'] = '42';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['catering_archive'] = array(
    t('Master'),
    t('Catering archief'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('<h2>Catering Binnenkort</h2>'),
    t('Geen (goedgekeurde) evenementen gevonden.'),
    t('field_event_room'),
    t('Evenement'),
    t('[title]<br>
[field_event_date]<br>
[field_event_date_1]<br>
[field_event_status]
'),
    t('Zaal'),
    t('<span class=\'field-note\'>[field_note]</span>'),
    t('Aantal personen'),
    t('Catering'),
    t('Vanaf'),
    t('Tot'),
    t('Catering archive (page)'),
    t('more'),
  );
  $export['catering_archive'] = $view;

  $view = new view();
  $view->name = 'clones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'event::field_contact_person' => 'event::field_contact_person',
          'event::field_email' => 'event::field_email',
          'event::field_event_date' => 'event::field_event_date',
          'event::field_event_room' => 'event::field_event_room',
          'event::field_existing_user' => 'event::field_existing_user',
          'event::field_expense' => 'event::field_expense',
          'event::field_internal_external' => 'event::field_internal_external',
          'event::field_people' => 'event::field_people',
          'event::field_phone' => 'event::field_phone',
          'event::field_reference_number' => 'event::field_reference_number',
          'event::field_type_activity' => 'event::field_type_activity',
          'event::field_event_status' => 'event::field_event_status',
        ),
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Dupliceren';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit ';
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Content: Kloon van (field_clone_of) */
  $handler->display->display_options['arguments']['field_clone_of_target_id']['id'] = 'field_clone_of_target_id';
  $handler->display->display_options['arguments']['field_clone_of_target_id']['table'] = 'field_data_field_clone_of';
  $handler->display->display_options['arguments']['field_clone_of_target_id']['field'] = 'field_clone_of_target_id';
  $handler->display->display_options['arguments']['field_clone_of_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_clone_of_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_clone_of_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_clone_of_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_clone_of_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_clone_of_target_id']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Datum -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'today';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['clones'] = array(
    t('Master'),
    t('Clones'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Content'),
    t('- Choose an operation -'),
    t('Nid'),
    t('Dupliceren'),
    t('Datum'),
    t('Edit '),
    t('Alle'),
    t('Datum -  start date (field_event_date)'),
    t('Block'),
    t('more'),
  );
  $export['clones'] = $view;

  $view = new view();
  $view->name = 'today_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'today_events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Acitivteiten vandaag';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['label'] = '';
  $handler->display->display_options['fields']['field_event_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_room']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'approved' => 'approved',
    'cancelled' => 'cancelled',
  );
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'today';
  /* Filter criterion: Content: Toon op voorpagina (field_show_frontpage) */
  $handler->display->display_options['filters']['field_show_frontpage_value']['id'] = 'field_show_frontpage_value';
  $handler->display->display_options['filters']['field_show_frontpage_value']['table'] = 'field_data_field_show_frontpage';
  $handler->display->display_options['filters']['field_show_frontpage_value']['field'] = 'field_show_frontpage_value';
  $handler->display->display_options['filters']['field_show_frontpage_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'today-events';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['today_events'] = array(
    t('Master'),
    t('Acitivteiten vandaag'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Page'),
    t('more'),
    t('Block'),
  );
  $export['today_events'] = $view;

  $view = new view();
  $view->name = 'upcoming_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aankomende evenementen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Uitgebreide opties',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_type_activity_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_room_nid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_event_date_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'title' => 'title',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_approved';
  $handler->display->display_options['style_options']['info'] = array(
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Geen evenementen.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_type' => 'event_type',
    'room_facilities' => 0,
    'room_location' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Zaal (field_event_room) */
  $handler->display->display_options['relationships']['field_event_room_nid']['id'] = 'field_event_room_nid';
  $handler->display->display_options['relationships']['field_event_room_nid']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['relationships']['field_event_room_nid']['field'] = 'field_event_room_nid';
  $handler->display->display_options['relationships']['field_event_room_nid']['delta'] = '-1';
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Type';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['relationship'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/ics/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['alt'] = '.ics';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'bewerken';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['description'] = 'Filter op type';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_room_nid']['id'] = 'field_room_nid';
  $handler->display->display_options['filters']['field_room_nid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_nid']['field'] = 'field_room_nid';
  $handler->display->display_options['filters']['field_room_nid']['operator'] = 'in';
  $handler->display->display_options['filters']['field_room_nid']['value'] = array();
  $handler->display->display_options['filters']['field_room_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_room_nid']['expose']['operator_id'] = 'field_room_nid_op';
  $handler->display->display_options['filters']['field_room_nid']['expose']['label'] = 'Room';
  $handler->display->display_options['filters']['field_room_nid']['expose']['description'] = 'of op zaal';
  $handler->display->display_options['filters']['field_room_nid']['expose']['operator'] = 'field_room_nid_op';
  $handler->display->display_options['filters']['field_room_nid']['expose']['identifier'] = 'field_room_nid';
  $handler->display->display_options['filters']['field_room_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Goedgekeurd (field_approved) */
  $handler->display->display_options['filters']['field_approved_value']['id'] = 'field_approved_value';
  $handler->display->display_options['filters']['field_approved_value']['table'] = 'field_data_field_approved';
  $handler->display->display_options['filters']['field_approved_value']['field'] = 'field_approved_value';
  $handler->display->display_options['filters']['field_approved_value']['value'] = array(
    0 => '0',
  );

  /* Display: Upcoming events */
  $handler = $view->new_display('page', 'Upcoming events', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external_1']['id'] = 'field_internal_external_1';
  $handler->display->display_options['fields']['field_internal_external_1']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external_1']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external_1']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Filter op soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'approved' => 'approved',
    'cancelled' => 'cancelled',
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '6',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'room_location';
  $handler->display->display_options['path'] = 'upcoming-events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Aankomende evenementen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My events */
  $handler = $view->new_display('page', 'My events', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mijn evenementen';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'title' => 'title',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_canceled]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_option']['hide_alter_empty'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_room']['alter']['text'] = '[field_event_room]';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Filter op soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Vanaf (datum)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'my-events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mijn evenementen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Administer events (future) */
  $handler = $view->new_display('page', 'Administer events (future)', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beheer aankomende evenementen';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'title' => 'title',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title link';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_option']['hide_alter_empty'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'administer-events/future';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Aankomende evenementen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Beheer evenementen';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-agenda-admin';

  /* Display: Approval list */
  $handler = $view->new_display('page', 'Approval list', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wachtlijst';
  $handler->display->display_options['display_description'] = 'Laat de evenementen zien die nog gekeurd moeten worden.';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'title' => 'title',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Deze evenementen wachten op een goedkeuring.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er zijn geen evenementen die wachten op goedkeuring.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['empty'] = '-';
  $handler->display->display_options['fields']['field_event_option']['hide_alter_empty'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Filter op type';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'new' => 'new',
  );
  $handler->display->display_options['path'] = 'approval-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Wachtlijst';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Administer events (past) */
  $handler = $view->new_display('page', 'Administer events (past)', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beheer afgelopen evenementen';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_status' => 'field_event_status',
    'field_color' => 'field_color',
    'name' => 'name',
    'title_1' => 'title_1',
    'title' => 'title',
    'field_event_option' => 'field_event_option',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_event_room' => 'field_event_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_option' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_room' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title (link)';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'administer-events/past';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Afgelopen evenementen';
  $handler->display->display_options['menu']['weight'] = '99';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: ADMIN EVENTS TEMP */
  $handler = $view->new_display('page', 'ADMIN EVENTS TEMP', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ADMIN EVENTS TEMP';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'title' => 'title',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'status' => 'status',
          'event::field_approved' => 'event::field_approved',
          'event::field_event_date' => 'event::field_event_date',
          'event::field_event_room' => 'event::field_event_room',
          'event::field_internal_external' => 'event::field_internal_external',
          'event::field_type_activity' => 'event::field_type_activity',
          'event::field_event_status' => 'event::field_event_status',
        ),
      ),
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Type';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title link';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'bewerken';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Goedgekeurd */
  $handler->display->display_options['fields']['field_approved']['id'] = 'field_approved';
  $handler->display->display_options['fields']['field_approved']['table'] = 'field_data_field_approved';
  $handler->display->display_options['fields']['field_approved']['field'] = 'field_approved';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Sort criterion: Content: Goedgekeurd (field_approved) */
  $handler->display->display_options['sorts']['field_approved_value']['id'] = 'field_approved_value';
  $handler->display->display_options['sorts']['field_approved_value']['table'] = 'field_data_field_approved';
  $handler->display->display_options['sorts']['field_approved_value']['field'] = 'field_approved_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Goedgekeurd (field_approved) */
  $handler->display->display_options['filters']['field_approved_value']['id'] = 'field_approved_value';
  $handler->display->display_options['filters']['field_approved_value']['table'] = 'field_data_field_approved';
  $handler->display->display_options['filters']['field_approved_value']['field'] = 'field_approved_value';
  $handler->display->display_options['filters']['field_approved_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_approved_value']['expose']['operator_id'] = 'field_approved_value_op';
  $handler->display->display_options['filters']['field_approved_value']['expose']['label'] = 'Goedgekeurd';
  $handler->display->display_options['filters']['field_approved_value']['expose']['operator'] = 'field_approved_value_op';
  $handler->display->display_options['filters']['field_approved_value']['expose']['identifier'] = 'field_approved_value';
  $handler->display->display_options['filters']['field_approved_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Geannuleerd (field_canceled) */
  $handler->display->display_options['filters']['field_canceled_value']['id'] = 'field_canceled_value';
  $handler->display->display_options['filters']['field_canceled_value']['table'] = 'field_data_field_canceled';
  $handler->display->display_options['filters']['field_canceled_value']['field'] = 'field_canceled_value';
  $handler->display->display_options['filters']['field_canceled_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_canceled_value']['expose']['operator_id'] = 'field_canceled_value_op';
  $handler->display->display_options['filters']['field_canceled_value']['expose']['label'] = 'Geannuleerd';
  $handler->display->display_options['filters']['field_canceled_value']['expose']['operator'] = 'field_canceled_value_op';
  $handler->display->display_options['filters']['field_canceled_value']['expose']['identifier'] = 'field_canceled_value';
  $handler->display->display_options['filters']['field_canceled_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'admin-events-temp';
  $handler->display->display_options['menu']['title'] = 'Aankomende evenementen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Beheer evenementen';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-agenda-admin';

  /* Display: Administer flexwork (future) */
  $handler = $view->new_display('page', 'Administer flexwork (future)', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beheer flexwerken';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'title' => 'title',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title link';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_option']['hide_alter_empty'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'administer-flex/future';
  $handler->display->display_options['menu']['title'] = 'Aankomend flexwerken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Beheer flexwerken';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-agenda-admin';

  /* Display: Administer flexwork (past) */
  $handler = $view->new_display('page', 'Administer flexwork (past)', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beheer flexwerken (verleden)';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_status' => 'field_event_status',
    'field_color' => 'field_color',
    'name' => 'name',
    'title_1' => 'title_1',
    'title' => 'title',
    'field_event_option' => 'field_event_option',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_event_room' => 'field_event_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_option' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_room' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title (link)';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Goedgekeurd (field_approved) */
  $handler->display->display_options['sorts']['field_approved_value']['id'] = 'field_approved_value';
  $handler->display->display_options['sorts']['field_approved_value']['table'] = 'field_data_field_approved';
  $handler->display->display_options['sorts']['field_approved_value']['field'] = 'field_approved_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'administer-flex/past';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Afgelopen flexwerken';
  $handler->display->display_options['menu']['weight'] = '99';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['upcoming_events'] = array(
    t('Master'),
    t('Aankomende evenementen'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Uitgebreide opties'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Geen evenementen.'),
    t('term'),
    t('author'),
    t('field_event_room'),
    t('#[field_color]'),
    t('Type'),
    t('[name]'),
    t('int / ext'),
    t('Title'),
    t('[title]'),
    t('Datum'),
    t('Room'),
    t('.ics'),
    t('bewerken'),
    t('Status'),
    t('Alle'),
    t('Filter op type'),
    t('of op zaal'),
    t('Upcoming events'),
    t('more'),
    t('[title] [field_event_status]'),
    t('Zaal'),
    t('Filter op soort'),
    t('My events'),
    t('Mijn evenementen'),
    t('[title] [field_canceled]'),
    t('[field_event_room]'),
    t('Vanaf (datum)'),
    t('Administer events (future)'),
    t('Beheer aankomende evenementen'),
    t('Title link'),
    t('[title_1] [field_event_status]'),
    t('soort'),
    t('Approval list'),
    t('Wachtlijst'),
    t('Laat de evenementen zien die nog gekeurd moeten worden.'),
    t('Deze evenementen wachten op een goedkeuring.'),
    t('Er zijn geen evenementen die wachten op goedkeuring.'),
    t('Optie'),
    t('-'),
    t('Administer events (past)'),
    t('Beheer afgelopen evenementen'),
    t('Title (link)'),
    t('ADMIN EVENTS TEMP'),
    t('Content'),
    t('- Choose an operation -'),
    t('Goedgekeurd'),
    t('Name'),
    t('Geannuleerd'),
    t('Administer flexwork (future)'),
    t('Beheer flexwerken'),
    t('Administer flexwork (past)'),
    t('Beheer flexwerken (verleden)'),
  );
  $export['upcoming_events'] = $view;

  $view = new view();
  $view->name = 'upcoming_flex';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming flex';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aankomende flexwerken';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Uitgebreide opties',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_type_activity_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_room_nid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_event_date_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'title' => 'title',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_approved';
  $handler->display->display_options['style_options']['info'] = array(
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Geen flexwerken bekend.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_type' => 'event_type',
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Zaal (field_event_room) */
  $handler->display->display_options['relationships']['field_event_room_nid']['id'] = 'field_event_room_nid';
  $handler->display->display_options['relationships']['field_event_room_nid']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['relationships']['field_event_room_nid']['field'] = 'field_event_room_nid';
  $handler->display->display_options['relationships']['field_event_room_nid']['delta'] = '-1';
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Type';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['relationship'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/ics/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['alt'] = '.ics';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'bewerken';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['description'] = 'Filter op type';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_room_nid']['id'] = 'field_room_nid';
  $handler->display->display_options['filters']['field_room_nid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_nid']['field'] = 'field_room_nid';
  $handler->display->display_options['filters']['field_room_nid']['operator'] = 'in';
  $handler->display->display_options['filters']['field_room_nid']['value'] = array();
  $handler->display->display_options['filters']['field_room_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_room_nid']['expose']['operator_id'] = 'field_room_nid_op';
  $handler->display->display_options['filters']['field_room_nid']['expose']['label'] = 'Room';
  $handler->display->display_options['filters']['field_room_nid']['expose']['description'] = 'of op zaal';
  $handler->display->display_options['filters']['field_room_nid']['expose']['operator'] = 'field_room_nid_op';
  $handler->display->display_options['filters']['field_room_nid']['expose']['identifier'] = 'field_room_nid';
  $handler->display->display_options['filters']['field_room_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Goedgekeurd (field_approved) */
  $handler->display->display_options['filters']['field_approved_value']['id'] = 'field_approved_value';
  $handler->display->display_options['filters']['field_approved_value']['table'] = 'field_data_field_approved';
  $handler->display->display_options['filters']['field_approved_value']['field'] = 'field_approved_value';
  $handler->display->display_options['filters']['field_approved_value']['value'] = array(
    0 => '0',
  );

  /* Display: Upcoming events */
  $handler = $view->new_display('page', 'Upcoming events', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external_1']['id'] = 'field_internal_external_1';
  $handler->display->display_options['fields']['field_internal_external_1']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external_1']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external_1']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Filter op soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'approved' => 'approved',
    'cancelled' => 'cancelled',
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'upcoming-flex';
  $handler->display->display_options['menu']['title'] = 'Upcoming flexworking';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My events */
  $handler = $view->new_display('page', 'My events', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mijn evenementen';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'title' => 'title',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Mijn evenementen';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_canceled]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_option']['hide_alter_empty'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Filter op soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Vanaf (datum)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'my-events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mijn evenementen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Administer events (future) */
  $handler = $view->new_display('page', 'Administer events (future)', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beheer aankomende evenementen';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'title' => 'title',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title link';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_option']['hide_alter_empty'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'administer-events/future';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Aankomende evenementen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Beheer evenementen';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-agenda-admin';

  /* Display: Approval list */
  $handler = $view->new_display('page', 'Approval list', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wachtlijst';
  $handler->display->display_options['display_description'] = 'Laat de evenementen zien die nog gekeurd moeten worden.';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'title' => 'title',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Deze evenementen wachten op een goedkeuring.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er zijn geen evenementen die wachten op goedkeuring.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['empty'] = '-';
  $handler->display->display_options['fields']['field_event_option']['hide_alter_empty'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Filter op type';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'new' => 'new',
  );
  $handler->display->display_options['path'] = 'approval-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Wachtlijst';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Administer events (past) */
  $handler = $view->new_display('page', 'Administer events (past)', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beheer afgelopen evenementen';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_status' => 'field_event_status',
    'field_color' => 'field_color',
    'name' => 'name',
    'title_1' => 'title_1',
    'title' => 'title',
    'field_event_option' => 'field_event_option',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_event_room' => 'field_event_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_option' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_room' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title (link)';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'administer-events/past';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Afgelopen evenementen';
  $handler->display->display_options['menu']['weight'] = '99';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: ADMIN EVENTS TEMP */
  $handler = $view->new_display('page', 'ADMIN EVENTS TEMP', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ADMIN EVENTS TEMP';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'title' => 'title',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'status' => 'status',
          'event::field_approved' => 'event::field_approved',
          'event::field_event_date' => 'event::field_event_date',
          'event::field_event_room' => 'event::field_event_room',
          'event::field_internal_external' => 'event::field_internal_external',
          'event::field_type_activity' => 'event::field_type_activity',
          'event::field_event_status' => 'event::field_event_status',
        ),
      ),
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Type';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title link';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'bewerken';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'admin-events-temp';
  $handler->display->display_options['menu']['title'] = 'Aankomende evenementen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Beheer evenementen';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-agenda-admin';

  /* Display: Administer flexwork (future) */
  $handler = $view->new_display('page', 'Administer flexwork (future)', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beheer flexwerken';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_special' => 'field_special',
    'field_color' => 'field_color',
    'title' => 'title',
    'name' => 'name',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_room' => 'field_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
    'field_approved' => 'field_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_approved' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title link';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_option']['hide_alter_empty'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'administer-flex/future';
  $handler->display->display_options['menu']['title'] = 'Aankomend flexwerken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Beheer flexwerken';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-agenda-admin';

  /* Display: Administer flexwork (past) */
  $handler = $view->new_display('page', 'Administer flexwork (past)', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beheer flexwerken (verleden)';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_status' => 'field_event_status',
    'field_color' => 'field_color',
    'name' => 'name',
    'title_1' => 'title_1',
    'title' => 'title',
    'field_event_option' => 'field_event_option',
    'field_internal_external' => 'field_internal_external',
    'field_event_date' => 'field_event_date',
    'field_event_room' => 'field_event_room',
    'edit_node' => 'edit_node',
    'field_event_date_1' => 'field_event_date_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_option' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_external' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_room' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['alter']['text'] = '#[field_color]';
  $handler->display->display_options['fields']['field_color']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_color']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_color']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'jquery_colorpicker_raw_hex_display';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'css[name]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title (link)';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_event_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Optie */
  $handler->display->display_options['fields']['field_event_option']['id'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['table'] = 'field_data_field_event_option';
  $handler->display->display_options['fields']['field_event_option']['field'] = 'field_event_option';
  $handler->display->display_options['fields']['field_event_option']['label'] = '';
  $handler->display->display_options['fields']['field_event_option']['element_label_colon'] = FALSE;
  /* Field: Content: Intern / Extern */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['label'] = 'int / ext';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zaal */
  $handler->display->display_options['fields']['field_event_room']['id'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['table'] = 'field_data_field_event_room';
  $handler->display->display_options['fields']['field_event_room']['field'] = 'field_event_room';
  $handler->display->display_options['fields']['field_event_room']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Datum -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Soort activiteit (field_type_activity) */
  $handler->display->display_options['filters']['field_type_activity_tid']['id'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['table'] = 'field_data_field_type_activity';
  $handler->display->display_options['filters']['field_type_activity_tid']['field'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator_id'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['label'] = 'soort';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['operator'] = 'field_type_activity_tid_op';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['identifier'] = 'field_type_activity_tid';
  $handler->display->display_options['filters']['field_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_activity_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator_id'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['operator'] = 'field_event_status_value_op';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['identifier'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Datum - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_room_type) */
  $handler->display->display_options['filters']['field_room_type_value']['id'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['filters']['field_room_type_value']['field'] = 'field_room_type_value';
  $handler->display->display_options['filters']['field_room_type_value']['relationship'] = 'field_event_room_nid';
  $handler->display->display_options['filters']['field_room_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'administer-flex/past';
  $handler->display->display_options['menu']['title'] = 'Afgelopen flexwerken';
  $handler->display->display_options['menu']['weight'] = '99';
  $handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['upcoming_flex'] = array(
    t('Master'),
    t('Aankomende flexwerken'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Uitgebreide opties'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Geen flexwerken bekend.'),
    t('term'),
    t('author'),
    t('field_event_room'),
    t('#[field_color]'),
    t('Type'),
    t('[name]'),
    t('int / ext'),
    t('Title'),
    t('[title]'),
    t('Datum'),
    t('Room'),
    t('.ics'),
    t('bewerken'),
    t('Status'),
    t('Alle'),
    t('Filter op type'),
    t('of op zaal'),
    t('Upcoming events'),
    t('more'),
    t('[title] [field_event_status]'),
    t('Zaal'),
    t('Filter op soort'),
    t('My events'),
    t('Mijn evenementen'),
    t('[title] [field_canceled]'),
    t('Vanaf (datum)'),
    t('Administer events (future)'),
    t('Beheer aankomende evenementen'),
    t('Title link'),
    t('[title_1] [field_event_status]'),
    t('soort'),
    t('Approval list'),
    t('Wachtlijst'),
    t('Laat de evenementen zien die nog gekeurd moeten worden.'),
    t('Deze evenementen wachten op een goedkeuring.'),
    t('Er zijn geen evenementen die wachten op goedkeuring.'),
    t('Optie'),
    t('-'),
    t('Administer events (past)'),
    t('Beheer afgelopen evenementen'),
    t('Title (link)'),
    t('ADMIN EVENTS TEMP'),
    t('Content'),
    t('- Choose an operation -'),
    t('Name'),
    t('Administer flexwork (future)'),
    t('Beheer flexwerken'),
    t('Administer flexwork (past)'),
    t('Beheer flexwerken (verleden)'),
  );
  $export['upcoming_flex'] = $view;

  return $export;
}
