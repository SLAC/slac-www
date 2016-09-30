<?php
/**
 * @file
 * slac_connections_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_connections_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'SLAC Connections page',
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
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/2432',
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
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'mainmiddleright' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'SLAC Public Lecture Series';
  $display->uuid = 'c3566a99-d986-4a41-881c-e4e1682ad332';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-194d47f9-14e3-4aa1-8738-6a194eb07161';
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
  $pane->uuid = '194d47f9-14e3-4aa1-8738-6a194eb07161';
  $display->content['new-194d47f9-14e3-4aa1-8738-6a194eb07161'] = $pane;
  $display->panels['left'][0] = 'new-194d47f9-14e3-4aa1-8738-6a194eb07161';
  $pane = new stdClass();
  $pane->pid = 'new-4a8b87aa-9d15-45cf-a228-a7b30e7eb090';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
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
  $pane->uuid = '4a8b87aa-9d15-45cf-a228-a7b30e7eb090';
  $display->content['new-4a8b87aa-9d15-45cf-a228-a7b30e7eb090'] = $pane;
  $display->panels['middle'][0] = 'new-4a8b87aa-9d15-45cf-a228-a7b30e7eb090';
  $pane = new stdClass();
  $pane->pid = 'new-a115c7da-4e5a-406e-bb06-eda419e592d6';
  $pane->panel = 'middle';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a115c7da-4e5a-406e-bb06-eda419e592d6';
  $display->content['new-a115c7da-4e5a-406e-bb06-eda419e592d6'] = $pane;
  $display->panels['middle'][1] = 'new-a115c7da-4e5a-406e-bb06-eda419e592d6';
  $pane = new stdClass();
  $pane->pid = 'new-38df962d-111c-40ed-b66c-82350cece9af';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
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
  $pane->uuid = '38df962d-111c-40ed-b66c-82350cece9af';
  $display->content['new-38df962d-111c-40ed-b66c-82350cece9af'] = $pane;
  $display->panels['middle'][2] = 'new-38df962d-111c-40ed-b66c-82350cece9af';
  $pane = new stdClass();
  $pane->pid = 'new-aa6bfd90-90d3-41cc-8713-72429be5fac7';
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
  $pane->uuid = 'aa6bfd90-90d3-41cc-8713-72429be5fac7';
  $display->content['new-aa6bfd90-90d3-41cc-8713-72429be5fac7'] = $pane;
  $display->panels['right'][0] = 'new-aa6bfd90-90d3-41cc-8713-72429be5fac7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
