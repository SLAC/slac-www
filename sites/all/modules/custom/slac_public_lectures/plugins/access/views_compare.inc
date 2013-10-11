<?php

/**
 * Plugins are described by creating a $plugin array which will
 * be used by the system that includes the file.
 */
$plugin = array(
  'title' => t('Next public lecture'),
  'description' => t('return TRUE if exist next public lecture node'),
  'callback' => 'slac_public_lecture_views_compare_ctools_access_check',
  'summary' => 'slac_public_lecture_views_compare_ctools_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Custom callback defined by 'callback' in the $plugin array.
 *
 * Check for access.
 */
function slac_public_lecture_views_compare_ctools_access_check($conf, $context) {
  // If for some unknown reason that $context isn't set, we just want to be sure.
  $view = views_get_view_result('next_lecture', 'block');
  $result = count($view);
  if ($result) {
    return TRUE;
  }
  return FALSE;
}

/**
 * Provide a summary description.
 */
function slac_public_lecture_views_compare_ctools_summary($conf, $context) {
  return t('Check if exist next public lecture node.');
}
