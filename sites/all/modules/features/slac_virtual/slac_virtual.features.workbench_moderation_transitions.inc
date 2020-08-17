<?php
/**
 * @file
 * slac_virtual.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function slac_virtual_workbench_moderation_export_transitions() {
  $items = array(
    'draft:published' => array(
      'from_name' => 'draft',
      'to_name' => 'published',
    ),
  );
  return $items;
}
