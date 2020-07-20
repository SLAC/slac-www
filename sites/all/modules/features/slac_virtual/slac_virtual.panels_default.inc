<?php
/**
 * @file
 * slac_virtual.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function slac_virtual_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'clone_of_footer_2018';
  $mini->category = 'Footer';
  $mini->admin_title = 'Footer 2020 Bootstrap';
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
      'footer_logo' => NULL,
      'center' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'be684907-bf4f-4ddf-a941-9dfd9dd73d81';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'clone_of_footer_2018';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-109fa7c7-905f-4c55-933a-99e6cbbc559e';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Tagline for W6',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p style="font-size:1.5em; font-weight: 700; letter-spacing: .08em; line-height: 24px;">BOLD PEOPLE.&nbsp; VISIONARY SCIENCE.&nbsp; REAL IMPACT.</p>
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
    'css_class' => 'slac-tagline',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '109fa7c7-905f-4c55-933a-99e6cbbc559e';
  $display->content['new-109fa7c7-905f-4c55-933a-99e6cbbc559e'] = $pane;
  $display->panels['center'][0] = 'new-109fa7c7-905f-4c55-933a-99e6cbbc559e';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c55b37ec-0394-4f27-b210-4ad53a963675';
  $display->content['new-c55b37ec-0394-4f27-b210-4ad53a963675'] = $pane;
  $display->panels['center'][1] = 'new-c55b37ec-0394-4f27-b210-4ad53a963675';
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
    'body' => '<p><strong><a href="http://www.slac.stanford.edu">SLAC NATIONAL ACCELERATOR LABORATORY</a> </strong>2575 Sand Hill Road, Menlo Park, CA 94025<br>
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7412ec06-81ce-492d-852b-4f33f6e86e5a';
  $display->content['new-7412ec06-81ce-492d-852b-4f33f6e86e5a'] = $pane;
  $display->panels['center'][2] = 'new-7412ec06-81ce-492d-852b-4f33f6e86e5a';
  $pane = new stdClass();
  $pane->pid = 'new-8a18e29b-fccf-43b6-8d85-3347014d9109';
  $pane->panel = 'footer_logo';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="social-channels"><a href="https://www.linkedin.com/company/slac-national-accelerator-laboratory" rel="noopener" style="background:#0077b5;" target="_blank" title="SLAC on Linkedin"><img src="/sites/all/themes/slac/img/linkedin.svg"></a><a href="https://www.youtube.com/user/SLAC" rel="noopener" style="background:#cd201f;" target="_blank" title="SLAC\'s YouTube Channel"><img src="/sites/all/themes/slac/img/youtube.svg"></a><a href="https://www.flickr.com/photos/slaclab" rel="noopener" style="background:#0063dc;" target="_blank" title="SLAC\'s Flickr Album"><img src="/sites/all/themes/slac/img/flickr.svg"></a><a href="https://www.instagram.com/slac_lab/" rel="noopener" style="background: linear-gradient( #400080, transparent), linear-gradient(200deg, #d047d1, #ff0000, #ffff00);" target="_blank" title="SLAC on Instagram"><img src="/sites/all/themes/slac/img/instagram.svg"></a><a href="https://twitter.com/slaclab" rel="noopener" style="background:#55acee;" target="_blank" title="SLAC\'s Twitter Feed"><img src="/sites/all/themes/slac/img/twitter.svg"></a><a href="https://www.facebook.com/SLAC.National.Lab" rel="noopener" style="background:#3b5998;" target="_blank" title="SLAC on Facebook"><img src="/sites/all/themes/slac/img/fb.svg"></a></div>
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8a18e29b-fccf-43b6-8d85-3347014d9109';
  $display->content['new-8a18e29b-fccf-43b6-8d85-3347014d9109'] = $pane;
  $display->panels['footer_logo'][0] = 'new-8a18e29b-fccf-43b6-8d85-3347014d9109';
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
    'body' => '<div class="footer-logos">
	<p><a href="http://www.stanford.edu" target="_blank" title="Stanford University"><img alt="stanford-logo" src="https://www6.slac.stanford.edu/sites/www6.slac.stanford.edu/files/stanford-logo.png"></a><a href="http://science.energy.gov" target="_blank" title="DOE Office of Science"><img alt="doe-logo" src="https://www6.slac.stanford.edu/sites/www6.slac.stanford.edu/files/doe-logo.png"></a></p>
</div>
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
  $pane->uuid = '874029d1-aee3-4bcc-a7b6-26067c9a735b';
  $display->content['new-874029d1-aee3-4bcc-a7b6-26067c9a735b'] = $pane;
  $display->panels['footer_logo'][1] = 'new-874029d1-aee3-4bcc-a7b6-26067c9a735b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c55b37ec-0394-4f27-b210-4ad53a963675';
  $mini->display = $display;
  $export['clone_of_footer_2018'] = $mini;

  return $export;
}
