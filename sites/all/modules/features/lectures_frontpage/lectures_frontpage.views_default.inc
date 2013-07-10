<?php
/**
 * @file
 * lectures_frontpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lectures_frontpage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'next_lecture';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Next Lecture';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Next Lecture';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_speaker_name' => 'field_speaker_name',
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="#">ATTENDING A LECTURE</a><br/>
<a href="#">MAPS AND DIRECTIONS</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No lectures scheduled.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Affiliations */
  $handler->display->display_options['fields']['field_affiliations']['id'] = 'field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['table'] = 'field_data_field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['field'] = 'field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_affiliations']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_affiliations']['element_label_colon'] = FALSE;
  /* Field: Content: Lecture Date */
  $handler->display->display_options['fields']['field_lecture_date']['id'] = 'field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['field'] = 'field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['settings'] = array(
    'format_type' => 'complete',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'lectures';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Please visit us soon for an update on the coming lecture. 
Thank You!';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Speaker Name */
  $handler->display->display_options['fields']['field_speaker_name']['id'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['table'] = 'field_data_field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['field'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['label'] = 'Speaker Brio';
  $handler->display->display_options['fields']['field_speaker_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Lecture Date (field_lecture_date) */
  $handler->display->display_options['filters']['field_lecture_date_value']['id'] = 'field_lecture_date_value';
  $handler->display->display_options['filters']['field_lecture_date_value']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['filters']['field_lecture_date_value']['field'] = 'field_lecture_date_value';
  $handler->display->display_options['filters']['field_lecture_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_lecture_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_lecture_date_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['next_lecture'] = $view;

  return $export;
}
