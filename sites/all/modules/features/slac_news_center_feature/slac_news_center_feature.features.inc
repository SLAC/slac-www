<?php
/**
 * @file
 * slac_news_center_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_news_center_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_news_center_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_news_center_feature_image_default_styles() {
  $styles = array();

  // Exported image style: 110x71.
  $styles['110x71'] = array(
    'name' => '110x71',
    'effects' => array(
      28 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 71,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article-news-node-page.
  $styles['article-news-node-page'] = array(
    'name' => 'article-news-node-page',
    'effects' => array(
      32 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'retina_images_image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'retina_images_image_scale_form',
        'summary theme' => 'retina_images_image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
      33 => array(
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
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
