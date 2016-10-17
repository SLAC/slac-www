<?php
/**
 * @file
 * slac_related_links_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_related_links_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
