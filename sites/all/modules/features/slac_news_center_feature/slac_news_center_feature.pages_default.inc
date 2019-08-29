<?php
/**
 * @file
 * slac_news_center_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_news_center_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_archives';
  $page->task = 'page';
  $page->admin_title = 'News Archives';
  $page->admin_description = 'SLAC News Archives pages.';
  $page->path = 'news/%arhive_info';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'arhive_info' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_archives_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_archives';
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
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news/news-feature-archive-2*
news/press-release-archive-2*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => '$arg = $contexts[\'argument_string_1\']->data;
  $year = substr($arg, -4);
  if (!is_numeric($year) || $year > date(\'Y\')) {
    return FALSE;
  }

  if (substr($arg, 0, -5) == \'news-feature-archive\'
      || substr($arg, 0, -5) == \'press-release-archive\') {
  return TRUE;
  }',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'panels_menu_active_trail' => 'menu-top-nav-menu:363',
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
        'width' => '53.99501538738972',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '23.00896950838608',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '22.996015104224206',
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
  $display->title = '';
  $display->uuid = '216a591a-9cb1-4acb-a72c-20bc3e8373e3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_news_archives_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b55af951-fa7f-42af-9a3b-324974495e41';
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
  $pane->uuid = 'b55af951-fa7f-42af-9a3b-324974495e41';
  $display->content['new-b55af951-fa7f-42af-9a3b-324974495e41'] = $pane;
  $display->panels['left'][0] = 'new-b55af951-fa7f-42af-9a3b-324974495e41';
  $pane = new stdClass();
  $pane->pid = 'new-b8526828-bc0c-45b6-944a-c01c3894b7ff';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_center-panel_pane_3';
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
  $pane->uuid = 'b8526828-bc0c-45b6-944a-c01c3894b7ff';
  $display->content['new-b8526828-bc0c-45b6-944a-c01c3894b7ff'] = $pane;
  $display->panels['middle'][0] = 'new-b8526828-bc0c-45b6-944a-c01c3894b7ff';
  $pane = new stdClass();
  $pane->pid = 'new-727b70b1-0242-4692-9f76-c3adecff68d8';
  $pane->panel = 'right';
  $pane->type = 'news_archives';
  $pane->subtype = 'news_archives';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
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
  $pane->uuid = '727b70b1-0242-4692-9f76-c3adecff68d8';
  $display->content['new-727b70b1-0242-4692-9f76-c3adecff68d8'] = $pane;
  $display->panels['right'][0] = 'new-727b70b1-0242-4692-9f76-c3adecff68d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_archives'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_center';
  $page->task = 'page';
  $page->admin_title = 'News Center';
  $page->admin_description = 'SLAC News Center page.';
  $page->path = 'news/news-center';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
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
  $handler->name = 'page_news_center_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_center';
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
    'access' => array(
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
        'width' => '53.59815697075965',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '23.009437003078972',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '23.39240602616138',
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
  $display->title = 'News Center';
  $display->uuid = 'a2707859-1180-4853-9b3f-9e1b717aed7e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_news_center_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-046cffe6-b228-4a29-b139-b9acde6d5684';
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
  $pane->uuid = '046cffe6-b228-4a29-b139-b9acde6d5684';
  $display->content['new-046cffe6-b228-4a29-b139-b9acde6d5684'] = $pane;
  $display->panels['left'][0] = 'new-046cffe6-b228-4a29-b139-b9acde6d5684';
  $pane = new stdClass();
  $pane->pid = 'new-b55c79ee-a46a-4617-a289-faf79e90bd20';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_center-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'highlited news-list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b55c79ee-a46a-4617-a289-faf79e90bd20';
  $display->content['new-b55c79ee-a46a-4617-a289-faf79e90bd20'] = $pane;
  $display->panels['middle'][0] = 'new-b55c79ee-a46a-4617-a289-faf79e90bd20';
  $pane = new stdClass();
  $pane->pid = 'new-fdf8fd38-12a4-4cbb-907a-0e0d6b780535';
  $pane->panel = 'right';
  $pane->type = 'news_archives';
  $pane->subtype = 'news_archives';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
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
  $pane->uuid = 'fdf8fd38-12a4-4cbb-907a-0e0d6b780535';
  $display->content['new-fdf8fd38-12a4-4cbb-907a-0e0d6b780535'] = $pane;
  $display->panels['right'][0] = 'new-fdf8fd38-12a4-4cbb-907a-0e0d6b780535';
  $pane = new stdClass();
  $pane->pid = 'new-8eef3e0e-a1e8-4453-b80e-77e3791b478f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-6';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '8eef3e0e-a1e8-4453-b80e-77e3791b478f';
  $display->content['new-8eef3e0e-a1e8-4453-b80e-77e3791b478f'] = $pane;
  $display->panels['right'][1] = 'new-8eef3e0e-a1e8-4453-b80e-77e3791b478f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_center'] = $page;

  return $pages;

}
