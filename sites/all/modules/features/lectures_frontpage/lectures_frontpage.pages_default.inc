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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
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
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
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
      'body' => '<p>[[{"fid":"6665","view_mode":"crop_wysiwyg_original","type":"media","attributes":{"height":178,"width":500,"class":"media-element file-crop-wysiwyg-original"}}]]</p>
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
    $display->content['new-2'] = $pane;
    $display->panels['middle'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
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
    $display->content['new-3'] = $pane;
    $display->panels['middle'][1] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Past lectures text and share icons',
      'title' => '',
      'body' => '<div class="social-icon-block"><a href="http://delicious.com/save" onclick="window.location = \'http://www.delicious.com/save?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/delicious.png" title="delicious" /></a> <a href="http://www.slashdot.org/submission" onclick="window.location = \'http://www.slashdot.org/submission?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/slashdot.png" title="slashdot" /></a> <a href="http://www.facebook.com/sharer" onclick="window.location = \'http://www.facebook.com/sharer/sharer.php?u=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/facebook.png" title="facebook" /></a> <a href="http://www.twitter.com/share" onclick="window.location = \'http://www.twitter.com/intent/tweet?source=\' + encodeURIComponent(window.location) + \'&amp;text=\' +  encodeURIComponent(window.location); return false"> <img alt="" class="socialiconnews" src="/sites/default/files/twitter.png" title="twitter" /></a> <a href="http://www.digg.com/submit" onclick="window.location = \'http://www.digg.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/digg.png" title="digg" /></a> <a href="http://www.reddit.com/submit" onclick="window.location = \'http://www.reddit.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/default/files/reddit.png" title="reddit" /></a></div>
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
    $display->content['new-4'] = $pane;
    $display->panels['middle'][2] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
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
    $display->content['new-5'] = $pane;
    $display->panels['middle'][3] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:2003b75c-10eb-4be9-b3c8-be2f953b1f88';
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
    $display->content['new-6'] = $pane;
    $display->panels['middle'][4] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
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
    $display->content['new-7'] = $pane;
    $display->panels['right'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['right'][1] = 'new-8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lectures_frontpage'] = $page;

  return $pages;

}
