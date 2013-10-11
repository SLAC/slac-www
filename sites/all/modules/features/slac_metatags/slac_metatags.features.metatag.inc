<?php
/**
 * @file
 * slac_metatags.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function slac_metatags_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[site:name] - [current-page:title]',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[site:name] - [node:title]',
      ),
      'page_author' => array(
        'value' => '[node:field_page_author]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'keywords' => array(
        'value' => '[node:field_blog_tags] [node:field-tags] [node:field_page_keywords]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[site:name] - [term:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'config' => array(
      'title' => array(
        'value' => '[site:name] - [user:name]',
      ),
    ),
  );

  return $config;
}
