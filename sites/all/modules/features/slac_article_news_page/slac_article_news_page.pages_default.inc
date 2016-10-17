<?php
/**
 * @file
 * slac_article_news_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_article_news_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Article-news pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news_article' => 'news_article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_menu_active_trail' => 'menu-top-nav-menu:362',
  );
  $display = new panels_display();
  $display->layout = 'two_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fd3aa595-343f-4aa4-8c82-ac1dfb9ad3d4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-af53ca8c-6468-40cf-a770-371326c9e5d9';
  $pane->panel = 'left';
  $pane->type = 'back_links';
  $pane->subtype = 'back_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'af53ca8c-6468-40cf-a770-371326c9e5d9';
  $display->content['new-af53ca8c-6468-40cf-a770-371326c9e5d9'] = $pane;
  $display->panels['left'][0] = 'new-af53ca8c-6468-40cf-a770-371326c9e5d9';
  $pane = new stdClass();
  $pane->pid = 'new-d4f9c3fb-71e2-412f-afbe-4be6d37f553f';
  $pane->panel = 'left';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd4f9c3fb-71e2-412f-afbe-4be6d37f553f';
  $display->content['new-d4f9c3fb-71e2-412f-afbe-4be6d37f553f'] = $pane;
  $display->panels['left'][1] = 'new-d4f9c3fb-71e2-412f-afbe-4be6d37f553f';
  $pane = new stdClass();
  $pane->pid = 'new-2bab7b28-dfc9-4256-8769-5752d8288e17';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subheadline';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2bab7b28-dfc9-4256-8769-5752d8288e17';
  $display->content['new-2bab7b28-dfc9-4256-8769-5752d8288e17'] = $pane;
  $display->panels['left'][2] = 'new-2bab7b28-dfc9-4256-8769-5752d8288e17';
  $pane = new stdClass();
  $pane->pid = 'new-2cec49dd-1e2a-4ed0-b8a7-5eca4e594fa5';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_page_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'news_author',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2cec49dd-1e2a-4ed0-b8a7-5eca4e594fa5';
  $display->content['new-2cec49dd-1e2a-4ed0-b8a7-5eca4e594fa5'] = $pane;
  $display->panels['left'][3] = 'new-2cec49dd-1e2a-4ed0-b8a7-5eca4e594fa5';
  $pane = new stdClass();
  $pane->pid = 'new-fdeb878f-ca95-4d69-9277-3618ff4324fc';
  $pane->panel = 'left';
  $pane->type = 'node_created';
  $pane->subtype = 'node_created';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'f_j_y',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'fdeb878f-ca95-4d69-9277-3618ff4324fc';
  $display->content['new-fdeb878f-ca95-4d69-9277-3618ff4324fc'] = $pane;
  $display->panels['left'][4] = 'new-fdeb878f-ca95-4d69-9277-3618ff4324fc';
  $pane = new stdClass();
  $pane->pid = 'new-7378957e-ab9a-4dc3-a46d-1aff2ddabd1e';
  $pane->panel = 'left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '7378957e-ab9a-4dc3-a46d-1aff2ddabd1e';
  $display->content['new-7378957e-ab9a-4dc3-a46d-1aff2ddabd1e'] = $pane;
  $display->panels['left'][5] = 'new-7378957e-ab9a-4dc3-a46d-1aff2ddabd1e';
  $pane = new stdClass();
  $pane->pid = 'new-21c98a36-d3d0-437a-9ead-64a2ae60a9b5';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Social share block',
    'title' => 'Share',
    'body' => '<div class="social-icon-block"><a href="http://www.digg.com/submit" onclick="window.location = \'http://www.digg.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///digg.png" title="digg" /></a> <a href="http://www.slashdot.org/submission" onclick="window.location = \'http://www.slashdot.org/submission?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///slashdot.png" title="slashdot" /></a> <a href="http://delicious.com/save" onclick="window.location = \'http://www.delicious.com/save?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///delicious.png" title="delicious" /></a> <a href="http://www.reddit.com/submit" onclick="window.location = \'http://www.reddit.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///reddit.png" title="reddit" /></a> <a href="http://www.facebook.com/sharer" onclick="window.location = \'http://www.facebook.com/sharer/sharer.php?u=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///facebook.png" title="facebook" /></a> <a href="http://www.twitter.com/share" onclick="window.location = \'http://www.twitter.com/intent/tweet?source=\' + encodeURIComponent(window.location) + \'&amp;text=\' +  encodeURIComponent(window.location); return false"> <img alt="" class="socialiconnews" src="public:///twitter.png" title="twitter" /></a></div>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'highlited bg-list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '21c98a36-d3d0-437a-9ead-64a2ae60a9b5';
  $display->content['new-21c98a36-d3d0-437a-9ead-64a2ae60a9b5'] = $pane;
  $display->panels['right'][0] = 'new-21c98a36-d3d0-437a-9ead-64a2ae60a9b5';
  $pane = new stdClass();
  $pane->pid = 'new-0dc3fce2-1bec-42d6-b3ec-c9beb6572bfe';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'lightbox2',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => 'article-news-node-page',
      'type' => 'lightbox',
      'lightbox_style' => '0',
      'caption' => 'field_file_image_title_text',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0dc3fce2-1bec-42d6-b3ec-c9beb6572bfe';
  $display->content['new-0dc3fce2-1bec-42d6-b3ec-c9beb6572bfe'] = $pane;
  $display->panels['right'][1] = 'new-0dc3fce2-1bec-42d6-b3ec-c9beb6572bfe';
  $pane = new stdClass();
  $pane->pid = 'new-11e24d5a-3086-4a2a-baa5-cadfeeeb0ef6';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_center-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '11e24d5a-3086-4a2a-baa5-cadfeeeb0ef6';
  $display->content['new-11e24d5a-3086-4a2a-baa5-cadfeeeb0ef6'] = $pane;
  $display->panels['right'][2] = 'new-11e24d5a-3086-4a2a-baa5-cadfeeeb0ef6';
  $pane = new stdClass();
  $pane->pid = 'new-250d9a0d-a925-442e-ab51-e657b5ac1e6a';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_news_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'media',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'highlited video-block',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '250d9a0d-a925-442e-ab51-e657b5ac1e6a';
  $display->content['new-250d9a0d-a925-442e-ab51-e657b5ac1e6a'] = $pane;
  $display->panels['right'][3] = 'new-250d9a0d-a925-442e-ab51-e657b5ac1e6a';
  $pane = new stdClass();
  $pane->pid = 'new-804a50a7-7994-42cd-9609-0120f82634ce';
  $pane->panel = 'right';
  $pane->type = 'node_terms_misc';
  $pane->subtype = 'node_terms_misc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'vid' => '5',
    'term_format' => 'inline-delimited',
    'link' => 1,
    'term_delimiter' => ', ',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Tags',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '804a50a7-7994-42cd-9609-0120f82634ce';
  $display->content['new-804a50a7-7994-42cd-9609-0120f82634ce'] = $pane;
  $display->panels['right'][4] = 'new-804a50a7-7994-42cd-9609-0120f82634ce';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}
