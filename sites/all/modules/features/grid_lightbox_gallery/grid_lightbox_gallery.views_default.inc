<?php
/**
 * @file
 * grid_lightbox_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function grid_lightbox_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Grid_Lightbox_Gallery_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Grid Lightbox Galeri node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Grid Lightbox Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  /* Relationship: Field collection item: Entity with the Media collection (field_media_collection) */
  $handler->display->display_options['relationships']['field_media_collection_node']['id'] = 'field_media_collection_node';
  $handler->display->display_options['relationships']['field_media_collection_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_media_collection_node']['field'] = 'field_media_collection_node';
  $handler->display->display_options['relationships']['field_media_collection_node']['required'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image_1]
[field_title]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'grid-lightbox-gallery-full-size',
    'image_link' => '',
  );
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['text'] = '<div class="image-description">[field_description]</div>';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_1']['id'] = 'field_title_1';
  $handler->display->display_options['fields']['field_title_1']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_1']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_1']['exclude'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['path'] = '[field_image]';
  $handler->display->display_options['fields']['field_image_1']['alter']['rel'] = 'lightbox[grid][<p><strong>[field_title_1]</strong><br/>[field_description]</p>]';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'grid-lightbox-gallery-thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['text'] = '<a href="[field_image]" rel="lightbox[grid][[field_title]<div>[field_description]</div>]" >[field_title]</a>';
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['path'] = '[field_image]';
  $handler->display->display_options['fields']['field_title']['alter']['rel'] = 'lightbox[grid][<p><strong>[field_title]</strong><br/>[field_description]</p>]';
  $handler->display->display_options['fields']['field_title']['alter']['link_class'] = 'lightbox';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_media_collection_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['Grid_Lightbox_Gallery_node'] = $view;

  return $export;
}
