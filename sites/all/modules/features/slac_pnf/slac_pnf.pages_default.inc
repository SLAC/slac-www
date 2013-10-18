<?php
/**
 * @file
 * slac_pnf.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_pnf_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_not_found';
  $page->task = 'page';
  $page->admin_title = 'Page not found';
  $page->admin_description = '';
  $page->path = 'page-not-found';
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
  $handler->name = 'page_page_not_found_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'page_not_found';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Page Not Found';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page not found block',
      'title' => '',
      'body' => '<p>We&#39;re sorry, but the page you&#39;re looking for cannot be found. There may be several possible reasons:</p>

<ul class="regularul">
	<li>the URL typed into the browser&#39;s address field is spelled incorrectly</li>
	<li>the bookmark to this page is outdated, and the page has been removed or renamed</li>
	<li>the site referring you to this address has outdated link information</li>
</ul>

<p>You can contact the webteam through our <a href="/general/feedback.aspx">Feedback Form</a> or click the &quot;report issue&quot; button below to report this issue.</p>

<p>You will be redirected to the home page if there is no action taken in 15 seconds.</p>
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
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_not_found'] = $page;

  return $pages;

}
