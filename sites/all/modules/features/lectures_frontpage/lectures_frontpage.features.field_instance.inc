<?php
/**
 * @file
 * lectures_frontpage.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lectures_frontpage_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-scheduled_lecture-field_fpp_sched_lect_body'
  $field_instances['fieldable_panels_pane-scheduled_lecture-field_fpp_sched_lect_body'] = array(
    'bundle' => 'scheduled_lecture',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use [lecture-available-phrase] as placeholder for the phrase about next lecture.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fpp_sched_lect_body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-scheduled_lecture-field_fpp_sched_lect_date'
  $field_instances['fieldable_panels_pane-scheduled_lecture-field_fpp_sched_lect_date'] = array(
    'bundle' => 'scheduled_lecture',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fpp_sched_lect_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-scheduled_lecture-field_fpp_sched_lect_dateav_text'
  $field_instances['fieldable_panels_pane-scheduled_lecture-field_fpp_sched_lect_dateav_text'] = array(
    'bundle' => 'scheduled_lecture',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use [lecture-date] as placeholder for the date of the next lecture.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fpp_sched_lect_dateav_text',
    'label' => 'Phrase when lecture date is known',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-scheduled_lecture-field_fpp_sched_lect_nodate_text'
  $field_instances['fieldable_panels_pane-scheduled_lecture-field_fpp_sched_lect_nodate_text'] = array(
    'bundle' => 'scheduled_lecture',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fpp_sched_lect_nodate_text',
    'label' => 'Phrase when lecture date is not known',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Date');
  t('Phrase when lecture date is known');
  t('Phrase when lecture date is not known');
  t('Use [lecture-available-phrase] as placeholder for the phrase about next lecture.');
  t('Use [lecture-date] as placeholder for the date of the next lecture.');

  return $field_instances;
}
