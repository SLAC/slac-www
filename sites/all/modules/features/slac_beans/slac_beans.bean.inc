<?php
/**
 * @file
 * slac_beans.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function slac_beans_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'block_with_brochures';
  $bean_type->label = 'Brochures block';
  $bean_type->options = '';
  $bean_type->description = 'Blocks with title, shaded background, list of brochures (image, title, download link).';
  $export['block_with_brochures'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'image_text_link';
  $bean_type->label = 'Image, text, link';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['image_text_link'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'shaded_no_title_block';
  $bean_type->label = 'Shaded (no title) Block';
  $bean_type->options = '';
  $bean_type->description = 'This block will have the title in the content.';
  $export['shaded_no_title_block'] = $bean_type;

  return $export;
}