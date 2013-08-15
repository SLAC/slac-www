<?php

$plugin = array(
  'form' => 'slac_import_files_form',
  'callback' => 'slac_import_files_callback',
  'name' => 'Files',
  'multi' => 'direct',
  'category' => 'SLAC',
);

/**
 * Plugin form.
 */
function slac_import_files_form($importer, $element_key, $settings) {
  $form = array();
  $form['domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Domain'),
    '#default_value' => isset($settings['domain']) ? $settings['domain'] : '',
    '#description' => 'For example: http://example.com',
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => TRUE,
  );

  return $form;
}

/**
 * Plugin callback.
 */
function slac_import_files_callback($source, $item_key, $element_key, &$field, $settings) {
  $out = array();

  if (empty($field)) {
    return;
  }

  if (!is_array($field)) {
    $field = array($field);
  }

  foreach ($field as $f) {
    if (strpos($f, ',') === FALSE) {
      if (!empty($f)) {
        $out[] = $settings['domain'] . $f;
      }
    }
    else {
      $files = explode(',', $f);
      foreach ($files as $file) {
        $out[] = $settings['domain'] . $file;
      }
    }
  }

  $field = $out;
}
