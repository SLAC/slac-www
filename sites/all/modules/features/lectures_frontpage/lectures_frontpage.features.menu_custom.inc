<?php
/**
 * @file
 * lectures_frontpage.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function lectures_frontpage_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-slac-public-lecture-series.
  $menus['menu-slac-public-lecture-series'] = array(
    'menu_name' => 'menu-slac-public-lecture-series',
    'title' => 'SLAC Public Lecture Series',
    'description' => 'SLAC Public Lecture Series',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('SLAC Public Lecture Series');


  return $menus;
}
