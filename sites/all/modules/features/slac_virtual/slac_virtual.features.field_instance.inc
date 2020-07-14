<?php
/**
 * @file
 * slac_virtual.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slac_virtual_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-paragraph_layout_page-field_structured_content'.
  $field_instances['node-paragraph_layout_page-field_structured_content'] = array(
    'bundle' => 'paragraph_layout_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'email_main_story' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_side_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_top_story' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'news_center' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_structured_content',
    'label' => 'Structured Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'block' => -1,
        'blockquote' => -1,
        'card' => -1,
        'card_wrapper' => 'card_wrapper',
        'column_wrapper' => 'column_wrapper',
        'columns' => 'columns',
        'hero' => 'hero',
        'image' => -1,
        'image_bootstrap' => 'image_bootstrap',
        'simple' => -1,
        'simple_bootstrap' => 'simple_bootstrap',
        'video' => 'video',
        'view' => 'view',
      ),
      'bundle_weights' => array(
        'block' => 2,
        'blockquote' => 3,
        'card' => 13,
        'card_wrapper' => 14,
        'column_wrapper' => 16,
        'columns' => 4,
        'hero' => 17,
        'image' => 5,
        'image_bootstrap' => 6,
        'simple' => 7,
        'simple_bootstrap' => 8,
        'video' => 9,
        'view' => 23,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Structured Content');

  return $field_instances;
}
