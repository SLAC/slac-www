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

function slac_admin_resolution_settings_validate($form, &$form_state) {
  if (!is_numeric($form_state['values']['slac_image_lightbox_width'])) {
    form_set_error('slac_image_lightbox_width', t('Value for With should be a number.'));
  }
  elseif ($form_state['values']['slac_image_lightbox_width'] < 0) {
    form_set_error('slac_image_lightbox_width', t('Value for With should be a positive number.'));
  }

  if (!is_numeric($form_state['values']['slac_image_lightbox_height'])) {
    form_set_error('slac_image_lightbox_height', t('Value for Height should be a number.'));
  }
  elseif ($form_state['values']['slac_image_lightbox_height'] < 0) {
    form_set_error('slac_image_lightbox_height', t('Value for Height should be a positive number.'));
  }
}