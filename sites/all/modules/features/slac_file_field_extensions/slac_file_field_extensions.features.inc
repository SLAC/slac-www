<?php
/**
 * @file
 * slac_file_field_extensions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_file_field_extensions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
