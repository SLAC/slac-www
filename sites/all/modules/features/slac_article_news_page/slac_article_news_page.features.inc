<?php
/**
 * @file
 * slac_article_news_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_article_news_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function slac_article_news_page_image_default_styles() {
  $styles = array();

  // Exported image style: header_news_image_cropped.
  $styles['header_news_image_cropped'] = array(
    'label' => 'Header News Image Cropped',
    'effects' => array(
      49 => NULL,
    ),
  );

  return $styles;
}
