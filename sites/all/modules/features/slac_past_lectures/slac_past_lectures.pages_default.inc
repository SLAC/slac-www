<?php
/**
 * @file
 * slac_past_lectures.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_past_lectures_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_11';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Sheduled lecture page',
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
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'lecture' => 'lecture',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'date_compare',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_menu_active_trail' => 'menu-top-nav-menu:369',
  );
  $display = new panels_display();
  $display->layout = 'three_col_lectures';
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
          0 => 'left',
          1 => 'center',
          2 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '53.936111668329715',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '23.0089107328174',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '23.05497759885288',
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
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
      'mainmiddleright' => NULL,
      'middle-top' => NULL,
      'middle-center-left' => NULL,
      'middle-center-right' => NULL,
      'middle-bottom-left' => NULL,
      'middle-bottom-right' => NULL,
      'middle-top-seccond' => NULL,
      'middle-center' => NULL,
      'middle-center-bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'SLAC Public Lecture Series';
  $display->uuid = '09ace3c8-8f5c-41fa-9914-6927127e4444';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_11';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2da49903-729c-4051-a6ca-4122a2ea7f23';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '2da49903-729c-4051-a6ca-4122a2ea7f23';
  $display->content['new-2da49903-729c-4051-a6ca-4122a2ea7f23'] = $pane;
  $display->panels['left'][0] = 'new-2da49903-729c-4051-a6ca-4122a2ea7f23';
  $pane = new stdClass();
  $pane->pid = 'new-7d29e57f-70e3-44e7-a738-573d06c04a7a';
  $pane->panel = 'middle-bottom-left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_speaker_image';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:lecture:field_about_the_speaker',
        'settings' => array(
          'field_about_the_speaker' => array(
            'und' => array(
              0 => array(
                'value' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_about_the_speaker_value' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
          'field_about_the_speaker_format' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'lightbox2',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'medium',
      'image_link' => 'file',
      'type' => 'lightbox',
      'lightbox_style' => 'grid-lightbox-gallery-full-size',
      'caption' => 'hidden',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'About the Speaker:',
    'admin_title' => '',
    'title' => 'About the speaker label',
    'body' => '<p>About the Speaker:</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7d29e57f-70e3-44e7-a738-573d06c04a7a';
  $display->content['new-7d29e57f-70e3-44e7-a738-573d06c04a7a'] = $pane;
  $display->panels['middle-bottom-left'][0] = 'new-7d29e57f-70e3-44e7-a738-573d06c04a7a';
  $pane = new stdClass();
  $pane->pid = 'new-ac40e840-d793-4e7c-af84-ef7f35261d7c';
  $pane->panel = 'middle-bottom-left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_speaker_name';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:lecture:field_about_the_speaker',
        'settings' => array(
          'field_about_the_speaker' => array(
            'und' => array(
              0 => array(
                'value' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_about_the_speaker_value' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
          'field_about_the_speaker_format' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'speaker-name',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ac40e840-d793-4e7c-af84-ef7f35261d7c';
  $display->content['new-ac40e840-d793-4e7c-af84-ef7f35261d7c'] = $pane;
  $display->panels['middle-bottom-left'][1] = 'new-ac40e840-d793-4e7c-af84-ef7f35261d7c';
  $pane = new stdClass();
  $pane->pid = 'new-aaf237ca-0a2b-4e9f-b9ae-49b635d1ee49';
  $pane->panel = 'middle-bottom-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_about_the_speaker';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:lecture:field_about_the_speaker',
        'settings' => array(
          'field_about_the_speaker' => array(
            'und' => array(
              0 => array(
                'value' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_about_the_speaker_value' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
          'field_about_the_speaker_format' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aaf237ca-0a2b-4e9f-b9ae-49b635d1ee49';
  $display->content['new-aaf237ca-0a2b-4e9f-b9ae-49b635d1ee49'] = $pane;
  $display->panels['middle-bottom-right'][0] = 'new-aaf237ca-0a2b-4e9f-b9ae-49b635d1ee49';
  $pane = new stdClass();
  $pane->pid = 'new-28881971-d5a8-46a3-86dc-2c04e10a4103';
  $pane->panel = 'middle-center-bottom';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:lecture:field_about_the_speaker',
        'settings' => array(
          'field_about_the_speaker' => array(
            'und' => array(
              0 => array(
                'value' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_about_the_speaker_value' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
          'field_about_the_speaker_format' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'About the speaker label',
    'title' => '',
    'body' => '<p>About the Speaker:</p>
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
    'css_class' => 'about-label',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '28881971-d5a8-46a3-86dc-2c04e10a4103';
  $display->content['new-28881971-d5a8-46a3-86dc-2c04e10a4103'] = $pane;
  $display->panels['middle-center-bottom'][0] = 'new-28881971-d5a8-46a3-86dc-2c04e10a4103';
  $pane = new stdClass();
  $pane->pid = 'new-bf1df4e4-04db-485f-89a8-b80a92589ec9';
  $pane->panel = 'middle-center-left';
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
      'image_style' => 'medium',
      'image_link' => '',
      'type' => 'lightbox',
      'lightbox_style' => 'grid-lightbox-gallery-full-size',
      'caption' => 'hidden',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
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
  $pane->uuid = 'bf1df4e4-04db-485f-89a8-b80a92589ec9';
  $display->content['new-bf1df4e4-04db-485f-89a8-b80a92589ec9'] = $pane;
  $display->panels['middle-center-left'][0] = 'new-bf1df4e4-04db-485f-89a8-b80a92589ec9';
  $pane = new stdClass();
  $pane->pid = 'new-213db73e-c809-43d4-8cb2-b41ed3614bfb';
  $pane->panel = 'middle-center-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
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
  $pane->uuid = '213db73e-c809-43d4-8cb2-b41ed3614bfb';
  $display->content['new-213db73e-c809-43d4-8cb2-b41ed3614bfb'] = $pane;
  $display->panels['middle-center-right'][0] = 'new-213db73e-c809-43d4-8cb2-b41ed3614bfb';
  $pane = new stdClass();
  $pane->pid = 'new-70302b33-c169-45ff-8b99-0de9d07c3758';
  $pane->panel = 'middle-top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="panel-pane pane-entity-field pane-node-body">
	<div class="pane-content">
		<div class="field field-name-body field-type-text-with-summary field-label-hidden">
			<div class="field-items">
				<div class="field-item even">
					<p>Ever wonder what goes on at SLAC National Accelerator Laboratory? The SLAC Public Lecture Series is your chance to find out! Every other month, SLAC opens its doors to the local community for an evening lecture highlighting the cutting-edge science happening at the laboratory. From the nanotechnology of diamonds to the latest Higgs Boson discoveries, SLAC public lectures provide non-scientists with a unique insight into the workings of our universe.</p>
				</div>
			</div>
		</div>
	</div>
</div>
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
    'css_class' => 'lectures-subtitle sheduled',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '70302b33-c169-45ff-8b99-0de9d07c3758';
  $display->content['new-70302b33-c169-45ff-8b99-0de9d07c3758'] = $pane;
  $display->panels['middle-top'][0] = 'new-70302b33-c169-45ff-8b99-0de9d07c3758';
  $pane = new stdClass();
  $pane->pid = 'new-2802bc49-bc0f-4575-ba0d-c5ba57efd8aa';
  $pane->panel = 'middle-top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title-2',
    'title' => '',
    'body' => 'SLAC public Lecture Series',
    'format' => 'plain_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'lectures-subtitle',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2802bc49-bc0f-4575-ba0d-c5ba57efd8aa';
  $display->content['new-2802bc49-bc0f-4575-ba0d-c5ba57efd8aa'] = $pane;
  $display->panels['middle-top'][1] = 'new-2802bc49-bc0f-4575-ba0d-c5ba57efd8aa';
  $pane = new stdClass();
  $pane->pid = 'new-cbda5ea4-9c1b-447e-a18c-095f3c9d2c53';
  $pane->panel = 'middle-top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Past lectures text and share icons',
    'title' => '',
    'body' => '<div class="past-lectures-text">Scheduled lecture</div>

<div class="social-icon-block"><a href="http://delicious.com/save" onclick="window.location = \'http://www.delicious.com/save?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/www6-stage.slac.stanford.edu/files/delicious.png" title="delicious" /></a> <a href="http://www.slashdot.org/submission" onclick="window.location = \'http://www.slashdot.org/submission?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/www6-stage.slac.stanford.edu/files/slashdot.png" title="slashdot" /></a> <a href="http://www.facebook.com/sharer" onclick="window.location = \'http://www.facebook.com/sharer/sharer.php?u=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/www6-stage.slac.stanford.edu/files/facebook.png" title="facebook" /></a> <a href="http://www.twitter.com/share" onclick="window.location = \'http://www.twitter.com/intent/tweet?source=\' + encodeURIComponent(window.location) + \'&amp;text=\' +  encodeURIComponent(window.location); return false"> <img alt="" class="socialiconnews" src="/sites/www6-stage.slac.stanford.edu/files/twitter.png" title="twitter" /></a> <a href="http://www.digg.com/submit" onclick="window.location = \'http://www.digg.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/www6-stage.slac.stanford.edu/files/digg.png" title="digg" /></a> <a href="http://www.reddit.com/submit" onclick="window.location = \'http://www.reddit.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="/sites/www6-stage.slac.stanford.edu/files/reddit.png" title="reddit" /></a></div>
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
    'css_class' => 'past-lectures-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cbda5ea4-9c1b-447e-a18c-095f3c9d2c53';
  $display->content['new-cbda5ea4-9c1b-447e-a18c-095f3c9d2c53'] = $pane;
  $display->panels['middle-top'][2] = 'new-cbda5ea4-9c1b-447e-a18c-095f3c9d2c53';
  $pane = new stdClass();
  $pane->pid = 'new-d374bb90-2d66-4cc7-8471-548f533920b1';
  $pane->panel = 'middle-top-seccond';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd374bb90-2d66-4cc7-8471-548f533920b1';
  $display->content['new-d374bb90-2d66-4cc7-8471-548f533920b1'] = $pane;
  $display->panels['middle-top-seccond'][0] = 'new-d374bb90-2d66-4cc7-8471-548f533920b1';
  $pane = new stdClass();
  $pane->pid = 'new-6a6e4508-6b37-44e3-a5f6-f86b044f7701';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'views_panes';
  $pane->subtype = 'slac_lectures-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6a6e4508-6b37-44e3-a5f6-f86b044f7701';
  $display->content['new-6a6e4508-6b37-44e3-a5f6-f86b044f7701'] = $pane;
  $display->panels['middle-top-seccond'][1] = 'new-6a6e4508-6b37-44e3-a5f6-f86b044f7701';
  $pane = new stdClass();
  $pane->pid = 'new-397d7f6d-a889-4619-b4f0-8a67f5fdbc42';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_lecture_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'full_date',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
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
  $pane->uuid = '397d7f6d-a889-4619-b4f0-8a67f5fdbc42';
  $display->content['new-397d7f6d-a889-4619-b4f0-8a67f5fdbc42'] = $pane;
  $display->panels['middle-top-seccond'][2] = 'new-397d7f6d-a889-4619-b4f0-8a67f5fdbc42';
  $pane = new stdClass();
  $pane->pid = 'new-b2062e8b-1503-4fb0-bf12-098787f32b95';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'iCal link',
    'title' => '',
    'body' => '<div class="ical-link"><a href="/lecture/%node:nid/event.ics">iCal</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b2062e8b-1503-4fb0-bf12-098787f32b95';
  $display->content['new-b2062e8b-1503-4fb0-bf12-098787f32b95'] = $pane;
  $display->panels['middle-top-seccond'][3] = 'new-b2062e8b-1503-4fb0-bf12-098787f32b95';
  $pane = new stdClass();
  $pane->pid = 'new-15aef5b0-ae9b-4677-b6c8-f011b3b97f16';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'views_panes';
  $pane->subtype = 'slac_lectures-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '15aef5b0-ae9b-4677-b6c8-f011b3b97f16';
  $display->content['new-15aef5b0-ae9b-4677-b6c8-f011b3b97f16'] = $pane;
  $display->panels['middle-top-seccond'][4] = 'new-15aef5b0-ae9b-4677-b6c8-f011b3b97f16';
  $pane = new stdClass();
  $pane->pid = 'new-f3bc738a-0d3c-48e2-9a82-0bbc2081465d';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_location';
  $pane->shown = FALSE;
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'f3bc738a-0d3c-48e2-9a82-0bbc2081465d';
  $display->content['new-f3bc738a-0d3c-48e2-9a82-0bbc2081465d'] = $pane;
  $display->panels['middle-top-seccond'][5] = 'new-f3bc738a-0d3c-48e2-9a82-0bbc2081465d';
  $pane = new stdClass();
  $pane->pid = 'new-4f89cdeb-c05f-4256-8ff8-04026b8153a7';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'jw_player',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'jwplayer_preset' => '528x400',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '4f89cdeb-c05f-4256-8ff8-04026b8153a7';
  $display->content['new-4f89cdeb-c05f-4256-8ff8-04026b8153a7'] = $pane;
  $display->panels['middle-top-seccond'][6] = 'new-4f89cdeb-c05f-4256-8ff8-04026b8153a7';
  $pane = new stdClass();
  $pane->pid = 'new-fac73339-0d21-49a8-ba6a-3b1fa075b5d5';
  $pane->panel = 'right';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:a9d568dd-8c5e-4bbb-b47f-0bc14b94580c';
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
    'css_class' => 'highlited related-links',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fac73339-0d21-49a8-ba6a-3b1fa075b5d5';
  $display->content['new-fac73339-0d21-49a8-ba6a-3b1fa075b5d5'] = $pane;
  $display->panels['right'][0] = 'new-fac73339-0d21-49a8-ba6a-3b1fa075b5d5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Lecture node page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.lightbox-processed {display:block !important; }',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'lecture' => 'lecture',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'date_compare',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_menu_active_trail' => 'menu-top-nav-menu:1376',
  );
  $display = new panels_display();
  $display->layout = 'three_col_lectures';
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
          0 => 'left',
          1 => 'center',
          2 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '53.936111668329715',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '23.0089107328174',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '23.05497759885288',
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
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
      'mainmiddleright' => NULL,
      'middle-top' => NULL,
      'middle-center-left' => NULL,
      'middle-center-right' => NULL,
      'middle-bottom-left' => NULL,
      'middle-bottom-right' => NULL,
      'middle-top-seccond' => NULL,
      'middle-center-bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Lecture Details';
  $display->uuid = '7d736271-92ef-40ea-b836-57ffc0f90ec3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b6e0667b-6ef3-4cd6-8dc8-9941f9b8ee79';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'b6e0667b-6ef3-4cd6-8dc8-9941f9b8ee79';
  $display->content['new-b6e0667b-6ef3-4cd6-8dc8-9941f9b8ee79'] = $pane;
  $display->panels['left'][0] = 'new-b6e0667b-6ef3-4cd6-8dc8-9941f9b8ee79';
  $pane = new stdClass();
  $pane->pid = 'new-71de7456-cb8b-4dc9-b89d-ee86a0425043';
  $pane->panel = 'middle-bottom-left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_speaker_image';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:lecture:field_about_the_speaker',
        'settings' => array(
          'field_about_the_speaker' => array(
            'und' => array(
              0 => array(
                'value' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_about_the_speaker_value' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
          'field_about_the_speaker_format' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'lightbox2',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'medium',
      'image_link' => 'file',
      'type' => 'lightbox',
      'lightbox_style' => 'grid-lightbox-gallery-full-size',
      'caption' => 'hidden',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'About the Speaker:',
    'admin_title' => '',
    'title' => 'About the speaker label',
    'body' => '<p>About the Speaker:</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '71de7456-cb8b-4dc9-b89d-ee86a0425043';
  $display->content['new-71de7456-cb8b-4dc9-b89d-ee86a0425043'] = $pane;
  $display->panels['middle-bottom-left'][0] = 'new-71de7456-cb8b-4dc9-b89d-ee86a0425043';
  $pane = new stdClass();
  $pane->pid = 'new-fcaf8a24-e0d4-4d60-863c-a1c8625a3c29';
  $pane->panel = 'middle-bottom-left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_speaker_name';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:lecture:field_about_the_speaker',
        'settings' => array(
          'field_about_the_speaker' => array(
            'und' => array(
              0 => array(
                'value' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_about_the_speaker_value' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
          'field_about_the_speaker_format' => array(
            0 => array(
              'value' => '',
              'format' => 'full_html',
            ),
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'speaker-name',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fcaf8a24-e0d4-4d60-863c-a1c8625a3c29';
  $display->content['new-fcaf8a24-e0d4-4d60-863c-a1c8625a3c29'] = $pane;
  $display->panels['middle-bottom-left'][1] = 'new-fcaf8a24-e0d4-4d60-863c-a1c8625a3c29';
  $pane = new stdClass();
  $pane->pid = 'new-9821a858-7672-49e3-b888-4b75257d72f4';
  $pane->panel = 'middle-bottom-left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_about_the_speaker';
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
  $pane->uuid = '9821a858-7672-49e3-b888-4b75257d72f4';
  $display->content['new-9821a858-7672-49e3-b888-4b75257d72f4'] = $pane;
  $display->panels['middle-bottom-left'][2] = 'new-9821a858-7672-49e3-b888-4b75257d72f4';
  $pane = new stdClass();
  $pane->pid = 'new-e5214b9d-0c36-4a3e-b10c-690bf24c23ec';
  $pane->panel = 'middle-bottom-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_about_the_speaker';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e5214b9d-0c36-4a3e-b10c-690bf24c23ec';
  $display->content['new-e5214b9d-0c36-4a3e-b10c-690bf24c23ec'] = $pane;
  $display->panels['middle-bottom-right'][0] = 'new-e5214b9d-0c36-4a3e-b10c-690bf24c23ec';
  $pane = new stdClass();
  $pane->pid = 'new-18fced82-e36e-43c4-b829-4cf3f282ca14';
  $pane->panel = 'middle-center-bottom';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'admin_title' => 'About the speaker label',
    'title' => '',
    'body' => '<p>About the Speaker:</p>
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
    'css_class' => 'about-label',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '18fced82-e36e-43c4-b829-4cf3f282ca14';
  $display->content['new-18fced82-e36e-43c4-b829-4cf3f282ca14'] = $pane;
  $display->panels['middle-center-bottom'][0] = 'new-18fced82-e36e-43c4-b829-4cf3f282ca14';
  $pane = new stdClass();
  $pane->pid = 'new-b792f885-9b91-42c9-843c-94274403a41e';
  $pane->panel = 'middle-center-left';
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
      'image_style' => 'medium',
      'image_link' => '',
      'type' => 'lightbox',
      'lightbox_style' => 'grid-lightbox-gallery-full-size',
      'caption' => 'hidden',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
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
  $pane->uuid = 'b792f885-9b91-42c9-843c-94274403a41e';
  $display->content['new-b792f885-9b91-42c9-843c-94274403a41e'] = $pane;
  $display->panels['middle-center-left'][0] = 'new-b792f885-9b91-42c9-843c-94274403a41e';
  $pane = new stdClass();
  $pane->pid = 'new-fd25597d-7c63-48ae-8b0b-48ed07c12ecd';
  $pane->panel = 'middle-center-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
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
  $pane->uuid = 'fd25597d-7c63-48ae-8b0b-48ed07c12ecd';
  $display->content['new-fd25597d-7c63-48ae-8b0b-48ed07c12ecd'] = $pane;
  $display->panels['middle-center-right'][0] = 'new-fd25597d-7c63-48ae-8b0b-48ed07c12ecd';
  $pane = new stdClass();
  $pane->pid = 'new-abd36e2a-de9e-452a-b65e-2211e24f78ce';
  $pane->panel = 'middle-top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<style type="text/css">div.panel-panel.three-col-right > div > div > div > div > h2 {display:none;}
</style>
<p><a href="/community/past-lectures">« Past Lectures page</a></p>
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
    'css_class' => 'lecture-past-link',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'abd36e2a-de9e-452a-b65e-2211e24f78ce';
  $display->content['new-abd36e2a-de9e-452a-b65e-2211e24f78ce'] = $pane;
  $display->panels['middle-top'][0] = 'new-abd36e2a-de9e-452a-b65e-2211e24f78ce';
  $pane = new stdClass();
  $pane->pid = 'new-c4452e7d-a348-4ca7-adbb-da7240939a94';
  $pane->panel = 'middle-top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title-2',
    'title' => '',
    'body' => 'SLAC Public Lecture Series',
    'format' => 'plain_text',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'lectures-subtitle',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c4452e7d-a348-4ca7-adbb-da7240939a94';
  $display->content['new-c4452e7d-a348-4ca7-adbb-da7240939a94'] = $pane;
  $display->panels['middle-top'][1] = 'new-c4452e7d-a348-4ca7-adbb-da7240939a94';
  $pane = new stdClass();
  $pane->pid = 'new-568d0b2a-0eb0-4af1-a981-6103b36a03c3';
  $pane->panel = 'middle-top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Past lectures text and share icons',
    'title' => '',
    'body' => '<div class="past-lectures-text">Past Lecture</div>

<div class="social-icon-block"><a href="http://delicious.com/save" onclick="window.location = \'http://www.delicious.com/save?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///delicious.png" title="delicious" /></a> <a href="http://www.slashdot.org/submission" onclick="window.location = \'http://www.slashdot.org/submission?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///slashdot.png" title="slashdot" /></a> <a href="http://www.facebook.com/sharer" onclick="window.location = \'http://www.facebook.com/sharer/sharer.php?u=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///facebook.png" title="facebook" /></a> <a href="http://www.twitter.com/share" onclick="window.location = \'http://www.twitter.com/intent/tweet?source=\' + encodeURIComponent(window.location) + \'&amp;text=\' +  encodeURIComponent(window.location); return false"> <img alt="" class="socialiconnews" src="public:///twitter.png" title="twitter" /></a> <a href="http://www.digg.com/submit" onclick="window.location = \'http://www.digg.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///digg.png" title="digg" /></a> <a href="http://www.reddit.com/submit" onclick="window.location = \'http://www.reddit.com/submit?url=\' + encodeURIComponent(window.location); return false"><img alt="" class="socialiconnews" src="public:///reddit.png" title="reddit" /></a></div>
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
    'css_class' => 'past-lectures-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '568d0b2a-0eb0-4af1-a981-6103b36a03c3';
  $display->content['new-568d0b2a-0eb0-4af1-a981-6103b36a03c3'] = $pane;
  $display->panels['middle-top'][2] = 'new-568d0b2a-0eb0-4af1-a981-6103b36a03c3';
  $pane = new stdClass();
  $pane->pid = 'new-f677fc96-8018-42b3-818e-1f6c53f6201a';
  $pane->panel = 'middle-top-seccond';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f677fc96-8018-42b3-818e-1f6c53f6201a';
  $display->content['new-f677fc96-8018-42b3-818e-1f6c53f6201a'] = $pane;
  $display->panels['middle-top-seccond'][0] = 'new-f677fc96-8018-42b3-818e-1f6c53f6201a';
  $pane = new stdClass();
  $pane->pid = 'new-2357b9d4-68de-4181-8eb8-9a59ab398a1b';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'views_panes';
  $pane->subtype = 'slac_lectures-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2357b9d4-68de-4181-8eb8-9a59ab398a1b';
  $display->content['new-2357b9d4-68de-4181-8eb8-9a59ab398a1b'] = $pane;
  $display->panels['middle-top-seccond'][1] = 'new-2357b9d4-68de-4181-8eb8-9a59ab398a1b';
  $pane = new stdClass();
  $pane->pid = 'new-b4289410-ab65-48d1-b981-23bb652fba95';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_lecture_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'full_date',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
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
  $pane->uuid = 'b4289410-ab65-48d1-b981-23bb652fba95';
  $display->content['new-b4289410-ab65-48d1-b981-23bb652fba95'] = $pane;
  $display->panels['middle-top-seccond'][2] = 'new-b4289410-ab65-48d1-b981-23bb652fba95';
  $pane = new stdClass();
  $pane->pid = 'new-a6a5be99-e910-4461-874d-2c8ccccbd83e';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'views_panes';
  $pane->subtype = 'slac_lectures-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'lecture-location',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a6a5be99-e910-4461-874d-2c8ccccbd83e';
  $display->content['new-a6a5be99-e910-4461-874d-2c8ccccbd83e'] = $pane;
  $display->panels['middle-top-seccond'][3] = 'new-a6a5be99-e910-4461-874d-2c8ccccbd83e';
  $pane = new stdClass();
  $pane->pid = 'new-0b809ce5-ba83-49ce-bcfe-7ca7a7c31399';
  $pane->panel = 'middle-top-seccond';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'media_youtube_video_popup_news',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'jwplayer_preset' => '528x400',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0b809ce5-ba83-49ce-bcfe-7ca7a7c31399';
  $display->content['new-0b809ce5-ba83-49ce-bcfe-7ca7a7c31399'] = $pane;
  $display->panels['middle-top-seccond'][4] = 'new-0b809ce5-ba83-49ce-bcfe-7ca7a7c31399';
  $pane = new stdClass();
  $pane->pid = 'new-0fddcf35-0a75-4883-8ddc-fda20997b397';
  $pane->panel = 'right';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'current:6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'token',
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
  $pane->uuid = '0fddcf35-0a75-4883-8ddc-fda20997b397';
  $display->content['new-0fddcf35-0a75-4883-8ddc-fda20997b397'] = $pane;
  $display->panels['right'][0] = 'new-0fddcf35-0a75-4883-8ddc-fda20997b397';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_past_lectures_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'past_lectures';
  $page->task = 'page';
  $page->admin_title = 'Past Lectures';
  $page->admin_description = 'SLAC Past Lectures page.';
  $page->path = 'community/past-lectures';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_past_lectures_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'past_lectures';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_col';
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
          0 => 'left',
          1 => 'center',
          2 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '53.936111668329715',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '23.0089107328174',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '23.05497759885288',
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
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
      'mainmiddleright' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Past Lectures';
  $display->uuid = '3b301c32-2d6d-40b7-af9c-a1982076b551';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_past_lectures_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c0e7a856-0968-4eb4-bbdd-fb22b5f1610f';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'c0e7a856-0968-4eb4-bbdd-fb22b5f1610f';
  $display->content['new-c0e7a856-0968-4eb4-bbdd-fb22b5f1610f'] = $pane;
  $display->panels['left'][0] = 'new-c0e7a856-0968-4eb4-bbdd-fb22b5f1610f';
  $pane = new stdClass();
  $pane->pid = 'new-033c809c-472a-455f-84d5-f05ac3771d0b';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'slac_lectures-panel_pane_1';
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
  $pane->uuid = '033c809c-472a-455f-84d5-f05ac3771d0b';
  $display->content['new-033c809c-472a-455f-84d5-f05ac3771d0b'] = $pane;
  $display->panels['middle'][0] = 'new-033c809c-472a-455f-84d5-f05ac3771d0b';
  $pane = new stdClass();
  $pane->pid = 'new-6ed5f3fe-15bd-4275-ae44-19ee5bd90411';
  $pane->panel = 'right';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:a9d568dd-8c5e-4bbb-b47f-0bc14b94580c';
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
  $pane->uuid = '6ed5f3fe-15bd-4275-ae44-19ee5bd90411';
  $display->content['new-6ed5f3fe-15bd-4275-ae44-19ee5bd90411'] = $pane;
  $display->panels['right'][0] = 'new-6ed5f3fe-15bd-4275-ae44-19ee5bd90411';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['past_lectures'] = $page;

  return $pages;

}
