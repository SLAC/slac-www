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

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'bypass paragraphs bundle content access'.
  $permissions['bypass paragraphs bundle content access'] = array(
    'name' => 'bypass paragraphs bundle content access',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content blank'.
  $permissions['create paragraph content blank'] = array(
    'name' => 'create paragraph content blank',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content block'.
  $permissions['create paragraph content block'] = array(
    'name' => 'create paragraph content block',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content blockquote'.
  $permissions['create paragraph content blockquote'] = array(
    'name' => 'create paragraph content blockquote',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content card'.
  $permissions['create paragraph content card'] = array(
    'name' => 'create paragraph content card',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content card_wrapper'.
  $permissions['create paragraph content card_wrapper'] = array(
    'name' => 'create paragraph content card_wrapper',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content column_wrapper'.
  $permissions['create paragraph content column_wrapper'] = array(
    'name' => 'create paragraph content column_wrapper',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content columns'.
  $permissions['create paragraph content columns'] = array(
    'name' => 'create paragraph content columns',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content hero'.
  $permissions['create paragraph content hero'] = array(
    'name' => 'create paragraph content hero',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
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

  // Exported permission: 'create paragraph content image_bootstrap'.
  $permissions['create paragraph content image_bootstrap'] = array(
    'name' => 'create paragraph content image_bootstrap',
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

  // Exported permission: 'create paragraph content simple_bootstrap'.
  $permissions['create paragraph content simple_bootstrap'] = array(
    'name' => 'create paragraph content simple_bootstrap',
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

  // Exported permission: 'create paragraph content video_bootstrap'.
  $permissions['create paragraph content video_bootstrap'] = array(
    'name' => 'create paragraph content video_bootstrap',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content view'.
  $permissions['create paragraph content view'] = array(
    'name' => 'create paragraph content view',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content blank'.
  $permissions['delete paragraph content blank'] = array(
    'name' => 'delete paragraph content blank',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content block'.
  $permissions['delete paragraph content block'] = array(
    'name' => 'delete paragraph content block',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content blockquote'.
  $permissions['delete paragraph content blockquote'] = array(
    'name' => 'delete paragraph content blockquote',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content card'.
  $permissions['delete paragraph content card'] = array(
    'name' => 'delete paragraph content card',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content card_wrapper'.
  $permissions['delete paragraph content card_wrapper'] = array(
    'name' => 'delete paragraph content card_wrapper',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content column_wrapper'.
  $permissions['delete paragraph content column_wrapper'] = array(
    'name' => 'delete paragraph content column_wrapper',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content columns'.
  $permissions['delete paragraph content columns'] = array(
    'name' => 'delete paragraph content columns',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content hero'.
  $permissions['delete paragraph content hero'] = array(
    'name' => 'delete paragraph content hero',
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

  // Exported permission: 'delete paragraph content image_bootstrap'.
  $permissions['delete paragraph content image_bootstrap'] = array(
    'name' => 'delete paragraph content image_bootstrap',
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

  // Exported permission: 'delete paragraph content simple_bootstrap'.
  $permissions['delete paragraph content simple_bootstrap'] = array(
    'name' => 'delete paragraph content simple_bootstrap',
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

  // Exported permission: 'delete paragraph content video_bootstrap'.
  $permissions['delete paragraph content video_bootstrap'] = array(
    'name' => 'delete paragraph content video_bootstrap',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content view'.
  $permissions['delete paragraph content view'] = array(
    'name' => 'delete paragraph content view',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content blank'.
  $permissions['update paragraph content blank'] = array(
    'name' => 'update paragraph content blank',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content block'.
  $permissions['update paragraph content block'] = array(
    'name' => 'update paragraph content block',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content blockquote'.
  $permissions['update paragraph content blockquote'] = array(
    'name' => 'update paragraph content blockquote',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content card'.
  $permissions['update paragraph content card'] = array(
    'name' => 'update paragraph content card',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content card_wrapper'.
  $permissions['update paragraph content card_wrapper'] = array(
    'name' => 'update paragraph content card_wrapper',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content column_wrapper'.
  $permissions['update paragraph content column_wrapper'] = array(
    'name' => 'update paragraph content column_wrapper',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content columns'.
  $permissions['update paragraph content columns'] = array(
    'name' => 'update paragraph content columns',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content hero'.
  $permissions['update paragraph content hero'] = array(
    'name' => 'update paragraph content hero',
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

  // Exported permission: 'update paragraph content image_bootstrap'.
  $permissions['update paragraph content image_bootstrap'] = array(
    'name' => 'update paragraph content image_bootstrap',
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

  // Exported permission: 'update paragraph content simple_bootstrap'.
  $permissions['update paragraph content simple_bootstrap'] = array(
    'name' => 'update paragraph content simple_bootstrap',
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

  // Exported permission: 'update paragraph content video_bootstrap'.
  $permissions['update paragraph content video_bootstrap'] = array(
    'name' => 'update paragraph content video_bootstrap',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content view'.
  $permissions['update paragraph content view'] = array(
    'name' => 'update paragraph content view',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content blank'.
  $permissions['view paragraph content blank'] = array(
    'name' => 'view paragraph content blank',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content block'.
  $permissions['view paragraph content block'] = array(
    'name' => 'view paragraph content block',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content blockquote'.
  $permissions['view paragraph content blockquote'] = array(
    'name' => 'view paragraph content blockquote',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content card'.
  $permissions['view paragraph content card'] = array(
    'name' => 'view paragraph content card',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content card_wrapper'.
  $permissions['view paragraph content card_wrapper'] = array(
    'name' => 'view paragraph content card_wrapper',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content column_wrapper'.
  $permissions['view paragraph content column_wrapper'] = array(
    'name' => 'view paragraph content column_wrapper',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content columns'.
  $permissions['view paragraph content columns'] = array(
    'name' => 'view paragraph content columns',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content hero'.
  $permissions['view paragraph content hero'] = array(
    'name' => 'view paragraph content hero',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
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

  // Exported permission: 'view paragraph content image_bootstrap'.
  $permissions['view paragraph content image_bootstrap'] = array(
    'name' => 'view paragraph content image_bootstrap',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'view paragraph content simple_bootstrap'.
  $permissions['view paragraph content simple_bootstrap'] = array(
    'name' => 'view paragraph content simple_bootstrap',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'view paragraph content video_bootstrap'.
  $permissions['view paragraph content video_bootstrap'] = array(
    'name' => 'view paragraph content video_bootstrap',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content view'.
  $permissions['view paragraph content view'] = array(
    'name' => 'view paragraph content view',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
