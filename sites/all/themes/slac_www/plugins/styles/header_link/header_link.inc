<?php

/**
 * @file
 */

// Plugin definition
$plugin = array(
  'title' => t('Header link'),
  'description' => t('Displays a link after the pane title.'),
  'render pane' => 'panels_header_link_style_render_pane',
  'pane settings form' => 'panels_header_link_style_settings_form',
);

/**
 * Render callback for a single pane.
 */
function theme_panels_header_link_style_render_pane($vars) {
  $settings = $vars['settings'];
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];

  $header_link = '';
  if (isset($settings['header_link'])) {
    if (isset($settings['header_link_title']) && $settings['header_link_title'] != '') {
      $link_title = $settings['header_link_title'];
    }
    else {
      $link_title = $settings['header_link'];
    }
    $header_link = array(
      '#type' => 'link',
      '#title' => $link_title,
      '#href' => $settings['header_link'],
      '#options' => array(
        'html' => TRUE,
        'attributes' => array(
          'class' => array('pane-header-link'),
        ),
      )
    );
  }

  if (empty($content->content)) {
    return;
  }

  $output = theme(
    'panels_pane',
    array(
      'content' => $content,
      'pane' => $pane,
      'display' => $display,
      'title_suffix' => array($header_link),
    )
  );

  return $output;
}

/**
 * Settings form callback.
 */
function panels_header_link_style_settings_form($style_settings) {
  $form['header_link_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Header link title'),
    '#default_value' => (isset($style_settings['header_link_title'])) ? $style_settings['header_link_title'] : '',
    '#description' => t('Set the title of the link that will be displayed after the pane title.'),
  );
  $form['header_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Header link'),
    '#default_value' => (isset($style_settings['header_link'])) ? $style_settings['header_link'] : '',
    '#description' => t('Set the link that will be displayed after the pane title.'),
  );

  return $form;
}
