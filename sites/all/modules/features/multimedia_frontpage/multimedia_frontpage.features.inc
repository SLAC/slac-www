<?php
/**
 * @file
 * multimedia_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function multimedia_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function multimedia_frontpage_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage-media.
  $styles['frontpage-media'] = array(
    'label' => 'frontpage-media',
    'effects' => array(
      45 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 453,
          'height' => 700,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
      46 => array(
        'name' => 'filtersie_sharpen',
        'data' => array(
          'sharpenlevel' => 40,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
