<?php
/**
 * @file
 * slac_feedback_webform.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function slac_feedback_webform_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_form_page'
  $field_bases['field_form_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form_page',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'send_us_your_feedback' => 'Send Us Your Feedback',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
