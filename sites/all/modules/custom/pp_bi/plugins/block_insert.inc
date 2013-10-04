<?php
/**
 * @file
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function pp_bi_block_insert_plugin() {
  $plugins['block_insert'] = array(
    'title' => t('PP Block Insert'),
    'icon file' => 'pp_bi_button.png',
    'icon title' => t('PP Block Insert'),
    'settings' => array(),
  );
  return $plugins;
}
