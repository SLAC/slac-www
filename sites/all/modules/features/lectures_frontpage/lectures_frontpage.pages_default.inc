<?php
/**
 * @file
 * lectures_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function lectures_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lectures_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Lectures frontpage';
  $page->admin_description = '';
  $page->path = 'community/public-lectures.aspx';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lectures_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lectures_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'mainmiddleright' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5272c164-b029-4f01-ac39-f2aecd6dbb90';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lectures_frontpage_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-efd8e566-c0bc-4845-bd22-eff40589193b';
  $pane->panel = 'left';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-top-nav-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'menu-top-nav-menu',
    'parent_mlid' => 'menu-top-nav-menu:0',
    'title_link' => 1,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => 0,
    'expanded' => 1,
    'sort' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'highlited left-menu',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'efd8e566-c0bc-4845-bd22-eff40589193b';
  $display->content['new-efd8e566-c0bc-4845-bd22-eff40589193b'] = $pane;
  $display->panels['left'][0] = 'new-efd8e566-c0bc-4845-bd22-eff40589193b';
  $pane = new stdClass();
  $pane->pid = 'new-068e06e1-2be1-4a47-9211-366fca34a0b2';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'views_compare',
        'settings' => NULL,
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'lectures image',
    'title' => '',
    'body' => '<p>[[{"fid":"8469","view_mode":"crop_wysiwyg_original","type":"media","attributes":{"height":205,"width":576,"class":"media-element file-crop-wysiwyg-original"}}]]</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-node-field-image scheduled-short',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '068e06e1-2be1-4a47-9211-366fca34a0b2';
  $display->content['new-068e06e1-2be1-4a47-9211-366fca34a0b2'] = $pane;
  $display->panels['middle'][0] = 'new-068e06e1-2be1-4a47-9211-366fca34a0b2';
  $pane = new stdClass();
  $pane->pid = 'new-aab60722-8d09-4ad3-8095-618a552401e6';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Lectures intro text',
    'title' => '',
    'body' => '<p><span style="color: rgb(71, 71, 72); font-family: Arial, sans-serif; font-size: 12px; line-height: 20px;">Ever wonder what goes on at SLAC National Accelerator Laboratory? The SLAC Public Lecture Series is your chance to find out! Every other month, SLAC opens its doors to the local community for an evening lecture highlighting the cutting-edge science happening at the laboratory. From the nanotechnology of diamonds to the latest Higgs Boson discoveries, SLAC public lectures provide non-scientists with a unique insight into the workings of our universe.</span></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'scheduled-short',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aab60722-8d09-4ad3-8095-618a552401e6';
  $display->content['new-aab60722-8d09-4ad3-8095-618a552401e6'] = $pane;
  $display->panels['middle'][1] = 'new-aab60722-8d09-4ad3-8095-618a552401e6';
  $pane = new stdClass();
  $pane->pid = 'new-2d74774c-75e9-493d-b57d-e7c4eacf71ab';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Past lectures text and share icons',
    'title' => '',
    'body' => '<div class="social-icon-block"><a href="http://delicious.com/save" onclick="window.location = \'http://www.delicious.com/save?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///delicious.png" title="delicious" /></a> <a href="http://www.slashdot.org/submission" onclick="window.location = \'http://www.slashdot.org/submission?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///slashdot.png" title="slashdot" /></a> <a href="http://www.facebook.com/sharer" onclick="window.location = \'http://www.facebook.com/sharer/sharer.php?u=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///facebook.png" title="facebook" /></a> <a href="http://www.twitter.com/share" onclick="window.location = \'http://www.twitter.com/intent/tweet?source=\' + encodeURIComponent(window.location) + \'&amp;text=\' +  encodeURIComponent(window.location); return false"> <img alt="" class="socialiconnews" src="public:///twitter.png" title="twitter" /></a> <a href="http://www.digg.com/submit" onclick="window.location = \'http://www.digg.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///digg.png" title="digg" /></a> <a href="http://www.reddit.com/submit" onclick="window.location = \'http://www.reddit.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///reddit.png" title="reddit" /></a></div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2d74774c-75e9-493d-b57d-e7c4eacf71ab';
  $display->content['new-2d74774c-75e9-493d-b57d-e7c4eacf71ab'] = $pane;
  $display->panels['middle'][2] = 'new-2d74774c-75e9-493d-b57d-e7c4eacf71ab';
  $pane = new stdClass();
  $pane->pid = 'new-77e28301-377c-409a-bbea-def7af41704e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'next_lecture-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'views_compare',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'scheduled-short pane-next-lecture',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '77e28301-377c-409a-bbea-def7af41704e';
  $display->content['new-77e28301-377c-409a-bbea-def7af41704e'] = $pane;
  $display->panels['middle'][3] = 'new-77e28301-377c-409a-bbea-def7af41704e';
  $pane = new stdClass();
  $pane->pid = 'new-e97321d0-89e1-439b-b5b7-8ad0849ad54b';
  $pane->panel = 'middle';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:881930c9-526b-4747-a7d1-d557c1501e33';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'scheduled-short',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e97321d0-89e1-439b-b5b7-8ad0849ad54b';
  $display->content['new-e97321d0-89e1-439b-b5b7-8ad0849ad54b'] = $pane;
  $display->panels['middle'][4] = 'new-e97321d0-89e1-439b-b5b7-8ad0849ad54b';
  $pane = new stdClass();
  $pane->pid = 'new-4a88f123-da54-4ed4-8ea7-9f08be168772';
  $pane->panel = 'right';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:03a2e4d0-91e9-468e-b19c-311925af2b74';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'highlited related-links links-internal-external-icons',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4a88f123-da54-4ed4-8ea7-9f08be168772';
  $display->content['new-4a88f123-da54-4ed4-8ea7-9f08be168772'] = $pane;
  $display->panels['right'][0] = 'new-4a88f123-da54-4ed4-8ea7-9f08be168772';
  $pane = new stdClass();
  $pane->pid = 'new-fc57001d-5bae-4a8d-b1cd-383d650c8c7c';
  $pane->panel = 'right';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-slac-directorates';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'menu-slac-directorates',
    'parent_mlid' => 'menu-slac-directorates:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => 0,
    'expanded' => 0,
    'sort' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'highlited related-links',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fc57001d-5bae-4a8d-b1cd-383d650c8c7c';
  $display->content['new-fc57001d-5bae-4a8d-b1cd-383d650c8c7c'] = $pane;
  $display->panels['right'][1] = 'new-fc57001d-5bae-4a8d-b1cd-383d650c8c7c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-068e06e1-2be1-4a47-9211-366fca34a0b2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lectures_frontpage'] = $page;

  return $pages;

}
