<?php
/**
 * @file
 * slac_migrate_article_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_migrate_article_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function slac_migrate_article_news_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('News-article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
