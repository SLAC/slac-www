<?php
/**
 * @file
 * slac_beans.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_beans_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function slac_beans_image_default_styles() {
  $styles = array();

  // Exported image style: block_brochures_thumbnail.
  $styles['block_brochures_thumbnail'] = array(
    'name' => 'block_brochures_thumbnail',
    'effects' => array(
      25 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 127,
          'height' => 127,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: block_image_text_link_thumbnail.
  $styles['block_image_text_link_thumbnail'] = array(
    'name' => 'block_image_text_link_thumbnail',
    'effects' => array(
      25 => array(
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
          'height' => 119,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
