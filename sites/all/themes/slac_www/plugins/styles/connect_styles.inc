<?php

/**
 * Implementation of hook_panels_styles().
 */
function slac_www_connect_styles_panels_styles() {
  return array(
    'connect_styles' => array(
      'title' => t('Connect block styles'),
      'description' => t('Style for frontpage Connect block'),
      'pane settings form' => 'slac_www_settings_form',
      'render pane' => 'connect_styles_pane',
    )
  );
}

function slac_www_settings_form($style_settings) {
  $css_styles = array(
    '1' => 'Style 1',
    '2' => 'Style 2',
    '3' => 'Style 3',
    '4' => 'Style 4'
  );

  $form['connect_css_style'] = array(
    '#type' => 'select',
    '#title' => 'Select a style',
    '#options' => $css_styles,
    '#default_value' => isset($style_settings['connect_css_style']) ? $style_settings['connect_css_style'] : ''
  );

  return $form;
}

function theme_connect_styles_pane($content) {
  // Define pane variables
  $variables = array(
    'css_class' => !empty($content['content']->css_class) ? $content['content']->css_class : '',
    'title' => is_string($content['content']->content) ? $content['content']->title : '',
    'content' => is_string($content['content']->content) ? $content['content']->content : drupal_render($content['content']->content),
    'connect_css_style' => isset($content['settings']['connect_css_style']) ? $content['settings']['connect_css_style'] : ''
  );

  $output = '';
  $output .= '<div class="connect-style-' . $variables['connect_css_style'] . ' '. $variables['css_class'] . '">';

  if (!empty($variables['title'])) {
    $output .= '<h2 class="pane-title">' . $variables['title'] . '</h2>';
  }
  $output .= '<div class="pane-content connect-style-' . $variables['connect_css_style'] . '-content">' . $variables['content'] . '</div>';

  $output .= '</div></div>';
  return $output;
}
