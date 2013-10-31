<?php
/**
 * @file
 * slac_external_email.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_external_email_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'email_main_story' => array(
        'label' => 'Email main story',
        'custom settings' => 1,
      ),
      'email_top_story' => array(
        'label' => 'Email top story',
        'custom settings' => 1,
      ),
      'email_side_news' => array(
        'label' => 'Email highlights',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
