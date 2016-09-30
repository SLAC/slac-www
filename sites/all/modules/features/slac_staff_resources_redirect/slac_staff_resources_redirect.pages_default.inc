<?php
/**
 * @file
 * slac_staff_resources_redirect.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_staff_resources_redirect_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_resources';
  $page->task = 'page';
  $page->admin_title = 'Staff-resources';
  $page->admin_description = '';
  $page->path = 'general/obsolete-staff-resources.aspx';
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
  $handler->name = 'page_staff_resources_http_response';
  $handler->task = 'page';
  $handler->subtask = 'staff_resources';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'https://intranet.slac.stanford.edu/staff-resources',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_resources'] = $page;

  return $pages;

}
