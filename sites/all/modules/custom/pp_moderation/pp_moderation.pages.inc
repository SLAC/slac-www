<?php

/**
 * Create Draft page callback.
 */
function pp_moderation_create_draft_page_callback($node) {
  module_load_include('inc', 'node', 'node.pages');

  // Setup form_state
  $form_state = array();
  $form_state['values'] = (array) $node;
  $form_state['values']['op'] = t('Save');

  drupal_form_submit($node->type . '_node_form', $form_state, $node);

  drupal_set_message(t('Draft has been created.'));
  drupal_goto('node/' . $node->nid . '/draft');
}