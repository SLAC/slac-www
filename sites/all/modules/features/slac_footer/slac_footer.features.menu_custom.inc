<?php
/**
 * @file
 * slac_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function slac_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Secondary Links',
    'description' => 'The Footer Secondary Links is used to show links from the bottom side of site',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Secondary Links');
  t('Management');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The Footer Secondary Links is used to show links from the bottom side of site');


  return $menus;
}
