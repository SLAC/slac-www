<?php
/**
 * @file
 * slac_virtual.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_virtual_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'replicate entities'.
  $permissions['replicate entities'] = array(
    'name' => 'replicate entities',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'replicate_ui',
  );

  return $permissions;
}
