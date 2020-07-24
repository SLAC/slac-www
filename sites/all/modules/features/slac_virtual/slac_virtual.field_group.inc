<?php
/**
 * @file
 * slac_virtual.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function slac_virtual_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_content|node|paragraph_layout_page|form';
  $field_group->group_name = 'group_body_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paragraph_layout_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Body Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_structured_content',
      1 => 'field_header_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-body-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_body_content|node|paragraph_layout_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|bean|grouped_content_as_cards|form';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'grouped_content_as_cards';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '3',
    'children' => array(
      0 => 'field_card_item',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-card-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_card_content|bean|grouped_content_as_cards|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|bean|grouped_content_as_cards|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'grouped_content_as_cards';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '2',
    'children' => array(
      0 => 'group_card_content',
      1 => 'group_style',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-content field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|bean|grouped_content_as_cards|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|paragraph_layout_page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paragraph_layout_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
    'children' => array(
      0 => 'group_body_content',
      1 => 'group_photos',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-content field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|node|paragraph_layout_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photos|node|paragraph_layout_page|form';
  $field_group->group_name = 'group_photos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paragraph_layout_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Photo Gallery',
    'weight' => '6',
    'children' => array(
      0 => 'field_image_for_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-photos field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_photos|node|paragraph_layout_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_style|bean|grouped_content_as_cards|form';
  $field_group->group_name = 'group_style';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'grouped_content_as_cards';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Style',
    'weight' => '4',
    'children' => array(
      0 => 'field_card_layout',
      1 => 'field_paragraph_width',
      2 => 'field_padding_top',
      3 => 'field_padding_bottom',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-style field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_style|bean|grouped_content_as_cards|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Body Content');
  t('Card');
  t('Card Content');
  t('Content');
  t('Photo Gallery');
  t('Style');

  return $field_groups;
}
