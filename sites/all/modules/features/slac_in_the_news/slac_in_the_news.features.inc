<?php
/**
 * @file
 * slac_in_the_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_in_the_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function slac_in_the_news_node_info() {
  $items = array(
    'in_the_news' => array(
      'name' => t('In the News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  return $items;
}
