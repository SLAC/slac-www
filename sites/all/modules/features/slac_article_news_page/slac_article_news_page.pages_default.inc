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
    'css' => '.panel-panel.content .panel-pane.pane-page-content .pane-title{ display: none !important;}',
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
  $display->layout = 'header_two_col_leftsidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'menu' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
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
  $pane->pid = 'new-91e713e1-2c8c-48ff-9623-e28d9d5ecff0';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_header_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
      'file_view_mode' => 'header_cropped',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '91e713e1-2c8c-48ff-9623-e28d9d5ecff0';
  $display->content['new-91e713e1-2c8c-48ff-9623-e28d9d5ecff0'] = $pane;
  $display->panels['header'][0] = 'new-91e713e1-2c8c-48ff-9623-e28d9d5ecff0';
  $pane = new stdClass();
  $pane->pid = 'new-8487372d-9049-4742-b747-ada8d997a17d';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_header_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'media',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'page_full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8487372d-9049-4742-b747-ada8d997a17d';
  $display->content['new-8487372d-9049-4742-b747-ada8d997a17d'] = $pane;
  $display->panels['header'][1] = 'new-8487372d-9049-4742-b747-ada8d997a17d';
  $pane = new stdClass();
  $pane->pid = 'new-21c98a36-d3d0-437a-9ead-64a2ae60a9b5';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Social share block',
    'title' => 'Share',
    'body' => '<style type="text/css">ul.share-buttons{
  list-style: none;
  padding: 0;
text-align:center;

}

ul.share-buttons li{
margin:0 6px 8px;
}
ul.share-buttons {
margin-top: 22px;
}

ul.share-buttons .sr-only{
  position: absolute;
  clip: rect(1px 1px 1px 1px);
  clip: rect(1px, 1px, 1px, 1px);
  padding: 0;
  border: 0;
  height: 1px;
  width: 1px;
  overflow: hidden;
}

ul.share-buttons img{
  width: 50px;
}
</style>
<ul class="share-buttons">
	<li><a class="facebook" href="https://www.facebook.com/sharer/sharer.php?u=https%3A%2F%2Fwww6.slac.stanford.edu%2F&amp;t=SLAC%20National%20Accelerator%20Laboratory" onclick="window.open(\'https://www.facebook.com/sharer/sharer.php?u=\' + encodeURIComponent(document.URL) + \'&amp;t=\' + encodeURIComponent(document.URL)); return false;" target="_blank" title="Share on Facebook"><img alt="Share on Facebook" src="/sites/all/themes/slac_www/images/facebook.svg"></a></li>
	<li><a class="twitter" href="https://twitter.com/intent/tweet?source=https%3A%2F%2Fwww6.slac.stanford.edu%2F&amp;text=SLAC%20National%20Accelerator%20Laboratory:%20https%3A%2F%2Fwww6.slac.stanford.edu%2F" onclick="window.open(\'https://twitter.com/intent/tweet?text=\' + encodeURIComponent(document.title) + \':%20\'  + encodeURIComponent(document.URL)); return false;" target="_blank" title="Tweet"><img alt="Tweet" src="/sites/all/themes/slac_www/images/twitter.svg"></a></li>
	<li><a class="linkedin" href="http://www.linkedin.com/shareArticle?mini=true&amp;url=https%3A%2F%2Fwww6.slac.stanford.edu%2F&amp;title=SLAC%20National%20Accelerator%20Laboratory&amp;summary=Homepage%20for%20SLAC%20National%20Accelerator%20Laboratory&amp;source=https%3A%2F%2Fwww6.slac.stanford.edu%2F" onclick="window.open(\'http://www.linkedin.com/shareArticle?mini=true&amp;url=\' + encodeURIComponent(document.URL) + \'&amp;title=\' +  encodeURIComponent(document.title)); return false;" target="_blank" title="Share on LinkedIn"><img alt="Share on LinkedIn" src="/sites/all/themes/slac_www/images/linkedin.svg"></a></li>
	<li><a class="email" href="mailto:?subject=SLAC%20National%20Accelerator%20Laboratory&amp;body=Homepage%20for%20SLAC%20National%20Accelerator%20Laboratory:%20https%3A%2F%2Fwww6.slac.stanford.edu%2F" onclick="window.open(\'mailto:?subject=\' + encodeURIComponent(document.title) + \'&amp;body=\' +  encodeURIComponent(document.URL)); return false;" title="Send email"><img alt="Send email" src="/sites/all/themes/slac_www/images/email.svg"></a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => 1,
    'title_heading' => 'h2',
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
  $display->panels['left'][0] = 'new-21c98a36-d3d0-437a-9ead-64a2ae60a9b5';
  $pane = new stdClass();
  $pane->pid = 'new-fdeb878f-ca95-4d69-9277-3618ff4324fc';
  $pane->panel = 'right';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fdeb878f-ca95-4d69-9277-3618ff4324fc';
  $display->content['new-fdeb878f-ca95-4d69-9277-3618ff4324fc'] = $pane;
  $display->panels['right'][0] = 'new-fdeb878f-ca95-4d69-9277-3618ff4324fc';
  $pane = new stdClass();
  $pane->pid = 'new-d4f9c3fb-71e2-412f-afbe-4be6d37f553f';
  $pane->panel = 'right';
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
    'override_title_text' => '%node:title',
    'override_title_heading' => 'h2',
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
  $display->panels['right'][1] = 'new-d4f9c3fb-71e2-412f-afbe-4be6d37f553f';
  $pane = new stdClass();
  $pane->pid = 'new-4a6b17a3-0a17-4e68-8db5-508e0c86a93d';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
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
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4a6b17a3-0a17-4e68-8db5-508e0c86a93d';
  $display->content['new-4a6b17a3-0a17-4e68-8db5-508e0c86a93d'] = $pane;
  $display->panels['right'][2] = 'new-4a6b17a3-0a17-4e68-8db5-508e0c86a93d';
  $pane = new stdClass();
  $pane->pid = 'new-2cec49dd-1e2a-4ed0-b8a7-5eca4e594fa5';
  $pane->panel = 'right';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2cec49dd-1e2a-4ed0-b8a7-5eca4e594fa5';
  $display->content['new-2cec49dd-1e2a-4ed0-b8a7-5eca4e594fa5'] = $pane;
  $display->panels['right'][3] = 'new-2cec49dd-1e2a-4ed0-b8a7-5eca4e594fa5';
  $pane = new stdClass();
  $pane->pid = 'new-714a1850-f60e-40c5-a25e-146ac65576a3';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_structured_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'paragraphs_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '714a1850-f60e-40c5-a25e-146ac65576a3';
  $display->content['new-714a1850-f60e-40c5-a25e-146ac65576a3'] = $pane;
  $display->panels['right'][4] = 'new-714a1850-f60e-40c5-a25e-146ac65576a3';
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
    'term_delimiter' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Tags',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '804a50a7-7994-42cd-9609-0120f82634ce';
  $display->content['new-804a50a7-7994-42cd-9609-0120f82634ce'] = $pane;
  $display->panels['right'][5] = 'new-804a50a7-7994-42cd-9609-0120f82634ce';
  $pane = new stdClass();
  $pane->pid = 'new-af53ca8c-6468-40cf-a770-371326c9e5d9';
  $pane->panel = 'right';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'af53ca8c-6468-40cf-a770-371326c9e5d9';
  $display->content['new-af53ca8c-6468-40cf-a770-371326c9e5d9'] = $pane;
  $display->panels['right'][6] = 'new-af53ca8c-6468-40cf-a770-371326c9e5d9';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '250d9a0d-a925-442e-ab51-e657b5ac1e6a';
  $display->content['new-250d9a0d-a925-442e-ab51-e657b5ac1e6a'] = $pane;
  $display->panels['right'][7] = 'new-250d9a0d-a925-442e-ab51-e657b5ac1e6a';
  $pane = new stdClass();
  $pane->pid = 'new-0dc3fce2-1bec-42d6-b3ec-c9beb6572bfe';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'lightbox2',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => 'large',
      'type' => 'lightbox',
      'lightbox_style' => '0',
      'caption' => 'field_file_image_title_text',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '0dc3fce2-1bec-42d6-b3ec-c9beb6572bfe';
  $display->content['new-0dc3fce2-1bec-42d6-b3ec-c9beb6572bfe'] = $pane;
  $display->panels['right'][8] = 'new-0dc3fce2-1bec-42d6-b3ec-c9beb6572bfe';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}
