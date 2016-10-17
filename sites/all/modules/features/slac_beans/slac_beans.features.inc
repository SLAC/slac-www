<?php
/**
 * @file
 * slac_beans.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_beans_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function slac_beans_image_default_styles() {
  $styles = array();

  // Exported image style: block_brochures_thumbnail.
  $styles['block_brochures_thumbnail'] = array(
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 127,
          'height' => 127,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'block_brochures_thumbnail',
  );

  // Exported image style: block_content_block_thumbnail.
  $styles['block_content_block_thumbnail'] = array(
    'label' => 'block_content_block_thumbnail',
    'effects' => array(
      31 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 135,
          'height' => 124,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
