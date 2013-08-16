<?php

/**
 * Display back to archive links for news-article content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Back to archive links'),
  'single' => TRUE,
  'defaults' => array(),
  'description' => t('Back to archive links for news-article node page.'),
  'category' => t('News Center'),
  'render callback' => 'back_links_content_type_render',
);

/**
 * Outputs link to news archives.
 */
function back_links_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_news_center';
  $block->title = '';

  if (arg(0) != 'node' && !is_numeric(arg(1))) {
    return;
  }

  $content = '';
  if ($node = node_load(arg(1))) {
    $year = date('Y', $node->created);

    if(isset($node->field_article_type[LANGUAGE_NONE][0]['tid'])) {
      $tid = $node->field_article_type[LANGUAGE_NONE][0]['tid'];
      $term = taxonomy_term_load($tid);
    }
    else {
      return;
    }

    $link = '';
    $link_title = '';
    switch ($term->name) {
      case 'news-feature':
        $link_title = t('News Feature Archive');
        $link = 'news/news-feature-archive-' . $year . '.aspx';
        break;
      case 'press-release':
        $link_title = t('Press Release Archive');
        $link = 'news/press-release-archive-' . $year . '.aspx';
        break;
    }
    $content = '<div class="back-to-archive"> « ' . l($link_title, $link) . '</div>';
  }

  $block->content = $content;

  return $block;
}

/**
 * Returns the administrative title.
 */
function back_links_type_admin_title($subtype, $conf) {
  return t('Back to archive links');
}
