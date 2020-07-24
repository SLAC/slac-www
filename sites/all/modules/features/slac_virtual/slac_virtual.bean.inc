<?php
/**
 * @file
 * slac_virtual.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function slac_virtual_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'grouped_content_as_cards';
  $bean_type->label = 'Grouped Content as Cards';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['grouped_content_as_cards'] = $bean_type;

  return $export;
}
