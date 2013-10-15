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
  $view->name = 'lectures_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lectures list';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Speaker Name */
  $handler->display->display_options['fields']['field_speaker_name']['id'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['table'] = 'field_data_field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['field'] = 'field_speaker_name';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
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
  $handler->display->display_options['filters']['field_lecture_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_lecture_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_lecture_date_value']['default_date'] = 'now';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'field_speaker_name';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['path'] = 'publicLecturesRSS';
  $export['lectures_list'] = $view;

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
    'field_location' => 'field_location',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<div class="lectures-text">Ever wonder what goes on at SLAC National Accelerator Laboratory? The SLAC Public Lecture Series is your chance to find out! Every other month, SLAC opens its doors to the local community for an evening lecture highlighting the cutting-edge science happening at the laboratory. From the nanotechnology of diamonds to the latest Higgs Boson discoveries, SLAC public lectures provide non-scientists with a unique insight into the workings of our universe.</div>';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="past-lectures-text">Sheduled Lecture</div>
<div class="social-icon-block"><a href="http://www.digg.com/submit" onclick="window.location = \'http://www.digg.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/digg.png" title="digg" /></a> <a href="http://www.slashdot.org/submission" onclick="window.location = \'http://www.slashdot.org/submission?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/slashdot.png" title="slashdot" /></a> <a href="http://delicious.com/save" onclick="window.location = \'http://www.delicious.com/save?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/delicious.png" title="delicious" /></a> <a href="http://www.reddit.com/submit" onclick="window.location = \'http://www.reddit.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/reddit.png" title="reddit" /></a> <a href="http://www.facebook.com/sharer" onclick="window.location = \'http://www.facebook.com/sharer/sharer.php?u=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/facebook.png" title="facebook" /></a> <a href="http://www.twitter.com/share" onclick="window.location = \'http://www.twitter.com/intent/tweet?source=\' + encodeURIComponent(window.location) + \'&amp;text=\' +  encodeURIComponent(window.location); return false"> <img alt="" class="socialiconnews" src="/sites/default/files/twitter.png" title="twitter" /></a></div>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="lectures-image"><img width="500" height="178" alt="PHOTO: Speaker addressing audience in SLAC auditorium" src="http://slac-www.wearepropeople.md/sites/default/files/images/public-lecture.jpg" typeof="foaf:Image"></div>
<div class="lectures-text">Ever wonder what goes on at SLAC National Accelerator Laboratory? The SLAC Public Lecture Series is your chance to find out! Every other month, SLAC opens its doors to the local community for an evening lecture highlighting the cutting-edge science happening at the laboratory. From the nanotechnology of diamonds to the latest Higgs Boson discoveries, SLAC public lectures provide non-scientists with a unique insight into the workings of our universe.</div>
<div class="lectures-event"><p>We will post lecture details soon. Please check back to get specific lecture information.</p>
<p>To receive email alerts for upcoming public lectures, please join:
<a href="/slac-connections">&raquo;SLAC CONNECTIONS</a>
and you\'ll be kept up to date on all our public lectures activity.</p>
<p>Thank you for taking an interest in what we do at SLAC!</p></div>
';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
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
  /* Field: Content: Speaker Name */
  $handler->display->display_options['fields']['field_speaker_name']['id'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['table'] = 'field_data_field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['field'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_name']['element_label_colon'] = FALSE;
  /* Field: Content: Affiliations */
  $handler->display->display_options['fields']['field_affiliations']['id'] = 'field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['table'] = 'field_data_field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['field'] = 'field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_affiliations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_affiliations']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_affiliations']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_speaker_name], [field_affiliations]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Lecture Date */
  $handler->display->display_options['fields']['field_lecture_date']['id'] = 'field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['field'] = 'field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['label'] = '';
  $handler->display->display_options['fields']['field_lecture_date']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'lightbox2';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'type' => 'lightbox',
    'image_style' => 'medium',
    'lightbox_style' => 'grid-lightbox-gallery-full-size',
    'caption' => 'hidden',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: Speaker image */
  $handler->display->display_options['fields']['field_speaker_image']['id'] = 'field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['table'] = 'field_data_field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['field'] = 'field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['label'] = 'About the speaker';
  $handler->display->display_options['fields']['field_speaker_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image']['type'] = 'lightbox2';
  $handler->display->display_options['fields']['field_speaker_image']['settings'] = array(
    'type' => 'lightbox',
    'image_style' => 'medium',
    'lightbox_style' => 'grid-lightbox-gallery-full-size',
    'caption' => 'hidden',
  );
  /* Field: Content: About the Speaker */
  $handler->display->display_options['fields']['field_about_the_speaker']['id'] = 'field_about_the_speaker';
  $handler->display->display_options['fields']['field_about_the_speaker']['table'] = 'field_data_field_about_the_speaker';
  $handler->display->display_options['fields']['field_about_the_speaker']['field'] = 'field_about_the_speaker';
  $handler->display->display_options['fields']['field_about_the_speaker']['label'] = '';
  $handler->display->display_options['fields']['field_about_the_speaker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_about_the_speaker']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'About the Speaker:';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="about-speaker-side">[field_speaker_image]
<span>[field_speaker_name]</span></div>[field_about_the_speaker]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Lecture Date (field_lecture_date) */
  $handler->display->display_options['sorts']['field_lecture_date_value']['id'] = 'field_lecture_date_value';
  $handler->display->display_options['sorts']['field_lecture_date_value']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['sorts']['field_lecture_date_value']['field'] = 'field_lecture_date_value';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="scheduled-lectures-text">Scheduled Lecture</div>
<div class="social-icon-block"><a href="http://delicious.com/save" onclick="window.location = \'http://www.delicious.com/save?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/delicious.png" title="delicious" /></a> <a href="http://www.slashdot.org/submission" onclick="window.location = \'http://www.slashdot.org/submission?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/slashdot.png" title="slashdot" /></a> <a href="http://www.facebook.com/sharer" onclick="window.location = \'http://www.facebook.com/sharer/sharer.php?u=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/facebook.png" title="facebook" /></a> <a href="http://www.twitter.com/share" onclick="window.location = \'http://www.twitter.com/intent/tweet?source=\' + encodeURIComponent(window.location) + \'&amp;text=\' +  encodeURIComponent(window.location); return false"> <img alt="" class="socialiconnews" src="/sites/default/files/twitter.png" title="twitter" /></a> <a href="http://www.digg.com/submit" onclick="window.location = \'http://www.digg.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/digg.png" title="digg" /></a> <a href="http://www.reddit.com/submit" onclick="window.location = \'http://www.reddit.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/reddit.png" title="reddit" /></a></div>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="lectures-image"><img width="500" height="178" alt="PHOTO: Speaker addressing audience in SLAC auditorium" src="http://slac-www.wearepropeople.md/sites/default/files/images/public-lecture.jpg" typeof="foaf:Image"></div>
<div class="lectures-text">Ever wonder what goes on at SLAC National Accelerator Laboratory? The SLAC Public Lecture Series is your chance to find out! Every other month, SLAC opens its doors to the local community for an evening lecture highlighting the cutting-edge science happening at the laboratory. From the nanotechnology of diamonds to the latest Higgs Boson discoveries, SLAC public lectures provide non-scientists with a unique insight into the workings of our universe.</div>
<div class="sheduled-lectures-text">Sheduled Lecture</div>
<div class="lectures-event"><p>We will post lecture details soon. Please check back to get specific lecture information.</p>
<p>To receive email alerts for upcoming public lectures, please join:
<a href="/slac-connections">&raquo;SLAC CONNECTIONS</a>
and you\'ll be kept up to date on all our public lectures activity.</p>
<p>Thank you for taking an interest in what we do at SLAC!</p></div>
';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
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
  /* Field: Content: Speaker Name */
  $handler->display->display_options['fields']['field_speaker_name']['id'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['table'] = 'field_data_field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['field'] = 'field_speaker_name';
  $handler->display->display_options['fields']['field_speaker_name']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_name']['element_label_colon'] = FALSE;
  /* Field: Content: Affiliations */
  $handler->display->display_options['fields']['field_affiliations']['id'] = 'field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['table'] = 'field_data_field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['field'] = 'field_affiliations';
  $handler->display->display_options['fields']['field_affiliations']['label'] = '';
  $handler->display->display_options['fields']['field_affiliations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_affiliations']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_affiliations']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_speaker_name], [field_affiliations]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Lecture Date */
  $handler->display->display_options['fields']['field_lecture_date']['id'] = 'field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['table'] = 'field_data_field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['field'] = 'field_lecture_date';
  $handler->display->display_options['fields']['field_lecture_date']['label'] = '';
  $handler->display->display_options['fields']['field_lecture_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lecture_date']['settings'] = array(
    'format_type' => 'complete',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: iCal link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'iCal link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ical-link mobile-hide"><a href="/lecture/[nid]/event.ics">iCal</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'lightbox2';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'type' => 'lightbox',
    'image_style' => 'medium',
    'lightbox_style' => 'grid-lightbox-gallery-full-size',
    'caption' => 'hidden',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: Speaker image */
  $handler->display->display_options['fields']['field_speaker_image']['id'] = 'field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['table'] = 'field_data_field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['field'] = 'field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['label'] = 'About the speaker';
  $handler->display->display_options['fields']['field_speaker_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image']['type'] = 'lightbox2';
  $handler->display->display_options['fields']['field_speaker_image']['settings'] = array(
    'type' => 'lightbox',
    'image_style' => 'medium',
    'lightbox_style' => 'grid-lightbox-gallery-full-size',
    'caption' => 'hidden',
  );
  /* Field: Content: About the Speaker */
  $handler->display->display_options['fields']['field_about_the_speaker']['id'] = 'field_about_the_speaker';
  $handler->display->display_options['fields']['field_about_the_speaker']['table'] = 'field_data_field_about_the_speaker';
  $handler->display->display_options['fields']['field_about_the_speaker']['field'] = 'field_about_the_speaker';
  $handler->display->display_options['fields']['field_about_the_speaker']['label'] = '';
  $handler->display->display_options['fields']['field_about_the_speaker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_about_the_speaker']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'About the Speaker:';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="about-speaker-side">[field_speaker_image]
<span>[field_speaker_name]</span></div>[field_about_the_speaker]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['no_calname'] = 1;
  $handler->display->display_options['style_options']['disable_webcal'] = 0;
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_lecture_date.field_lecture_date_value';
  $handler->display->display_options['row_options']['summary_field'] = 'default_title';
  $handler->display->display_options['row_options']['location_field'] = 'field_data_field_location.field_location';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
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
  $handler->display->display_options['path'] = 'lecture/%/event.ics';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block' => 0,
  );
  $export['next_lecture'] = $view;

  return $export;
}
