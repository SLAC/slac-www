<?php
/**
 * @file
 * slac_migrate_lectures.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function slac_migrate_lectures_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'lectures_importer';
  $feeds_importer->config = array(
    'name' => 'Lectures Importer',
    'description' => 'Import lectures',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://lecture_import',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'lectureTitle',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'abstract',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'speakerName',
            'target' => 'field_speaker_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'speakerBio',
            'target' => 'field_about_the_speaker',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'speakerAffiliations',
            'target' => 'field_affiliations',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'StartTime',
            'target' => 'field_lecture_date:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'lectureDate',
            'target' => 'field_lecture_date:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Location',
            'target' => 'field_location',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'artFileName',
            'target' => 'field_image:uri',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'lecture',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['lectures_importer'] = $feeds_importer;

  return $export;
}
