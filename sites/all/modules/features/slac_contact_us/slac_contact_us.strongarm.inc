<?php
/**
 * @file
 * slac_contact_us.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_contact_us_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_webform_client_form_3457';
  $strongarm->value = 1;
  $export['botcha_enabled_webform_client_form_3457'] = $strongarm;

  return $export;
}
