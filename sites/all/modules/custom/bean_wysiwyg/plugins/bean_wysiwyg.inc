<?php
/**
 * @file WYSIWYG plugin.
 */

/**
 * Implements hook_wysiwyg_plugin().
 */
function bean_wysiwyg_wysiwyg_plugin() {
  bean_wysiwyg_include_browser_js();

  $plugins['bean_wysiwyg'] = array(
    'title' => t('Block Insert'),
    'icon file' => 'bean_button.png',
    'icon title' => t('Block Insert'),
    'settings' => array(),
  );
  return $plugins;
}

/**
 * Prepares the page to be able to launch the media browser.
 *
 * Defines default variables.
 */
function bean_wysiwyg_include_browser_js() {
  static $included;
  if ($included) {
    return;
  }
  $included = TRUE;
  $javascript = bean_wysiwyg_browser_js();
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
}
