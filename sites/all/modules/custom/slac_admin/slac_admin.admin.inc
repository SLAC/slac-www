<?php

/**
 * @file
 * slac_admin.admin.inc 
 * 
 * Admin page callbacks for the slac_admin.
 */

/**
 * Forms to set minimum display size for lightbox activation.
 */
function slac_admin_resolution_settings($form, &$form_state) {
  $form['slac_image_lightbox_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#default_value' => variable_get('slac_image_lightbox_width', 0),
    '#description' => t('Width in pixels (0 for no restrictions).'),
  );
  
  $form['slac_image_lightbox_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height.'),
    '#default_value' => variable_get('slac_image_lightbox_height', 0),
    '#description' => t('Height in pixels (0 for no restrictions).'),
  );

  return system_settings_form($form);
}