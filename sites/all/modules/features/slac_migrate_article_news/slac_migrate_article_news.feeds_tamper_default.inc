<?php
/**
 * @file
 * slac_migrate_article_news.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function slac_migrate_article_news_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer-xpathparser_0-truncate_text';
  $feeds_tamper->importer = 'news_article_importer';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '255',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['news_article_importer-xpathparser_0-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer-xpathparser_2-rewrite';
  $feeds_tamper->importer = 'news_article_importer';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'http://www6.slac.stanford.edu[xpathparser:2]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['news_article_importer-xpathparser_2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer-xpathparser_6-explode';
  $feeds_tamper->importer = 'news_article_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '%s%s%s%s%s',
    'limit' => '',
    'real_separator' => '     ',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Explode';
  $export['news_article_importer-xpathparser_6-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer-xpathparser_6-explode_2';
  $feeds_tamper->importer = 'news_article_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Explode';
  $export['news_article_importer-xpathparser_6-explode_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer-xpathparser_6-find_replace';
  $feeds_tamper->importer = 'news_article_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '     ',
    'replace' => ', ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['news_article_importer-xpathparser_6-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer-xpathparser_6-trim';
  $feeds_tamper->importer = 'news_article_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['news_article_importer-xpathparser_6-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer-xpathparser_6-unique';
  $feeds_tamper->importer = 'news_article_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unique';
  $export['news_article_importer-xpathparser_6-unique'] = $feeds_tamper;

  return $export;
}
