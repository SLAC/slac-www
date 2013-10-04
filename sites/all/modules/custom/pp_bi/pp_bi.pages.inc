<?php
/**
 * @file
 */

require_once drupal_get_path('module', 'bean') .'/includes/bean.pages.inc';

function pp_bi_block_add($type, $js = FALSE, $force_page_reload = FALSE) {
  $options = array();
  foreach (bean_get_types() as $bean_type) {
    $options[$bean_type->type] = $bean_type->getLabel();
  }
  print_r($options);
  $form = array();
  $form['block_types'] = array(
    '#type' => 'radios',
    '#title' => t('Block types'),
    '#options' => $options
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Select')
  );
  return $form;
}



/**
 * Page Callback - Modal: Add Block
 */
function pp_bi_block_page_add($type, $js = FALSE, $force_page_reload = FALSE) {
  // Fall back if $js is not set.
  if (!$js) {
    return drupal_goto('block/add/' . str_replace('_', '-', $type));
  }

  $types = bean_get_types();
  $bean = bean_create(array('type' => $type));

  $title = t('Create @name', array('@name' => $types[$type]->getLabel()));

  pp_bi_block_form($bean, $title, $force_page_reload);
}

/**
 * Build the Modal Form.
 */
function pp_bi_block_form($bean, $title, $force_page_reload = FALSE) {
  $commands = array();

  ctools_include('modal');
  ctools_include('ajax');
  ctools_modal_add_js();

  $form_state = array(
    'title' => $title,
    'ajax'  => TRUE,
    'build_info' => array(
      'args'  => array($bean),
      'form_id' => 'bean_form'
    ),
    'bean' => $bean
  );

  $commands = ctools_modal_form_wrapper('bean_form', $form_state);

  if (!empty($form_state['executed']) && empty($form_state['rebuild'])) {

    // overwrite commands.
    $commands = array();

    ctools_add_js('ajax-responder');
    $commands[] = ctools_modal_command_dismiss();
    // if (t('Delete') == $form_state['values']['op']) {
    //   $commands[] = ctools_ajax_command_redirect('modal/node/' . $node->nid . '/delete/ajax/reload');
    // }
    // else
    if ($force_page_reload) {
      $commands[] = ctools_ajax_command_reload();
    }
  }

  // add CSS class to Modal-Frame
  $commands[] = ajax_command_invoke('#modalContent', 'addClass', array('pp-bi-block', 'pp-bi-block-form'));

  print ajax_render($commands);
  exit;
}
