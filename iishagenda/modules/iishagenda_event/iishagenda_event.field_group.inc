<?php
/**
 * @file
 * iishagenda_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iishagenda_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accomodation|node|event|default';
  $field_group->group_name = 'group_accomodation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accommodatie',
    'weight' => '3',
    'children' => array(
      0 => 'field_event_room',
      1 => 'field_note',
      2 => 'field_people',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Accommodatie',
      'instance_settings' => array(
        'classes' => 'group-accomodation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_accomodation|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accomodation|node|event|form';
  $field_group->group_name = 'group_accomodation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accommodatie',
    'weight' => '3',
    'children' => array(
      0 => 'field_event_room',
      1 => 'field_note',
      2 => 'field_people',
      3 => 'field_needed_facilities',
      4 => 'field_locations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Accommodatie',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-accomodation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_accomodation|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|event|default';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beheer',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Beheer',
      'instance_settings' => array(
        'classes' => 'group-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_admin|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|event|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beheer',
    'weight' => '0',
    'children' => array(
      0 => 'field_clone_of',
      1 => 'field_event_status',
      2 => 'group_organiser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Beheer',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_admin|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catering|node|event|default';
  $field_group->group_name = 'group_catering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catering',
    'weight' => '4',
    'children' => array(
      0 => 'field_catering',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Catering',
      'instance_settings' => array(
        'classes' => 'group-catering field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_catering|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catering|node|event|form';
  $field_group->group_name = 'group_catering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catering',
    'weight' => '5',
    'children' => array(
      0 => 'field_catering',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Catering',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-catering field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_catering|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extra|node|event|form';
  $field_group->group_name = 'group_extra';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra',
    'weight' => '4',
    'children' => array(
      0 => 'field_attachment',
      1 => 'field_expense',
      2 => 'field_internal_external',
      3 => 'field_reference_number',
      4 => 'field_show_frontpage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Extra',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-extra field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_extra|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_former|node|event|form';
  $field_group->group_name = 'group_former';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin';
  $field_group->data = array(
    'label' => 'Voormalige velden',
    'weight' => '34',
    'children' => array(
      0 => 'field_approved',
      1 => 'field_canceled',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Voormalige velden',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-former field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_former|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|event|default';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Algemeen',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_attachment',
      2 => 'field_clone_of',
      3 => 'field_event_date',
      4 => 'field_event_option',
      5 => 'field_event_status',
      6 => 'field_expense',
      7 => 'field_internal_external',
      8 => 'field_reference_number',
      9 => 'field_type_activity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Algemeen',
      'instance_settings' => array(
        'classes' => 'group-general field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_general|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|event|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Algemeen',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_event_option',
      2 => 'field_type_activity',
      3 => 'field_private',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Algemeen',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_general|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organiser|node|event|default';
  $field_group->group_name = 'group_organiser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisator',
    'weight' => '2',
    'children' => array(
      0 => 'field_contact_person',
      1 => 'field_email',
      2 => 'field_existing_user',
      3 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organisator',
      'instance_settings' => array(
        'classes' => 'group-organiser field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_organiser|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organiser|node|event|form';
  $field_group->group_name = 'group_organiser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin';
  $field_group->data = array(
    'label' => 'Organisator',
    'weight' => '33',
    'children' => array(
      0 => 'field_contact_person',
      1 => 'field_email',
      2 => 'field_existing_user',
      3 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organisator',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-organiser field-group-fieldset',
        'description' => 'Gebruik onderstaande velden om voor een bestaande gebruiker of voor een extern persoon een reservering te maken.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_organiser|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accommodatie');
  t('Algemeen');
  t('Beheer');
  t('Catering');
  t('Extra');
  t('Organisator');
  t('Voormalige velden');

  return $field_groups;
}
