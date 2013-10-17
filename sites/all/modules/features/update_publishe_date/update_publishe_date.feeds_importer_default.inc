<?php
/**
 * @file
 * update_publishe_date.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function update_publishe_date_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'update_published_date_';
  $feeds_importer->config = array(
    'name' => 'Update published date ',
    'description' => 'Update published date for news-article content type.',
    'fetcher' => array(
      'plugin_key' => 'feeds_fetcher_directory_fetcher',
      'config' => array(
        'recursive' => TRUE,
        'filemask' => '/\\.xml$/',
        'updated_files' => FALSE,
        'directory' => 'public://xml-export/templatedata/pages/news-article/data',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'article-body/article-heading',
          'xpathparser:1' => 'article-body',
          'xpathparser:2' => 'news-article-media/*/news-article-graphic/fullsize-image-location',
          'xpathparser:3' => 'news-article-media/*/news-article-graphic/image-alt-text',
          'xpathparser:4' => 'news-article-media/*/news-article-graphic/image-title',
          'xpathparser:5' => 'page-metadata/publish-date',
          'xpathparser:6' => 'page-metadata/page-keywords',
          'xpathparser:8' => 'page-metadata/article-type',
          'xpathparser:9' => 'news-article-media/*/news-article-graphic/image-description',
          'xpathparser:11' => 'page-metadata/page-author',
          'xpathparser:12' => 'news-article-media/*/news-article-graphic/image-alt-text',
          'xpathparser:13' => 'news-article-media/*/news-article-graphic/image-title',
          'xpathparser:14' => 'news-article-media/*/news-article-graphic/image-description',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
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
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
          ),
        ),
        'allow_override' => 1,
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
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:5',
            'target' => 'created',
            'unique' => FALSE,
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
  $export['update_published_date_'] = $feeds_importer;

  return $export;
}
