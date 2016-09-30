<?php
/**
 * @file
 * slac_search_option.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_search_option_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'set_search_option';
  $page->task = 'page';
  $page->admin_title = 'Set search option';
  $page->admin_description = 'Set search option page.';
  $page->path = 'set-search-option.aspx';
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
  $handler->name = 'page_set_search_option_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'set_search_option';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-col-basic',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dfa8779a-c122-4d0b-9907-6bfb5e4cfa7f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_set_search_option_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-61625dd8-cc5c-4f84-8f03-8c72ddc8c9eb';
  $pane->panel = 'middle';
  $pane->type = 'search_options';
  $pane->subtype = 'search_options';
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
  $pane->uuid = '61625dd8-cc5c-4f84-8f03-8c72ddc8c9eb';
  $display->content['new-61625dd8-cc5c-4f84-8f03-8c72ddc8c9eb'] = $pane;
  $display->panels['middle'][0] = 'new-61625dd8-cc5c-4f84-8f03-8c72ddc8c9eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-61625dd8-cc5c-4f84-8f03-8c72ddc8c9eb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['set_search_option'] = $page;

  return $pages;

}
