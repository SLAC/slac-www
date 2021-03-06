<?php
/**
 * @file
 * slac_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function slac_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'footer_logo',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.87373737373737',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'footer_logo' => array(
        'type' => 'region',
        'title' => 'Footer logo',
        'width' => '25.126262626262626',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'footer_logo' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'be684907-bf4f-4ddf-a941-9dfd9dd73d81';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c55b37ec-0394-4f27-b210-4ad53a963675';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c55b37ec-0394-4f27-b210-4ad53a963675';
  $display->content['new-c55b37ec-0394-4f27-b210-4ad53a963675'] = $pane;
  $display->panels['center'][0] = 'new-c55b37ec-0394-4f27-b210-4ad53a963675';
  $pane = new stdClass();
  $pane->pid = 'new-7412ec06-81ce-492d-852b-4f33f6e86e5a';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Footer text',
    'title' => '<none>',
    'body' => '<style type="text/css">a.lightbox.youtube-title.lightbox-processed {
	display: none!important;
}
.video-block a.lightbox.youtube-title.lightbox-processed {display:block!important;}
</style>
<p><span><b><a href="http://www.slac.stanford.edu">SLAC NATIONAL ACCELERATOR LABORATORY</a></b> 2575 Sand Hill Road, Menlo Park, CA 94025</span><br>
	<span>Operated by <a href="http://www.stanford.edu" target="_blank">Stanford University</a> for the <a href="http://science.energy.gov" target="_blank">U.S. Department of Energy Office of Science</a></span></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7412ec06-81ce-492d-852b-4f33f6e86e5a';
  $display->content['new-7412ec06-81ce-492d-852b-4f33f6e86e5a'] = $pane;
  $display->panels['center'][1] = 'new-7412ec06-81ce-492d-852b-4f33f6e86e5a';
  $pane = new stdClass();
  $pane->pid = 'new-874029d1-aee3-4bcc-a7b6-26067c9a735b';
  $pane->panel = 'footer_logo';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Footer logo',
    'title' => '',
    'body' => '<style type="text/css">
.node-type-news-article .content {padding-top: 10px;}
.menu-item-2 li.menu-357 {border-top:1px dashed #333;}
.menu-item-2 li.last {border-top:1px solid #ccc;}
</style>
<p><a href="http://www.stanford.edu" target="_blank"><img alt="stanford-logo" src="/sites/all/themes/slac_www/images/stanford-logo.png"></a><a href="http://science.energy.gov" target="_blank"><img alt="doe-logo" src="/sites/all/themes/slac_www/images/doe-logo.png"></a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '874029d1-aee3-4bcc-a7b6-26067c9a735b';
  $display->content['new-874029d1-aee3-4bcc-a7b6-26067c9a735b'] = $pane;
  $display->panels['footer_logo'][0] = 'new-874029d1-aee3-4bcc-a7b6-26067c9a735b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c55b37ec-0394-4f27-b210-4ad53a963675';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
