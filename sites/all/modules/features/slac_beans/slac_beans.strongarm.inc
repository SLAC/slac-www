<?php
/**
 * @file
 * slac_beans.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_beans_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bean_wysiwyg_types_enabled';
  $strongarm->value = array(
    'block_with_brochures' => 'block_with_brochures',
    'content_block' => 'content_block',
    'bean_default' => 0,
  );
  $export['bean_wysiwyg_types_enabled'] = $strongarm;

  return $export;
}
