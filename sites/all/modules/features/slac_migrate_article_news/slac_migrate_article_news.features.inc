<?php
/**
 * @file
 * slac_migrate_article_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_migrate_article_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function slac_migrate_article_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_thumbnail_headlines_center.
  $styles['news_thumbnail_headlines_center'] = array(
    'label' => 'news_thumbnail_headlines_center',
    'effects' => array(
      39 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 224,
          'height' => 142,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      40 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 224,
          'height' => 142,
          'retinafy' => 0,
        ),
        'weight' => -9,
      ),
      41 => array(
        'name' => 'filtersie_sharpen',
        'data' => array(
          'sharpenlevel' => 5,
        ),
        'weight' => -8,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slac_migrate_article_news_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('News-article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
