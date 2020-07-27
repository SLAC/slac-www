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

  // Exported permission: 'create any grouped_content_as_cards bean'.
  $permissions['create any grouped_content_as_cards bean'] = array(
    'name' => 'create any grouped_content_as_cards bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any grouped_content_as_cards bean'.
  $permissions['delete any grouped_content_as_cards bean'] = array(
    'name' => 'delete any grouped_content_as_cards bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any grouped_content_as_cards bean'.
  $permissions['edit any grouped_content_as_cards bean'] = array(
    'name' => 'edit any grouped_content_as_cards bean',
    'roles' => array(),
    'module' => 'bean',
  );

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

  // Exported permission: 'view any grouped_content_as_cards bean'.
  $permissions['view any grouped_content_as_cards bean'] = array(
    'name' => 'view any grouped_content_as_cards bean',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
