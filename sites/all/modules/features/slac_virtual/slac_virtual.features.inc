<?php
/**
 * @file
 * slac_virtual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_virtual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_virtual_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_virtual_image_default_styles() {
  $styles = array();

  // Exported image style: photo_gallery_cropped.
  $styles['photo_gallery_cropped'] = array(
    'label' => 'Photo Gallery Cropped',
    'effects' => array(
      51 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 600,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slac_virtual_node_info() {
  $items = array(
    'paragraph_layout_page' => array(
      'name' => t('Paragraph Layout Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
