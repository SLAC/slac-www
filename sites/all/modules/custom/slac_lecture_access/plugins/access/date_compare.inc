<?php

/**
 * Plugins are described by creating a $plugin array which will
 * be used by the system that includes the file.
 */
$plugin = array(
  'title' => t('Node: Field Lecture Date'),
  'description' => t('Controls access by field_lecture_date value'),
  'callback' => 'slac_lecture_access_field_lecture_date_value_ctools_access_check',
  'default' => array('field_age_value' => 0),
  'summary' => 'slac_lecture_access_field_lecture_date_value_ctools_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Custom callback defined by 'callback' in the $plugin array.
 *
 * Check for access.
 */
function slac_lecture_access_field_lecture_date_value_ctools_access_check($conf, $context) {
  // If for some unknown reason that $context isn't set, we just want to be sure.
  if (empty($context) || empty($context->data) || empty($context->data->field_lecture_date)) {
    return FALSE;
  }

  if (isset($context->data->field_lecture_date[LANGUAGE_NONE][0]['value'])) {
    $date = $context->data->field_lecture_date[LANGUAGE_NONE][0]['value'];
    if (strtotime($date) > time()) {
      return TRUE;
    }
  }

  return FALSE;
}


/**
 * Provide a summary description.
 */
function slac_lecture_access_field_lecture_date_value_ctools_summary($conf, $context) {
  return t('Compare if date in field_lecture_date is greather than current date.');
}
