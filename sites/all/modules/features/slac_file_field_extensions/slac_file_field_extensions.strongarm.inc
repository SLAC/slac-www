<?php
/**
 * @file
 * slac_file_field_extensions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_file_field_extensions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__file_extensions';
  $strongarm->value = 'jpg jpeg gif png pdf doc docx ppt pptx xls xlsx txt';
  $export['media__file_extensions'] = $strongarm;

  return $export;
}
