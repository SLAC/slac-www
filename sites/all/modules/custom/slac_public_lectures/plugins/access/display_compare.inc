<?php

/**
 * Plugins are described by creating a $plugin array which will
 * be used by the system that includes the file.
 */
$plugin = array(
  'title' => t('Enable scheduled lecture'),
  'description' => t('Controls access by public_lecture_display value'),
  'callback' => 'slac_public_lecture_public_lecture_display_ctools_access_check',
  'default' => array('field_age_value' => 0),
  'summary' => 'slac_public_lecture_public_lecture_display_ctools_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Custom callback defined by 'callback' in the $plugin array.
 *
 * Check for access.
 */
function slac_public_lecture_public_lecture_display_ctools_access_check($conf, $context) {
  // If for some unknown reason that $context isn't set, we just want to be sure.
  if (variable_get('public_lecture_display', 0)) {
    return TRUE;
  }

  return FALSE;
}

/**
 * Provide a summary description.
 */
function slac_public_lecture_public_lecture_display_ctools_summary($conf, $context) {
  return t('Compare if field diplsay is checked.');
}
