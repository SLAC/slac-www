<?php
/**
 * @file
 * lectures_poster_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lectures_poster_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lectures_poster_gallery_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function lectures_poster_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: lecture_portrait.
  $styles['lecture_portrait'] = array(
    'name' => 'lecture_portrait',
    'effects' => array(
      16 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
