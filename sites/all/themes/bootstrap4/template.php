<?php

/**
 * @file
 * Bootstrap4 theme file.
 */

/**
 * Implements hook_preprocess_page().
 *
 * See template for list of available variables.
 *
 * @param array $variables
 *   An associative array of variables, passed by reference.
 *
 * @see page.tpl.php
 *
 * @ingroup theme_preprocess
 */
function bootstrap4_preprocess_page(array &$variables) {

  $b4_navbar_schema = variable_get('b4_navbar_schema', 'none');
  $b4_navbar_bg_schema = variable_get('b4_navbar_bg_schema', 'none');
  $b4_footer_schema = variable_get('b4_footer_schema', 'none');
  $b4_footer_bg_schema = variable_get('b4_footer_bg_schema', 'none');

  $variables['nav_classes'] = trim(implode(' ', [
    'navbar',
    'navbar-expand-lg',
    ($b4_navbar_schema != 'none' ? 'navbar-' . $b4_navbar_schema : ''),
    ($b4_navbar_schema != 'none' ? ($b4_navbar_schema == 'dark' ? ' text-light' : ' text-dark' ) : ''),
    ($b4_navbar_bg_schema != 'none' ? 'navbar-' . $b4_navbar_bg_schema : ''),
  ]));

  $variables['footer_classes'] = trim(implode(' ', [
    ($b4_footer_schema != 'none' ? 'navbar-' . $b4_footer_schema : ''),
    ($b4_footer_schema != 'none' ? ($b4_footer_schema == 'dark' ? ' text-light' : ' text-dark' ) : ''),
    ($b4_footer_bg_schema != 'none' ? 'navbar-' . $b4_footer_bg_schema : ''),
  ]));

  $variables['b4_top_container'] = variable_get('b4_top_container', '');

  $variables['sidebar_first_classes'] = (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) ?
    'col-12 col-sm-6 col-lg-3' : 'col-12 col-lg-3';

  $variables['sidebar_second_classes'] = (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) ?
    'col-12 col-sm-6 col-lg-3' : 'col-12 col-md-4 col-lg-3';

  $variables['content_classes'] = (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) ?
    'col-12 col-lg-6' : ((!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) ? 'col-12 col-md-8 col-lg-9' : 'col-12');
}

/**
 * Callback to process menu styles.
 */
function _bootstrap4_process_menu_styles() {
  $bootstrap4_menu_styles = theme_get_setting('bootstrap4_menu_styles');
  $result = [];
  $process = array_map(function ($value) {
    return explode(';', $value);
  }, explode("\n", $bootstrap4_menu_styles));

  if (count($process)) {
    foreach ($process as $index => $menu)
    $result[$menu[0]] = $process[$index];
  }

  return $result;
}

/**
 * Implements hook_preprocess_menu_link().
 */
function bootstrap4_preprocess_menu_link(array &$variables) {
  $element = &$variables['element'];
  $menu = $element['#original_link']['menu_name'];
  $bootstrap4_menu_styles = _bootstrap4_process_menu_styles();
  if (isset($bootstrap4_menu_styles[$menu])) {
    $element['#attributes']['class'][] = $bootstrap4_menu_styles[$menu][2];
    $element['#localized_options']['attributes']['class'][] = $bootstrap4_menu_styles[$menu][3];
  }
}

/**
 * Implements hook_menu_tree().
 */
function bootstrap4_menu_tree($variables) {
  $menu = str_replace(['menu_tree__', '_'], ['', '-'], $variables['theme_hook_original']);
  $bootstrap4_menu_styles = _bootstrap4_process_menu_styles();

  if (isset($bootstrap4_menu_styles[$menu])) {
    return '<ul class="' . $bootstrap4_menu_styles[$menu][1] . '">' . $variables['tree'] . '</ul>';
  }
  return '<ul class="nav">' . $variables['tree'] . '</ul>';
}
