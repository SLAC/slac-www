<?php
/**
 * @file
 * slac_news_center_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_news_center_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_news_center_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_news_center_feature_image_default_styles() {
  $styles = array();

  // Exported image style: 110x71.
  $styles['110x71'] = array(
    'effects' => array(
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 71,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '110x71',
  );

  // Exported image style: article-news-node-page.
  $styles['article-news-node-page'] = array(
    'label' => 'article-news-node-page',
    'effects' => array(
      42 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
      43 => array(
        'name' => 'filtersie_sharpen',
        'data' => array(
          'sharpenlevel' => 5,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
