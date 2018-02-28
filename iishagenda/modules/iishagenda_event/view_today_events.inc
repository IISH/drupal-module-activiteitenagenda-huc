<?php
function view_today_events() {
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
//	$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
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

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	/* Display: Page */
	$handler = $view->new_display('page', 'Page', 'page');
	$handler->display->display_options['path'] = 'today-events';

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

	return $view;
}