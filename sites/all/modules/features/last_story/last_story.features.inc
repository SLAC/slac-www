<?php
/**
 * @file
 * last_story.features.inc
 */

/**
 * Implements hook_views_api().
 */
function last_story_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function last_story_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage-headline.
  $styles['frontpage-headline'] = array(
    'name' => 'frontpage-headline',
    'effects' => array(
      29 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 139,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: frontpage-headline-secondary.
  $styles['frontpage-headline-secondary'] = array(
    'name' => 'frontpage-headline-secondary',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
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
