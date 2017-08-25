<?php
/**
 * @file
 * iishagenda_event.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function iishagenda_event_user_default_roles() {
  $roles = array();

  // Exported role: event administrator.
  $roles['event administrator'] = array(
    'name' => 'event administrator',
    'weight' => 3,
  );

  // Exported role: event caterer.
  $roles['event caterer'] = array(
    'name' => 'event caterer',
    'weight' => 4,
  );

  return $roles;
}
