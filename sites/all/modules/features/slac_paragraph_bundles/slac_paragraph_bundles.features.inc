<?php
/**
 * @file
 * slac_paragraph_bundles.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function slac_paragraph_bundles_paragraphs_info() {
  $items = array(
    'block' => array(
      'name' => 'Block',
      'bundle' => 'block',
      'locked' => '1',
    ),
    'blockquote' => array(
      'name' => 'Blockquote',
      'bundle' => 'blockquote',
      'locked' => '1',
    ),
    'columns' => array(
      'name' => 'Columns',
      'bundle' => 'columns',
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
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}
