<?php
function view_clones() {
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
//	$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
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

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

	return $view;
}