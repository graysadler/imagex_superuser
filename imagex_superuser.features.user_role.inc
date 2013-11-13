<?php
/**
 * @file
 * imagex_superuser.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function imagex_superuser_user_default_roles() {
  $roles = array();

  // Exported role: Super User.
  $roles['Super User'] = array(
    'name' => 'Super User',
    'weight' => 8,
  );

  return $roles;
}
