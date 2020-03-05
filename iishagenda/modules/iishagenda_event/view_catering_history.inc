<?php
function view_catering() {
	$view = new view();
	$view->name = 'catering';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Catering';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'Catering';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['use_more_text'] = 'meer';
	$handler->display->display_options['access']['type'] = 'role';
	$handler->display->display_options['access']['role'] = array(
		3 => '3',
		4 => '4',
		5 => '5',
	);
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['query']['options']['distinct'] = TRUE;
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
//	$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
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
	$handler->display->display_options['empty']['area']['content'] = 'Er zijn geen <b>goedgekeurde</b> reserveringen met catering.';
	$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
	/* Field: Content: Status */
	$handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
	$handler->display->display_options['fields']['field_event_status']['table'] = 'field_data_field_event_status';
	$handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
	$handler->display->display_options['fields']['field_event_status']['label'] = '';
	$handler->display->display_options['fields']['field_event_status']['exclude'] = TRUE;
	$handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
	/* Field: Field: Opmerking */
	$handler->display->display_options['fields']['field_note']['id'] = 'field_note';
	$handler->display->display_options['fields']['field_note']['table'] = 'field_data_field_note';
	$handler->display->display_options['fields']['field_note']['field'] = 'field_note';
	$handler->display->display_options['fields']['field_note']['label'] = '';
	$handler->display->display_options['fields']['field_note']['exclude'] = TRUE;
	$handler->display->display_options['fields']['field_note']['alter']['alter_text'] = TRUE;
	$handler->display->display_options['fields']['field_note']['alter']['text'] = '<div class="messagepop pop">
	  <form method="post" id="new_message" action="/messages">
	    <p><label for="email">Your email or name</label><input type="text" size="30" name="email" id="email" /></p>
	    <p><label for="body">Message</label><textarea rows="6" name="body" id="body" cols="35"></textarea></p>
	    <p><input type="submit" value="Send Message" name="commit" id="message_submit"/> or <a class="close" href="/">Cancel</a></p>
	  </form>
	</div>
	
	<a href="/contact" id="contact">Contact Us</a>';
	$handler->display->display_options['fields']['field_note']['element_label_colon'] = FALSE;
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
		'edit' => '',
		'delete' => '',
		'add' => '',
		'description' => 0,
		'view_mode' => 'full',
		'empty' => 1,
	);
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

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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
	$handler->display->display_options['menu']['weight'] = '0';
	$handler->display->display_options['menu']['name'] = 'menu-agenda-admin';
	$handler->display->display_options['menu']['context'] = 0;
	$handler->display->display_options['menu']['context_only_inline'] = 0;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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
	/* Field: Field: Opmerking */
	$handler->display->display_options['fields']['field_note']['id'] = 'field_note';
	$handler->display->display_options['fields']['field_note']['table'] = 'field_data_field_note';
	$handler->display->display_options['fields']['field_note']['field'] = 'field_note';
	$handler->display->display_options['fields']['field_note']['label'] = '';
	$handler->display->display_options['fields']['field_note']['exclude'] = TRUE;
	$handler->display->display_options['fields']['field_note']['element_label_colon'] = FALSE;
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
		'edit' => '',
		'delete' => '',
		'add' => '',
		'description' => 0,
		'view_mode' => 'full',
		'empty' => 1,
	);
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

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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
		t('<h2>Catering Binnenkort</h2>'),
		t('Er zijn geen <b>goedgekeurde</b> reserveringen met catering.'),
		t('<div class="messagepop pop">
  <form method="post" id="new_message" action="/messages">
    <p><label for="email">Your email or name</label><input type="text" size="30" name="email" id="email" /></p>
    <p><label for="body">Message</label><textarea rows="6" name="body" id="body" cols="35"></textarea></p>
    <p><input type="submit" value="Send Message" name="commit" id="message_submit"/> or <a class="close" href="/">Cancel</a></p>
  </form>
</div>

<a href="/contact" id="contact">Contact Us</a>'),
		t('Evenement'),
		t('[title]<br>
[field_event_date]<br>
[field_event_date_1]<br>
[field_event_status]
'),
		t('Zaal'),
		t('Aantal personen'),
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
		t('Week'),
		t('Event-date -  start date (field_event_date)'),
		t('Catering vandaag block'),
	);

	return $view;
}
