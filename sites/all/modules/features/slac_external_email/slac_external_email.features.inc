<?php
/**
 * @file
 * slac_external_email.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_external_email_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_external_email_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_external_email_image_default_styles() {
  $styles = array();

  // Exported image style: external_email_main.
  $styles['external_email_main'] = array(
    'label' => 'external_email_main',
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: external_email_small.
  $styles['external_email_small'] = array(
    'label' => 'external_email_small',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 120,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
