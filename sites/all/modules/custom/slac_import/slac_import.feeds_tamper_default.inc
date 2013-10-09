<?php
/**
 * @file
 * io_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function slac_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_0-truncate_text';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '255',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_11-hash';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'hash';
  $feeds_tamper->settings = array(
    'override' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Calculate hash';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_12-truncate_text';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '56',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_13-truncate_text';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:13';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '56',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_2-slac_import_files';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'slac_import_files';
  $feeds_tamper->settings = array(
    'domain' => 'http://www6.slac.stanford.edu',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Files';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_6-explode';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '%s%s%s%s%s',
    'limit' => '',
    'real_separator' => '     ',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Explode';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_6-explode_2';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Explode';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_6-find_replace';
  $feeds_tamper->importer = 'news_article_importer_custom';
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

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_6-trim';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_6-unique';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unique';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-blank_source_1-default_value';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Internal',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news_article_importer_custom-xpathparser_10-hash';
  $feeds_tamper->importer = 'news_article_importer_custom';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'hash';
  $feeds_tamper->settings = array(
    'override' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Calculate hash';

  $export[$feeds_tamper->id] = $feeds_tamper;

  return $export;
}
