<?php
/**
 * @file
 * slac_paragraph_bundles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_paragraph_bundles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function slac_paragraph_bundles_paragraphs_info() {
  $items = array(
    'blank' => array(
      'name' => 'Blank',
      'bundle' => 'blank',
      'locked' => '1',
    ),
    'block' => array(
      'name' => 'Block',
      'bundle' => 'block',
      'locked' => '1',
    ),
    'block_cards' => array(
      'name' => 'Block Cards',
      'bundle' => 'block_cards',
      'locked' => '1',
    ),
    'blockquote' => array(
      'name' => 'Blockquote',
      'bundle' => 'blockquote',
      'locked' => '1',
    ),
    'card' => array(
      'name' => 'Card',
      'bundle' => 'card',
      'locked' => '1',
    ),
    'card_wrapper' => array(
      'name' => 'Card Wrapper',
      'bundle' => 'card_wrapper',
      'locked' => '1',
    ),
    'column_wrapper' => array(
      'name' => 'Column Wrapper',
      'bundle' => 'column_wrapper',
      'locked' => '1',
    ),
    'columns' => array(
      'name' => 'Columns',
      'bundle' => 'columns',
      'locked' => '1',
    ),
    'hero' => array(
      'name' => 'Hero',
      'bundle' => 'hero',
      'locked' => '1',
    ),
    'image' => array(
      'name' => 'Image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'image_bootstrap' => array(
      'name' => 'Image Bootstrap',
      'bundle' => 'image_bootstrap',
      'locked' => '1',
    ),
    'simple' => array(
      'name' => 'Simple',
      'bundle' => 'simple',
      'locked' => '1',
    ),
    'simple_bootstrap' => array(
      'name' => 'Simple Bootstrap',
      'bundle' => 'simple_bootstrap',
      'locked' => '1',
    ),
    'timeline' => array(
      'name' => 'Timeline',
      'bundle' => 'timeline',
      'locked' => '1',
    ),
    'timeline_bundler' => array(
      'name' => 'Timeline Bundler',
      'bundle' => 'timeline_bundler',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
    'video_bootstrap' => array(
      'name' => 'Video Bootstrap',
      'bundle' => 'video_bootstrap',
      'locked' => '1',
    ),
    'view' => array(
      'name' => 'View',
      'bundle' => 'view',
      'locked' => '1',
    ),
  );
  return $items;
}
