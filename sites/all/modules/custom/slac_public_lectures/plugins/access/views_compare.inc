<?php

/**
 * Plugins are described by creating a $plugin array which will
 * be used by the system that includes the file.
 */
$plugin = array(
  'title' => t('Next public lecture is available'),
  'description' => t('return TRUE if exist next public lecture node'),
  'callback' => 'slac_public_lecture_views_compare_ctools_access_check',
  'summary' => 'slac_public_lecture_views_compare_ctools_summary',
);

/**
 * Custom callback defined by 'callback' in the $plugin array.
 *
 * Check for access.
 */
function slac_public_lecture_views_compare_ctools_access_check($conf, $context) {
  $result = views_get_view_result('next_lecture');
  return count($result) > 0;
}

/**
 * Provide a summary description.
 */
function slac_public_lecture_views_compare_ctools_summary($conf, $context) {
  return t('Public lecture node is available.');
}
