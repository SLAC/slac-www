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
    'image' => array(
      'name' => 'Image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'simple' => array(
      'name' => 'Simple',
      'bundle' => 'simple',
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
