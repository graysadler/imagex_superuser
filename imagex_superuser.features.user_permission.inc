<?php
/**
 * @file
 * imagex_superuser.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_superuser_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer administration menu select'.
  $permissions['administer administration menu select'] = array(
    'name' => 'administer administration menu select',
    'roles' => array(
      'Super User' => 'Super User',
    ),
    'module' => 'admin_select',
  );

  // Exported permission: 'select administration menu'.
  $permissions['select administration menu'] = array(
    'name' => 'select administration menu',
    'roles' => array(
      'Super User' => 'Super User',
    ),
    'module' => 'admin_select',
  );

  return $permissions;
}
