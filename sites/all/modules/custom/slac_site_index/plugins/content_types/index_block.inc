<?php

/**
 * Display Site Index block.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Site Index'),
  'single' => TRUE,
  'defaults' => array(),
  'description' => t("SLAC site index block"),
  'category' => t('SLAC'),
  'render callback' => 'index_block_content_type_render',
);

/**
 * Outputs site indexes.
 */
function index_block_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_site_index';
  $block->title = '';

  $index_block_html = variable_get('site_index_block_html', t(''));
  $block->content = $index_block_html;

  return $block;
}

/**
 * Returns the administrative title.
 */
function index_block_content_type_admin_title($subtype, $conf) {
  return t('Site Index');
}
