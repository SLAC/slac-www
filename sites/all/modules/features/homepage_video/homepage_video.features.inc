<?php
/**
 * @file
 * homepage_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
}
