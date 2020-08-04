<?php
/**
 * @file
 * slac_virtual.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_virtual_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__virtual';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Virtual',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'virtual',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'paragraph_layout_page' => 'paragraph_layout_page',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'page_basic_paragraphs';
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
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'header' => NULL,
      'menu' => NULL,
      'search' => NULL,
      'mainnav' => NULL,
      'secondnav' => NULL,
      'icon' => NULL,
      'cta' => NULL,
      'menu-responsive' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '59c9b5e2-e263-4e1e-83f2-628be3167420';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__virtual';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aabd1f2f-5bf3-4a9c-9cf8-514eb60bece6';
  $pane->panel = 'content';
  $pane->type = 'pane_messages';
  $pane->subtype = 'pane_messages';
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
  $pane->uuid = 'aabd1f2f-5bf3-4a9c-9cf8-514eb60bece6';
  $display->content['new-aabd1f2f-5bf3-4a9c-9cf8-514eb60bece6'] = $pane;
  $display->panels['content'][0] = 'new-aabd1f2f-5bf3-4a9c-9cf8-514eb60bece6';
  $pane = new stdClass();
  $pane->pid = 'new-f15e611a-9595-4aab-ad11-4af5a0f02edf';
  $pane->panel = 'content';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '%title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f15e611a-9595-4aab-ad11-4af5a0f02edf';
  $display->content['new-f15e611a-9595-4aab-ad11-4af5a0f02edf'] = $pane;
  $display->panels['content'][1] = 'new-f15e611a-9595-4aab-ad11-4af5a0f02edf';
  $pane = new stdClass();
  $pane->pid = 'new-97341c98-e838-4578-8cd2-0ab1f46f906d';
  $pane->panel = 'cta';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a class="btn btn-cta" href="https://www-public.slac.stanford.edu/tour/" target="blank">Launch Interactive Tour</a></p>
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
  $pane->uuid = '97341c98-e838-4578-8cd2-0ab1f46f906d';
  $display->content['new-97341c98-e838-4578-8cd2-0ab1f46f906d'] = $pane;
  $display->panels['cta'][0] = 'new-97341c98-e838-4578-8cd2-0ab1f46f906d';
  $pane = new stdClass();
  $pane->pid = 'new-f55a45ca-8cec-4b78-b2e5-1d23cc8eb4db';
  $pane->panel = 'footer';
  $pane->type = 'panels_mini';
  $pane->subtype = 'clone_of_footer_2018';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f55a45ca-8cec-4b78-b2e5-1d23cc8eb4db';
  $display->content['new-f55a45ca-8cec-4b78-b2e5-1d23cc8eb4db'] = $pane;
  $display->panels['footer'][0] = 'new-f55a45ca-8cec-4b78-b2e5-1d23cc8eb4db';
  $pane = new stdClass();
  $pane->pid = 'new-53f21aba-4805-400d-804c-73634cb92ee5';
  $pane->panel = 'header';
  $pane->type = 'pane_header';
  $pane->subtype = 'pane_header';
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
  $pane->uuid = '53f21aba-4805-400d-804c-73634cb92ee5';
  $display->content['new-53f21aba-4805-400d-804c-73634cb92ee5'] = $pane;
  $display->panels['header'][0] = 'new-53f21aba-4805-400d-804c-73634cb92ee5';
  $pane = new stdClass();
  $pane->pid = 'new-951b6de8-2f17-4d01-ac88-5e514d6303e9';
  $pane->panel = 'header';
  $pane->type = 'search_block';
  $pane->subtype = 'search_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'mobile-search-box',
    'css_class' => 'mobile-search-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '951b6de8-2f17-4d01-ac88-5e514d6303e9';
  $display->content['new-951b6de8-2f17-4d01-ac88-5e514d6303e9'] = $pane;
  $display->panels['header'][1] = 'new-951b6de8-2f17-4d01-ac88-5e514d6303e9';
  $pane = new stdClass();
  $pane->pid = 'new-f7b60321-72e6-48bb-b5a6-7fc04be7f02c';
  $pane->panel = 'icon';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Site Icon',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<p><a href="/virtual-tour"><img src="/sites/all/themes/slac/img/slac_laser_icon.png"></a></p>
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
  $pane->uuid = 'f7b60321-72e6-48bb-b5a6-7fc04be7f02c';
  $display->content['new-f7b60321-72e6-48bb-b5a6-7fc04be7f02c'] = $pane;
  $display->panels['icon'][0] = 'new-f7b60321-72e6-48bb-b5a6-7fc04be7f02c';
  $pane = new stdClass();
  $pane->pid = 'new-20fb470d-85f3-4943-a417-b11eeff1a058';
  $pane->panel = 'mainnav';
  $pane->type = 'block';
  $pane->subtype = 'nice_menus-1';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'main-menu',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '20fb470d-85f3-4943-a417-b11eeff1a058';
  $display->content['new-20fb470d-85f3-4943-a417-b11eeff1a058'] = $pane;
  $display->panels['mainnav'][0] = 'new-20fb470d-85f3-4943-a417-b11eeff1a058';
  $pane = new stdClass();
  $pane->pid = 'new-bbcfea11-0937-4ace-96ed-1b7315011ec4';
  $pane->panel = 'menu';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-top-nav-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'bbcfea11-0937-4ace-96ed-1b7315011ec4';
  $display->content['new-bbcfea11-0937-4ace-96ed-1b7315011ec4'] = $pane;
  $display->panels['menu'][0] = 'new-bbcfea11-0937-4ace-96ed-1b7315011ec4';
  $pane = new stdClass();
  $pane->pid = 'new-68924196-0d08-426f-9b2f-2e35cfb14f3a';
  $pane->panel = 'menu-responsive';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-virtual-tour';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68924196-0d08-426f-9b2f-2e35cfb14f3a';
  $display->content['new-68924196-0d08-426f-9b2f-2e35cfb14f3a'] = $pane;
  $display->panels['menu-responsive'][0] = 'new-68924196-0d08-426f-9b2f-2e35cfb14f3a';
  $pane = new stdClass();
  $pane->pid = 'new-8a2845ce-15f1-4d10-92bb-5696b75cefaa';
  $pane->panel = 'search';
  $pane->type = 'search_block';
  $pane->subtype = 'search_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'mobile-search-box',
    'css_class' => 'mobile-search-box',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8a2845ce-15f1-4d10-92bb-5696b75cefaa';
  $display->content['new-8a2845ce-15f1-4d10-92bb-5696b75cefaa'] = $pane;
  $display->panels['search'][0] = 'new-8a2845ce-15f1-4d10-92bb-5696b75cefaa';
  $pane = new stdClass();
  $pane->pid = 'new-ce83bab2-b8dc-460a-ba6d-74786cc912d4';
  $pane->panel = 'secondnav';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Section Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="section-title">SLAC Virtual Tour</div>',
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
  $pane->uuid = 'ce83bab2-b8dc-460a-ba6d-74786cc912d4';
  $display->content['new-ce83bab2-b8dc-460a-ba6d-74786cc912d4'] = $pane;
  $display->panels['secondnav'][0] = 'new-ce83bab2-b8dc-460a-ba6d-74786cc912d4';
  $pane = new stdClass();
  $pane->pid = 'new-c171e0b5-f9ea-4e25-aa7d-d79ea2eae613';
  $pane->panel = 'secondnav';
  $pane->type = 'block';
  $pane->subtype = 'nice_menus-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c171e0b5-f9ea-4e25-aa7d-d79ea2eae613';
  $display->content['new-c171e0b5-f9ea-4e25-aa7d-d79ea2eae613'] = $pane;
  $display->panels['secondnav'][1] = 'new-c171e0b5-f9ea-4e25-aa7d-d79ea2eae613';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__virtual'] = $handler;

  return $export;
}
