<?php
/**
 * @file
 * slac_migrate_lectures.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function slac_migrate_lectures_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'lectures_importer-artfilename-rewrite';
  $feeds_tamper->importer = 'lectures_importer';
  $feeds_tamper->source = 'artFileName';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'http://www2.slac.stanford.edu/lectures/images/posters/[artfilename]_lg.jpg',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['lectures_importer-artfilename-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'lectures_importer-lecturedate-rewrite';
  $feeds_tamper->importer = 'lectures_importer';
  $feeds_tamper->source = 'lectureDate';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[lecturedate] [starttime]',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Rewrite';
  $export['lectures_importer-lecturedate-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'lectures_importer-lecturedate-strtotime';
  $feeds_tamper->importer = 'lectures_importer';
  $feeds_tamper->source = 'lectureDate';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['lectures_importer-lecturedate-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'lectures_importer-lecturedate-truncate_text';
  $feeds_tamper->importer = 'lectures_importer';
  $feeds_tamper->source = 'lectureDate';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '8',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['lectures_importer-lecturedate-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'lectures_importer-starttime-convert_case';
  $feeds_tamper->importer = 'lectures_importer';
  $feeds_tamper->source = 'StartTime';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '1',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Convert case';
  $export['lectures_importer-starttime-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'lectures_importer-starttime-find_replace';
  $feeds_tamper->importer = 'lectures_importer';
  $feeds_tamper->source = 'StartTime';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['lectures_importer-starttime-find_replace'] = $feeds_tamper;

  return $export;
}
