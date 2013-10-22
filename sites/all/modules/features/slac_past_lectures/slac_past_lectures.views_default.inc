<?php
/**
 * @file
 * slac_past_lectures.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slac_past_lectures_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slac_lectures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SLAC Lectures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Past Lectures */
  $handler = $view->new_display('panel_pane', 'Past Lectures', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'SLAC Public Lecture Series';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '◄';
  $handler->display->display_options['pager']['options']['tags']['next'] = '►';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_lecture_date' => 'field_lecture_date',
    'title' => 'title',
    'field_speaker_name' => 'field_speaker_name',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = 'field_lecture_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_lecture_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speaker_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Lecture Date */
  $handler->display->display_options['fields']['field_lecture_date']['id'] = 'field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['field'] = 'field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_lecture_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lecture_date']['settings'] = array(
    'format_type' => 'month_date_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Lecture Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Speaker Name */
  $handler->display->display_options['fields']['field_speaker_name']['id'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['table'] = 'field_data_field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['field'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['label'] = 'Presenter';
  $handler->display->display_options['fields']['field_speaker_name']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Search past lectures by term */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['ui_name'] = 'Search past lectures by term';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search Term:';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'title, keywords, speakers';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'term';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_speaker_name' => 'field_speaker_name',
    'body' => 'body',
  );
  /* Filter criterion: Content: Lecture Date (field_lecture_date) */
  $handler->display->display_options['filters']['field_lecture_date_value']['id'] = 'field_lecture_date_value';
  $handler->display->display_options['filters']['field_lecture_date_value']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['filters']['field_lecture_date_value']['field'] = 'field_lecture_date_value';
  $handler->display->display_options['filters']['field_lecture_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_lecture_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_lecture_date_value']['default_date'] = 'now';
  $handler->display->display_options['pane_category']['name'] = 'Lectures';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Speaker name and location */
  $handler = $view->new_display('panel_pane', 'Speaker name and location', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_speaker_name' => 'field_speaker_name',
    'field_location' => 'field_location',
    'field_affiliations' => 'field_affiliations',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker Name */
  $handler->display->display_options['fields']['field_speaker_name']['id'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['table'] = 'field_data_field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['field'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_name']['hide_empty'] = TRUE;
  /* Field: Content: Affiliations */
  $handler->display->display_options['fields']['field_affiliations']['id'] = 'field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['table'] = 'field_data_field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['field'] = 'field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Lectures';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Location */
  $handler = $view->new_display('panel_pane', 'Location', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'visiting-slac/maps-directions-meetingrooms.aspx';
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Lectures';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['slac_lectures'] = $view;

  return $export;
}
