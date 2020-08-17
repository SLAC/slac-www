<?php
  function slac_panels_flexible($vars) {

  $css_id = $vars['css_id'];
  $content = $vars['content'];
  $settings = $vars['settings'];
  $display = $vars['display'];
  $layout = $vars['layout'];
  $handler = $vars['renderer'];

  panels_flexible_convert_settings($settings, $layout);

  $renderer = panels_flexible_create_renderer(FALSE, $css_id, $content, $settings, $display, $layout, $handler);

  $output = "<div class=\"panel-flexible " . $renderer->base['canvas'] . " clearfix\" $renderer->id_str>\n";
  $output .= "<div class=\"panel-flexible-inside " . $renderer->base['canvas'] . "-inside\">\n";

  $output .= panels_flexible_render_items($renderer, $settings['items']['canvas']['children'], $renderer->base['canvas']);

  // Wrap the whole thing up nice and snug
  $output .= "</div>\n</div>\n";

  return $output;

  }

  function slac_preprocess_pane_header(&$vars) {
  $search_form = drupal_get_form('search_block_search_form');
  $vars['search_box'] = (isset($search_form) ? drupal_render($search_form) : '');
  $employee_portal_url = variable_get('employee_portal_url', '');
  $vars['employee_portal_url'] = $employee_portal_url ? l(t('Employee Portal'), $employee_portal_url, array('external' => TRUE)) : '';
  $research_resources_url = variable_get('research_resources_url', '');
  $vars['research_resources_url'] = $research_resources_url ? l(t('Research Resources'), $research_resources_url) : '';
}
?>
