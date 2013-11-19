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
      42 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 224,
          'height' => 142,
          'retinafy' => 0,
        ),
        'weight' => -9,
      ),
      38 => array(
        'label' => 'Sharpen',
        'help' => 'Sharpen an image giving a parameter.',
        'effect callback' => 'filtersie_sharpen_effect',
        'form callback' => 'filtersie_sharpen_form',
        'summary theme' => 'filtersie_sharpen_summary',
        'dimensions passthrough' => TRUE,
        'module' => 'filtersie',
        'name' => 'filtersie_sharpen',
        'data' => array(
          'sharpenlevel' => 40,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: frontpage-headline-secondary.
  $styles['frontpage-headline-secondary'] = array(
    'name' => 'frontpage-headline-secondary',
    'effects' => array(
      44 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 112,
          'height' => 72,
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
          'height' => 71,
          'retinafy' => 1,
        ),
        'weight' => -9,
      ),
      43 => array(
        'label' => 'Sharpen',
        'help' => 'Sharpen an image giving a parameter.',
        'effect callback' => 'filtersie_sharpen_effect',
        'form callback' => 'filtersie_sharpen_form',
        'summary theme' => 'filtersie_sharpen_summary',
        'dimensions passthrough' => TRUE,
        'module' => 'filtersie',
        'name' => 'filtersie_sharpen',
        'data' => array(
          'sharpenlevel' => 20,
        ),
        'weight' => -8,
      ),
    ),
  );

  return $styles;
}
