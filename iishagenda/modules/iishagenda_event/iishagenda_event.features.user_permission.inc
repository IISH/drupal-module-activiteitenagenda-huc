<?php
/**
 * @file
 * iishagenda_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iishagenda_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_attachment'.
  $permissions['create field_attachment'] = array(
    'name' => 'create field_attachment',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_clone_of'.
  $permissions['create field_clone_of'] = array(
    'name' => 'create field_clone_of',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_person'.
  $permissions['create field_contact_person'] = array(
    'name' => 'create field_contact_person',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_email'.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_event_status'.
  $permissions['create field_event_status'] = array(
    'name' => 'create field_event_status',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_existing_user'.
  $permissions['create field_existing_user'] = array(
    'name' => 'create field_existing_user',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phone'.
  $permissions['create field_phone'] = array(
    'name' => 'create field_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_status_changed_by'.
  $permissions['create field_status_changed_by'] = array(
    'name' => 'create field_status_changed_by',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
      'room administrator' => 'room administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_attachment'.
  $permissions['edit field_attachment'] = array(
    'name' => 'edit field_attachment',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_clone_of'.
  $permissions['edit field_clone_of'] = array(
    'name' => 'edit field_clone_of',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_person'.
  $permissions['edit field_contact_person'] = array(
    'name' => 'edit field_contact_person',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_email'.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_event_status'.
  $permissions['edit field_event_status'] = array(
    'name' => 'edit field_event_status',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_existing_user'.
  $permissions['edit field_existing_user'] = array(
    'name' => 'edit field_existing_user',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phone'.
  $permissions['edit field_phone'] = array(
    'name' => 'edit field_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_status_changed_by'.
  $permissions['edit field_status_changed_by'] = array(
    'name' => 'edit field_status_changed_by',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
      'room administrator' => 'room administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_attachment'.
  $permissions['edit own field_attachment'] = array(
    'name' => 'edit own field_attachment',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_clone_of'.
  $permissions['edit own field_clone_of'] = array(
    'name' => 'edit own field_clone_of',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_person'.
  $permissions['edit own field_contact_person'] = array(
    'name' => 'edit own field_contact_person',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email'.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_event_status'.
  $permissions['edit own field_event_status'] = array(
    'name' => 'edit own field_event_status',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_existing_user'.
  $permissions['edit own field_existing_user'] = array(
    'name' => 'edit own field_existing_user',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phone'.
  $permissions['edit own field_phone'] = array(
    'name' => 'edit own field_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_status_changed_by'.
  $permissions['edit own field_status_changed_by'] = array(
    'name' => 'edit own field_status_changed_by',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
      'room administrator' => 'room administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_attachment'.
  $permissions['view field_attachment'] = array(
    'name' => 'view field_attachment',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_clone_of'.
  $permissions['view field_clone_of'] = array(
    'name' => 'view field_clone_of',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_person'.
  $permissions['view field_contact_person'] = array(
    'name' => 'view field_contact_person',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_email'.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_event_status'.
  $permissions['view field_event_status'] = array(
    'name' => 'view field_event_status',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_existing_user'.
  $permissions['view field_existing_user'] = array(
    'name' => 'view field_existing_user',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phone'.
  $permissions['view field_phone'] = array(
    'name' => 'view field_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_status_changed_by'.
  $permissions['view field_status_changed_by'] = array(
    'name' => 'view field_status_changed_by',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
      'room administrator' => 'room administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_attachment'.
  $permissions['view own field_attachment'] = array(
    'name' => 'view own field_attachment',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_clone_of'.
  $permissions['view own field_clone_of'] = array(
    'name' => 'view own field_clone_of',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_person'.
  $permissions['view own field_contact_person'] = array(
    'name' => 'view own field_contact_person',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email'.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_event_status'.
  $permissions['view own field_event_status'] = array(
    'name' => 'view own field_event_status',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_existing_user'.
  $permissions['view own field_existing_user'] = array(
    'name' => 'view own field_existing_user',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phone'.
  $permissions['view own field_phone'] = array(
    'name' => 'view own field_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_status_changed_by'.
  $permissions['view own field_status_changed_by'] = array(
    'name' => 'view own field_status_changed_by',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'chief editor' => 'chief editor',
      'editor' => 'editor',
      'event administrator' => 'event administrator',
      'event administrator all rooms' => 'event administrator all rooms',
      'event caterer' => 'event caterer',
      'maintenance editor' => 'maintenance editor',
      'memory editor' => 'memory editor',
      'news editor' => 'news editor',
      'room administrator' => 'room administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
