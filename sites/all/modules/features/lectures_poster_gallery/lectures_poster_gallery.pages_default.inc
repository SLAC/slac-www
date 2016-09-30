<?php
/**
 * @file
 * lectures_poster_gallery.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function lectures_poster_gallery_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'posters_gallery';
  $page->task = 'page';
  $page->admin_title = 'Poster Gallery';
  $page->admin_description = 'Poster Gallery page.';
  $page->path = 'community/poster-gallery';
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
  $handler->name = 'page_posters_gallery_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'posters_gallery';
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
  $display->title = 'Poster Gallery';
  $display->uuid = '6464fe3d-7de0-44a0-bd86-e3e53f788018';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_posters_gallery_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-acde7ddd-478e-4ab8-9e5f-25b848f8fb2f';
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
  $pane->uuid = 'acde7ddd-478e-4ab8-9e5f-25b848f8fb2f';
  $display->content['new-acde7ddd-478e-4ab8-9e5f-25b848f8fb2f'] = $pane;
  $display->panels['left'][0] = 'new-acde7ddd-478e-4ab8-9e5f-25b848f8fb2f';
  $pane = new stdClass();
  $pane->pid = 'new-c9730021-9282-4bb8-b6bf-266a861e8a65';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'SLAC Public Lecture Series',
    'title' => '',
    'body' => '<h6>SLAC Public Lecture Series</h6>
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
  $pane->uuid = 'c9730021-9282-4bb8-b6bf-266a861e8a65';
  $display->content['new-c9730021-9282-4bb8-b6bf-266a861e8a65'] = $pane;
  $display->panels['middle'][0] = 'new-c9730021-9282-4bb8-b6bf-266a861e8a65';
  $pane = new stdClass();
  $pane->pid = 'new-fdb51c46-68b2-423e-85aa-da07c34ecc6b';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Poster Gallery title',
    'title' => '',
    'body' => '<h1 class="sub">Poster Gallery</h1>
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fdb51c46-68b2-423e-85aa-da07c34ecc6b';
  $display->content['new-fdb51c46-68b2-423e-85aa-da07c34ecc6b'] = $pane;
  $display->panels['middle'][1] = 'new-fdb51c46-68b2-423e-85aa-da07c34ecc6b';
  $pane = new stdClass();
  $pane->pid = 'new-b599f70e-3c10-42dd-a916-5c51adbae097';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'lectures_gallery-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b599f70e-3c10-42dd-a916-5c51adbae097';
  $display->content['new-b599f70e-3c10-42dd-a916-5c51adbae097'] = $pane;
  $display->panels['middle'][2] = 'new-b599f70e-3c10-42dd-a916-5c51adbae097';
  $pane = new stdClass();
  $pane->pid = 'new-12d495d8-d61b-45e6-a369-a55e70492f9e';
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
  $pane->uuid = '12d495d8-d61b-45e6-a369-a55e70492f9e';
  $display->content['new-12d495d8-d61b-45e6-a369-a55e70492f9e'] = $pane;
  $display->panels['right'][0] = 'new-12d495d8-d61b-45e6-a369-a55e70492f9e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b599f70e-3c10-42dd-a916-5c51adbae097';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['posters_gallery'] = $page;

  return $pages;

}
