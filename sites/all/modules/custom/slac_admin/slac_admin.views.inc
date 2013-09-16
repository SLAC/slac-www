<?php

/**
 * Implements hook_views_data_alter().
 */
function slac_admin_views_data_alter(&$data) {
  $data['lightbox2']['lightbox2']['field']['handler'] = 'slac_admin_lightbox2_handler_field_lightbox2';
}
