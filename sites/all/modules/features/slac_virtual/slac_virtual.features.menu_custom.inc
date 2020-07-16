<?php
/**
 * @file
 * slac_virtual.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function slac_virtual_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-virtual-tour.
  $menus['menu-virtual-tour'] = array(
    'menu_name' => 'menu-virtual-tour',
    'title' => 'Virtual Tour',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Virtual Tour');

  return $menus;
}
