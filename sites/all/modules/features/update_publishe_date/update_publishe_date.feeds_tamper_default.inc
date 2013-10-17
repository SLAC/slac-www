<?php
/**
 * @file
 * update_publishe_date.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function update_publishe_date_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'update_published_date_-xpathparser_5-math';
  $feeds_tamper->importer = 'update_published_date_';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'addition',
    'value' => '25200',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Mathematical operation';
  $export['update_published_date_-xpathparser_5-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'update_published_date_-xpathparser_5-strtotime';
  $feeds_tamper->importer = 'update_published_date_';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['update_published_date_-xpathparser_5-strtotime'] = $feeds_tamper;

  return $export;
}
