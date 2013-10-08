<?php
/**
 * @file
 */

require_once drupal_get_path('module', 'bean') .'/includes/bean.pages.inc';

function pp_bi_block_add() {
  return drupal_get_form('pp_bi_block_form');
}



/**
 * Returns a radios form with all pp-bi block types.
 */
function pp_bi_block_form($form, &$form_state) {
  $options = array();
  foreach (bean_get_types() as $bean_type) {
    $options[$bean_type->type] = $bean_type->getLabel();
  }
  $form = array();
  $form['block_types'] = array(
    '#type' => 'radios',
    '#required' => TRUE,
    '#title' => t('Block types'),
    '#options' => $options
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#submit' => array('pp_bi_block_form_submit'),
    '#value' => t('Select')
  );
  return $form;
}

function pp_bi_block_form_submit($form, &$form_state) {
  //$form_state['redirect'] = 'block/add/' . $form_state['values']['block_types'] . '/nojs';
}

/**
 * Page Callback - Modal: Add Block
 */
function pp_bi_block_page_add($type, $js = FALSE) {
  // Fall back if $js is not set.
  /*if (!$js) {
    return drupal_goto('block/add/' . str_replace('_', '-', $type));
  }*/

  $bean = bean_create(array('type' => $type));

  return drupal_get_form('form_bean', $bean);
}