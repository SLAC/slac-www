<?php
/**
 * @file
 * slac_migrate_article_news.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function slac_migrate_article_news_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news_article_importer';
  $feeds_importer->config = array(
    'name' => 'News-article importer',
    'description' => 'Imports news-articles from XML files',
    'fetcher' => array(
      'plugin_key' => 'feeds_fetcher_directory_fetcher',
      'config' => array(
        'recursive' => TRUE,
        'filemask' => '/\\.xml$/',
        'updated_files' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'page-metadata/page-title',
          'xpathparser:1' => 'article-body',
          'xpathparser:2' => 'news-article-media/main-graphic-video/news-article-graphic/fullsize-image-location',
          'xpathparser:3' => 'news-article-media/main-graphic-video/news-article-graphic/image-title',
          'xpathparser:4' => 'news-article-media/main-graphic-video/news-article-graphic/image-alt-text',
          'xpathparser:5' => 'page-metadata/publish-date',
          'xpathparser:6' => 'page-metadata/page-keywords',
          'xpathparser:7' => 'news-article-media/main-graphic-video/news-article-graphic/image-description',
          'xpathparser:8' => 'page-metadata/article-type',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
        ),
        'context' => '//root',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_image:uri',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_image:alt',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_image:title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'created',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_image_description',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_article_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news_article',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['news_article_importer'] = $feeds_importer;

  return $export;
}
