<?php
/**
 * @file
 * slac_file_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_file_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}
