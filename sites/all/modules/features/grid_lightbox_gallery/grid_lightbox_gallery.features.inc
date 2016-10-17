<?php
/**
 * @file
 * grid_lightbox_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function grid_lightbox_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function grid_lightbox_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function grid_lightbox_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: grid-lightbox-gallery-full-size.
  $styles['grid-lightbox-gallery-full-size'] = array(
    'label' => 'grid-lightbox-gallery-full-size',
    'effects' => array(
      30 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-lightbox-gallery-thumbnail.
  $styles['grid-lightbox-gallery-thumbnail'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'grid-lightbox-gallery-thumbnail',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function grid_lightbox_gallery_node_info() {
  $items = array(
    'grid_lightbox_gallery' => array(
      'name' => t('Grid Lightbox Gallery'),
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
