<?php
/**
 * @file
 * last_story.features.inc
 */

/**
 * Implements hook_views_api().
 */
function last_story_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function last_story_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage-headline.
  $styles['frontpage-headline'] = array(
    'effects' => array(
      42 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 224,
          'height' => 142,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      37 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 224,
          'height' => 142,
          'retinafy' => 0,
        ),
        'weight' => -9,
      ),
      38 => array(
        'name' => 'filtersie_sharpen',
        'data' => array(
          'sharpenlevel' => 40,
        ),
        'weight' => -8,
      ),
    ),
    'label' => 'frontpage-headline',
  );

  // Exported image style: frontpage-headline-secondary.
  $styles['frontpage-headline-secondary'] = array(
    'label' => 'frontpage-headline-secondary',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 112,
          'height' => 72,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
