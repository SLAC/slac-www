<?php

/**
 * Display News Archive block with links.
 */
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('News Archives'),
  'single' => TRUE,
  'defaults' => array(),
  'description' => t("SLAC news archives block"),
  'category' => t('News Center'),
  'render callback' => 'news_archives_content_type_render',
);

/**
 * Outputs links to news archives.
 */
function news_archives_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_news_center';
  $block->title = t('News Archives');

  $current_year = date('Y');
  $items = array();
  for ($year = $current_year; $year >= 2011; $year--) {
    $link_title = $year . t(' News Archive');
    $link = 'news/news-feature-archive-' . $year;
    $items[$link_title] = l(t($link_title), $link);
  }
  $load_menu = menu_load_links('menu-news-archives');
  foreach ($load_menu as $value) {
    if (!$value['hidden']) {
      $items[$value['link_title']] = l(t($value['link_title']), $value['link_path']);
    }
  }
  ksort($items);
  array_reverse($items);
  $block->content = theme('item_list', array('items' => $items, 'attributes' => array('class' => 'news-archive-links')));

  return $block;
}

/**
 * Returns the administrative title.
 */
function news_archives_content_type_admin_title($subtype, $conf) {
  return t('News Archives');
}
