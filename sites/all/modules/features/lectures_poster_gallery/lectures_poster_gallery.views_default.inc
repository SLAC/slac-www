<?php
/**
 * @file
 * lectures_poster_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lectures_poster_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lectures_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lectures gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SLAC Public Lecture Series';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'lecture_portrait',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'lectures_gallery_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Lightbox: Lightbox trigger */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['lightbox2']['trigger_field'] = 'field_image_1';
  $handler->display->display_options['fields']['lightbox2']['popup'] = '[field_image]';
  $handler->display->display_options['fields']['lightbox2']['caption'] = '[title]';
  $handler->display->display_options['fields']['lightbox2']['rel_group'] = 1;
  $handler->display->display_options['fields']['lightbox2']['custom_group'] = 'image_field';
  $handler->display->display_options['fields']['lightbox2']['height'] = '700px';
  $handler->display->display_options['fields']['lightbox2']['width'] = '453px';
  /* Sort criterion: Content: Lecture Date (field_lecture_date) */
  $handler->display->display_options['sorts']['field_lecture_date_value']['id'] = 'field_lecture_date_value';
  $handler->display->display_options['sorts']['field_lecture_date_value']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['sorts']['field_lecture_date_value']['field'] = 'field_lecture_date_value';
  $handler->display->display_options['sorts']['field_lecture_date_value']['order'] = 'DESC';
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
    'lecture' => 'lecture',
  );
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

  /* Display: Posters Gallery */
  $handler = $view->new_display('panel_pane', 'Posters Gallery', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '◄';
  $handler->display->display_options['pager']['options']['tags']['next'] = '►';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'lecture_portrait',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'lectures_gallery_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="view-lecture-link" href="[path]">View lecture details</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Lightbox: Lightbox trigger */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['lightbox2']['trigger_field'] = 'field_image_1';
  $handler->display->display_options['fields']['lightbox2']['popup'] = '[field_image]';
  $handler->display->display_options['fields']['lightbox2']['caption'] = '[title][path]';
  $handler->display->display_options['fields']['lightbox2']['rel_group'] = 1;
  $handler->display->display_options['fields']['lightbox2']['custom_group'] = 'image_field';
  $handler->display->display_options['fields']['lightbox2']['height'] = '700px';
  $handler->display->display_options['fields']['lightbox2']['width'] = '453px';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'lecture' => 'lecture',
  );
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Lecture Date (field_lecture_date) */
  $handler->display->display_options['filters']['field_lecture_date_value']['id'] = 'field_lecture_date_value';
  $handler->display->display_options['filters']['field_lecture_date_value']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['filters']['field_lecture_date_value']['field'] = 'field_lecture_date_value';
  $handler->display->display_options['filters']['field_lecture_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_lecture_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_lecture_date_value']['default_date'] = 'now';
  $handler->display->display_options['pane_category']['name'] = 'Lectures';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['lectures_gallery'] = $view;

  return $export;
}
