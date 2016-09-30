<?php
/**
 * @file
 * slac_search_option.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_search_option_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
