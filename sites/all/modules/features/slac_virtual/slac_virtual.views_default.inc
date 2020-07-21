<?php
/**
 * @file
 * slac_virtual.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slac_virtual_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'lightgallery';
  $handler->display->display_options['style_options']['lightgallery'] = array(
    'thumb_field' => 'field_image_for_gallery_1',
    'image_field' => 'field_image_for_gallery',
    'title' => '',
    'mode' => 'lg-slide',
    'preload' => '1',
    'closable' => 1,
    'loop' => 1,
    'esc_key' => 1,
    'key_press' => 1,
    'controls' => 1,
    'mouse_wheel' => 1,
    'download' => 1,
    'counter' => 1,
    'drag' => 1,
    'touch' => 1,
    'thumbnails' => 1,
    'animate_thumb' => 1,
    'current_pager_position' => 'middle',
    'thumb_width' => '100',
    'thumb_cont_height' => '100',
    'autoplay' => 1,
    'pause' => '5000',
    'progress_bar' => 1,
    'autoplay_controls' => 1,
    'full_screen' => 1,
    'pager' => 1,
    'zoom' => 1,
    'scale' => '1',
    'hash' => 1,
    'gallery_id' => '1',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image for Gallery */
  $handler->display->display_options['fields']['field_image_for_gallery']['id'] = 'field_image_for_gallery';
  $handler->display->display_options['fields']['field_image_for_gallery']['table'] = 'field_data_field_image_for_gallery';
  $handler->display->display_options['fields']['field_image_for_gallery']['field'] = 'field_image_for_gallery';
  $handler->display->display_options['fields']['field_image_for_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_for_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_for_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_for_gallery']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_for_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_for_gallery']['delta_offset'] = '0';
  /* Field: Content: Image for Gallery */
  $handler->display->display_options['fields']['field_image_for_gallery_1']['id'] = 'field_image_for_gallery_1';
  $handler->display->display_options['fields']['field_image_for_gallery_1']['table'] = 'field_data_field_image_for_gallery';
  $handler->display->display_options['fields']['field_image_for_gallery_1']['field'] = 'field_image_for_gallery';
  $handler->display->display_options['fields']['field_image_for_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_for_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_for_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_for_gallery_1']['settings'] = array(
    'image_style' => 'photo_gallery_cropped',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_for_gallery_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_for_gallery_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'paragraph_layout_page' => 'paragraph_layout_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['photo_gallery'] = $view;

  return $export;
}
