<?php
/**
 * @file
 * slac_paragraph_bundles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_paragraph_bundles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass paragraphs bundle content access'.
  $permissions['bypass paragraphs bundle content access'] = array(
    'name' => 'bypass paragraphs bundle content access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content image'.
  $permissions['create paragraph content image'] = array(
    'name' => 'create paragraph content image',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content simple'.
  $permissions['create paragraph content simple'] = array(
    'name' => 'create paragraph content simple',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content video'.
  $permissions['create paragraph content video'] = array(
    'name' => 'create paragraph content video',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content image'.
  $permissions['delete paragraph content image'] = array(
    'name' => 'delete paragraph content image',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content simple'.
  $permissions['delete paragraph content simple'] = array(
    'name' => 'delete paragraph content simple',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content video'.
  $permissions['delete paragraph content video'] = array(
    'name' => 'delete paragraph content video',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content image'.
  $permissions['update paragraph content image'] = array(
    'name' => 'update paragraph content image',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content simple'.
  $permissions['update paragraph content simple'] = array(
    'name' => 'update paragraph content simple',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content video'.
  $permissions['update paragraph content video'] = array(
    'name' => 'update paragraph content video',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content image'.
  $permissions['view paragraph content image'] = array(
    'name' => 'view paragraph content image',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'site_member' => 'site_member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content simple'.
  $permissions['view paragraph content simple'] = array(
    'name' => 'view paragraph content simple',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'site_member' => 'site_member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content video'.
  $permissions['view paragraph content video'] = array(
    'name' => 'view paragraph content video',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}