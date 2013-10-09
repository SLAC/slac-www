<?php
/**
 * @file
 */

/**
 * Implements hook_wysiwyg_plugin().
 */
function bi_bi_plugin() {
  bi_include_browser_js();

  $plugins['bi'] = array(
    'title' => t('PP Block Insert'),
    'icon file' => 'bi_button.png',
    'icon title' => t('PP Block Insert'),
    'settings' => array(),
  );
  return $plugins;
}

/**
 * Prepares the page to be able to launch the media browser.
 *
 * Defines default variables.
 */
function bi_include_browser_js() {
  static $included;
  if ($included) {
    return;
  }
  $included = TRUE;
//  module_load_include('inc', 'media', 'includes/media.browser');
  $javascript = bi_browser_js();
  foreach ($javascript as $key => $definitions) {
    foreach ($definitions as $definition) {
      $function = 'drupal_add_' . $key;
      // Since the arguments to pass are variable, use call_user_func_array().
      // This will not handle all potential drupal_add_*() functions directly
      // but covers the js and library needed here, which are unlikely to be
      // expanded since this function is only a workaround for a wysiwyg limitation.
      call_user_func_array($function, $definition);
    }
  }
  // Add wysiwyg-specific settings.
//  $settings = array('wysiwyg_allowed_attributes' => media_variable_get('wysiwyg_allowed_attributes'));
//  drupal_add_js(array('media' => $settings), 'setting');
}
