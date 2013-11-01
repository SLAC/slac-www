<?php
/**
 * @file
 * slac_migrate_article_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_migrate_article_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
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
    'name' => 'news_thumbnail_headlines_center',
    'effects' => array(
      32 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
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
      33 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 224,
          'height' => 142,
          'retinafy' => 1,
        ),
        'weight' => -9,
      ),
      35 => array(
        'label' => 'Sharpen',
        'help' => 'Sharpen an image giving a parameter.',
        'effect callback' => 'filtersie_sharpen_effect',
        'form callback' => 'filtersie_sharpen_form',
        'summary theme' => 'filtersie_sharpen_summary',
        'dimensions passthrough' => TRUE,
        'module' => 'filtersie',
        'name' => 'filtersie_sharpen',
        'data' => array(
          'sharpenlevel' => 40,
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
  return $items;
}
