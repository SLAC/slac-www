<?php
/**
 * @file
 * slac_paragraph_bundles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function slac_paragraph_bundles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_layout|paragraphs_item|card_wrapper|form';
  $field_group->group_name = 'group_card_layout';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'card_wrapper';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View Card Layout',
    'weight' => '1',
    'children' => array(
      0 => 'group_content',
      1 => 'group_style',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-card-layout field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_card_layout|paragraphs_item|card_wrapper|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_columns|paragraphs_item|columns|form';
  $field_group->group_name = 'group_columns';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columns',
    'weight' => '1',
    'children' => array(
      0 => 'group_content',
      1 => 'group_style',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-columns field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_columns|paragraphs_item|columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|card_wrapper|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'card_wrapper';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_card_layout';
  $field_group->data = array(
    'label' => 'Card Group Content',
    'weight' => '11',
    'children' => array(
      0 => 'field_card_layout',
      1 => 'field_card',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Card Group Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-content field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_content|paragraphs_item|card_wrapper|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|columns|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Column Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_column_contentp',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|simple_bootstrap|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'simple_bootstrap';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_simple';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|simple_bootstrap|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|video_bootstrap|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'video_bootstrap';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content layout',
    'weight' => '1',
    'children' => array(
      0 => 'group_video',
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
  $field_groups['group_content|paragraphs_item|video_bootstrap|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|view|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'view';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_view',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|view|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph|paragraphs_item|view|form';
  $field_group->group_name = 'group_paragraph';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'view';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'View Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_content',
      1 => 'group_style',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-paragraph field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph|paragraphs_item|view|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_simple|paragraphs_item|simple_bootstrap|form';
  $field_group->group_name = 'group_simple';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'simple_bootstrap';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Simple Paragraph',
    'weight' => '1',
    'children' => array(
      0 => 'group_content',
      1 => 'group_style',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-simple field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_simple|paragraphs_item|simple_bootstrap|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_style|paragraphs_item|card_wrapper|form';
  $field_group->group_name = 'group_style';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'card_wrapper';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_card_layout';
  $field_group->data = array(
    'label' => 'Style',
    'weight' => '12',
    'children' => array(
      0 => 'field_animation',
      1 => 'field_background',
      2 => 'field_paragraph_width',
      3 => 'field_padding_top',
      4 => 'field_animation_setting',
      5 => 'field_padding_bottom',
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
  $field_groups['group_style|paragraphs_item|card_wrapper|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_style|paragraphs_item|columns|form';
  $field_group->group_name = 'group_style';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_align_columns',
      1 => 'field_animation',
      2 => 'field_animation_setting',
      3 => 'field_background',
      4 => 'field_column_style',
      5 => 'field_padding_top',
      6 => 'field_padding_bottom',
      7 => 'field_reverse_order_on_mobile',
      8 => 'field_paragraph_width',
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
  $field_groups['group_style|paragraphs_item|columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_style|paragraphs_item|simple_bootstrap|form';
  $field_group->group_name = 'group_style';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'simple_bootstrap';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_simple';
  $field_group->data = array(
    'label' => 'Style',
    'weight' => '5',
    'children' => array(
      0 => 'field_paragraph_width',
      1 => 'field_background',
      2 => 'field_padding_top',
      3 => 'field_padding_bottom',
      4 => 'field_animation',
      5 => 'field_animation_setting',
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
  $field_groups['group_style|paragraphs_item|simple_bootstrap|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_style|paragraphs_item|video_bootstrap|form';
  $field_group->group_name = 'group_style';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'video_bootstrap';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Style',
    'weight' => '3',
    'children' => array(
      0 => 'field_padding_bottom',
      1 => 'field_padding_top',
      2 => 'field_background',
      3 => 'field_paragraph_width',
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
  $field_groups['group_style|paragraphs_item|video_bootstrap|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_style|paragraphs_item|view|form';
  $field_group->group_name = 'group_style';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'view';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paragraph';
  $field_group->data = array(
    'label' => 'Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_padding_top',
      1 => 'field_paragraph_width',
      2 => 'field_background',
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
  $field_groups['group_style|paragraphs_item|view|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|paragraphs_item|video_bootstrap|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'video_bootstrap';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Video Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_video_paragraph',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_video|paragraphs_item|video_bootstrap|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Card Group Content');
  t('Column Content');
  t('Columns');
  t('Content');
  t('Content layout');
  t('Simple Paragraph');
  t('Style');
  t('Video Content');
  t('View Card Layout');
  t('View Paragraph');

  return $field_groups;
}
