<?php
/**
 * @file
 * lectures_poster_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lectures_poster_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lectures_poster_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function lectures_poster_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: lecture_portrait.
  $styles['lecture_portrait'] = array(
    'label' => 'lecture_portrait',
    'effects' => array(
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 130,
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: lectures_gallery_large.
  $styles['lectures_gallery_large'] = array(
    'label' => 'lectures_gallery_large',
    'effects' => array(
      48 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 800,
          'upscale' => 0,
          'retinafy' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
