<?php
/**
 * @file
 * slac_in_the_news.features.inc
 */

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
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
