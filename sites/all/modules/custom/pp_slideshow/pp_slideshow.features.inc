<?php
/**
 * @file
 * pp_slideshow.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function pp_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: lightbox_text_bottom.
  $styles['lightbox_text_bottom'] = array(
    'label' => 'Lightbox text bottom',
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 690,
          'height' => 440,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 690,
          'height' => 440,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: lightbox_text_left_right.
  $styles['lightbox_text_left_right'] = array(
    'label' => 'lightbox_text_left_right',
    'effects' => array(
      19 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 610,
          'height' => 264,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => 1,
      ),
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 610,
          'height' => 264,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
