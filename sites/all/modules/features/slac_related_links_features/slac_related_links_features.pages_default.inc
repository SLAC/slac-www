<?php
/**
 * @file
 * slac_related_links_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_related_links_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Basic page',
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
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'node/2565
node/1192
node/1228
node/1203
node/1195
node/1209
node/1185
node/1231
node/3480',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
        'width' => '53.99517228477381',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '22.98714744490293',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '23.017680270323275',
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
  $display->title = '%node:title';
  $display->uuid = 'dcec3b92-4266-4699-8dab-3b932659e510';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fa4aae9e-7d3f-42ba-90d3-385e8ec22b0c';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Section navigation block',
    'title' => '',
    'body' => '<p>SECTION NAVIGATION</p>
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
    'css_class' => 'section-navigation-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fa4aae9e-7d3f-42ba-90d3-385e8ec22b0c';
  $display->content['new-fa4aae9e-7d3f-42ba-90d3-385e8ec22b0c'] = $pane;
  $display->panels['left'][0] = 'new-fa4aae9e-7d3f-42ba-90d3-385e8ec22b0c';
  $pane = new stdClass();
  $pane->pid = 'new-6cb1c16b-ddee-46ae-8fe3-0c6ce07c7460';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6cb1c16b-ddee-46ae-8fe3-0c6ce07c7460';
  $display->content['new-6cb1c16b-ddee-46ae-8fe3-0c6ce07c7460'] = $pane;
  $display->panels['left'][1] = 'new-6cb1c16b-ddee-46ae-8fe3-0c6ce07c7460';
  $pane = new stdClass();
  $pane->pid = 'new-08f63796-51bf-4c21-ba4f-b7e16b18572d';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
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
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '08f63796-51bf-4c21-ba4f-b7e16b18572d';
  $display->content['new-08f63796-51bf-4c21-ba4f-b7e16b18572d'] = $pane;
  $display->panels['middle'][0] = 'new-08f63796-51bf-4c21-ba4f-b7e16b18572d';
  $pane = new stdClass();
  $pane->pid = 'new-9d26cfd8-ed79-410a-a1ff-efbcdb6967a0';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9d26cfd8-ed79-410a-a1ff-efbcdb6967a0';
  $display->content['new-9d26cfd8-ed79-410a-a1ff-efbcdb6967a0'] = $pane;
  $display->panels['middle'][1] = 'new-9d26cfd8-ed79-410a-a1ff-efbcdb6967a0';
  $pane = new stdClass();
  $pane->pid = 'new-b38e81d9-0439-4de7-aaef-6cdc2b786ab0';
  $pane->panel = 'right';
  $pane->type = 'press_archives';
  $pane->subtype = 'press_archives';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'media-resources',
        ),
        'context' => 'empty',
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
    'css_class' => 'related-links',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b38e81d9-0439-4de7-aaef-6cdc2b786ab0';
  $display->content['new-b38e81d9-0439-4de7-aaef-6cdc2b786ab0'] = $pane;
  $display->panels['right'][0] = 'new-b38e81d9-0439-4de7-aaef-6cdc2b786ab0';
  $pane = new stdClass();
  $pane->pid = 'new-7994aa7b-0e68-4364-99cc-5d17d5b2c815';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_links';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => 'node/1186',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 0,
      'view_mode' => 'full',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related links',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7994aa7b-0e68-4364-99cc-5d17d5b2c815';
  $display->content['new-7994aa7b-0e68-4364-99cc-5d17d5b2c815'] = $pane;
  $display->panels['right'][1] = 'new-7994aa7b-0e68-4364-99cc-5d17d5b2c815';
  $pane = new stdClass();
  $pane->pid = 'new-933a619e-cb80-4162-a167-a9dfe4ea5572';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-10';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'node/1204
node/1186
node/1215',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
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
    'css_class' => 'highlited related-links',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '933a619e-cb80-4162-a167-a9dfe4ea5572';
  $display->content['new-933a619e-cb80-4162-a167-a9dfe4ea5572'] = $pane;
  $display->panels['right'][2] = 'new-933a619e-cb80-4162-a167-a9dfe4ea5572';
  $pane = new stdClass();
  $pane->pid = 'new-39892c35-6e6d-4025-8ffe-082e2e57073d';
  $pane->panel = 'right';
  $pane->type = 'press_archives';
  $pane->subtype = 'press_archives';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'connect',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '39892c35-6e6d-4025-8ffe-082e2e57073d';
  $display->content['new-39892c35-6e6d-4025-8ffe-082e2e57073d'] = $pane;
  $display->panels['right'][3] = 'new-39892c35-6e6d-4025-8ffe-082e2e57073d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
