<?php
/**
 * @file
 */

require_once drupal_get_path('module', 'bean') .'/includes/bean.pages.inc';

function bi_block_add() {
  return drupal_get_form('bi_block_form');
}

/**
 * Page callback to select type of the block.
 */
function bi_browser() {
  module_invoke('admin_menu', 'suppress');

  $output = array();

  $output['text'] = drupal_get_form('bi_select_block_type_form');

  $fake_buttons = '<div class="form-actions form-wrapper">';
  $fake_buttons .= l(t('Submit'), '', array('attributes' => array('class' => array('button', 'button-yes', 'fake-submit'))));
  $fake_buttons .= l(t('Cancel'), '', array('attributes' => array('class' => array('button', 'button-no', 'fake-cancel'))));
  $fake_buttons .= '</div>';
  $output['fake_buttons']['#markup'] = $fake_buttons;

  return $output;
}

/**
 * Returns a radios form with all pp-bi block types.
 */
function bi_select_block_type_form($form, &$form_state) {
  $options = array();
  foreach (bean_get_types() as $bean_type) {
    $options[$bean_type->type] = $bean_type->getLabel();
  }
  $form = array();
  $form['block_type'] = array(
    '#type' => 'radios',
    '#required' => TRUE,
    '#title' => t('Block types'),
    '#description' => t('Select type of the block to insert'),
    '#options' => $options,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#submit' => array('bi_select_block_type_form_submit'),
    '#value' => t('Select')
  );
  return $form;
}

function bi_select_block_type_form_submit($form, &$form_state) {
  $form_state['redirect'] = 'bi/block/' . $form_state['values']['block_type'];
}

/**
 * Callback to create or edit block.
 */
function bi_block_page($block_id) {
  module_invoke('admin_menu', 'suppress');

  // $bean_id can be either id (edit operation) or bean type (create new block).
  if (is_int($block_id)) {
    $bean = bean_load($block_id);
  }
  else {
    $bean = bean_create(array('type' => $block_id));
  }

  module_load_include('inc', 'bean', 'includes/bean.pages');
  return drupal_get_form('bean_form', $bean);
}