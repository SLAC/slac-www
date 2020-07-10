<?php
/**
 * @file
 * slac_paragraph_bundles.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function slac_paragraph_bundles_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_animation'.
  $field_bases['field_animation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_animation',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'fadeIn' => 'Fade In',
        'fadeInLeft' => 'Fade In Left',
        'fadeInLeftBig' => 'Fade in Left Big',
        'fadeInRight' => 'Fade In Right',
        'fadeInRightBig' => 'Fade in Right Big',
        'fadeInUp' => 'Fade In Up',
        'fadeInDown' => 'Fade in Down',
        'fadeInDownBig' => 'Fade in Down Big',
        'rotateIn' => 'Rotate In',
        'rotateInDownLeft' => 'Rotate In Down Left',
        'rotateInDownRight' => 'Rotate In Down Right',
        'rollIn' => 'Roll In',
        'rollOut' => 'Roll Out',
        'slideInUp' => 'Slide In Up',
        'slideInLeft' => 'Slide In Left',
        'slideInRight' => 'Slide In Right',
        'shake' => 'Shake',
        'swing' => 'Swing',
        'tada' => 'Tada',
        'wobble' => 'Wobble',
        'zoomIn' => 'Zoom In',
        'zoomInLeft' => 'Zoom In Left',
        'zoomInRight' => 'Zoom In Right',
        'zoomInUp' => 'Zoom In Up',
        'zoomInDown' => 'Zoom In Down',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_animation_setting'.
  $field_bases['field_animation_setting'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_animation_setting',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'infinite' => 'Infinite',
        'slow' => 'Slow',
        'slower' => 'Slower',
        'fast' => 'Fast',
        'faster' => 'Faster',
        'delay-1s' => 'Delay 1 Second',
        'delay-2s' => 'Delay 2 Seconds',
        'delay-3s' => 'Delay 3 Seconds',
        'delay-4s' => 'Delay 4 Seconds',
        'delay-5s' => 'Delay 5 Seconds',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_background'.
  $field_bases['field_background'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_background',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--color--transparent' => 'Transparent',
        'paragraph--color paragraph--color--red' => 'Red',
        'paragraph--color paragraph--color--light-grey' => 'LIght Grey',
        'paragraph--color paragraph--color--dark-grey' => 'Dark Grey',
        'paragraph--color paragraph--color--black' => 'Black',
        'paragraph--color paragraph--color--white' => 'White',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_content'.
  $field_bases['field_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_padding_bottom'.
  $field_bases['field_padding_bottom'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_padding_bottom',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'padding-top--off' => 'Off',
        'padding-top--sm' => 'Normal',
        'padding-top--md' => 'Medium',
        'padding-top--lg' => 'Large',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_padding_top'.
  $field_bases['field_padding_top'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_padding_top',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'padding-top--off' => 'Off',
        'padding-top--sm' => 'Normal',
        'padding-top--md' => 'Medium',
        'padding-top--lg' => 'Large',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_paragraph_width'.
  $field_bases['field_paragraph_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_paragraph_width',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--width--tiny' => 'Tiny',
        'paragraph--width--narrow' => 'Narrow',
        'paragraph--width--medium' => 'Medium',
        'paragraph--width--wide' => 'Wide',
        'paragraph--width--full' => 'Full Screen',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_pimage'.
  $field_bases['field_pimage'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pimage',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_pvideo'.
  $field_bases['field_pvideo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pvideo',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'media',
  );

  // Exported field_base: 'field_text'.
  $field_bases['field_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_width'.
  $field_bases['field_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_width',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'large' => 'Large Width',
        'full' => 'Full Width',
        'pull-left pull-left-portrait' => 'Pull Left Portrait',
        'pull-right pull-right-portrait' => 'Pull Right Portrait',
        'pull-left pull-left-narrow' => 'Pull Left Narrow',
        'pull-right pull-right-narrow' => 'Pull Right Narrow',
        'pull-left pull-left-wide' => 'Pull Left Wide',
        'pull-right pull-right-wide' => 'Pull Right Wide',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
