<?php
/**
 * @file
 * slac_misc_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_misc_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
