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

  // Exported field_instance: 'bean-grouped_content_as_cards-field_card_item'.
  $field_instances['bean-grouped_content_as_cards-field_card_item'] = array(
    'bundle' => 'grouped_content_as_cards',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_card_item',
    'label' => 'Card Item',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'blank' => -1,
        'block' => -1,
        'blockquote' => -1,
        'card' => 'card',
        'card_wrapper' => -1,
        'column_wrapper' => -1,
        'columns' => -1,
        'hero' => -1,
        'image' => -1,
        'image_bootstrap' => -1,
        'simple' => -1,
        'simple_bootstrap' => -1,
        'timeline' => -1,
        'timeline_bundler' => -1,
        'video' => -1,
        'video_bootstrap' => -1,
        'view' => -1,
      ),
      'bundle_weights' => array(
        'blank' => 2,
        'block' => 3,
        'blockquote' => 4,
        'card' => 5,
        'card_wrapper' => 6,
        'column_wrapper' => 8,
        'columns' => 7,
        'hero' => 9,
        'image' => 10,
        'image_bootstrap' => 11,
        'simple' => 12,
        'simple_bootstrap' => 13,
        'timeline' => 14,
        'timeline_bundler' => 15,
        'video' => 16,
        'video_bootstrap' => 17,
        'view' => 18,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-grouped_content_as_cards-field_card_layout'.
  $field_instances['bean-grouped_content_as_cards-field_card_layout'] = array(
    'bundle' => 'grouped_content_as_cards',
    'default_value' => array(
      0 => array(
        'value' => 'card-deck',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_card_layout',
    'label' => 'Card Layout',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'bean-grouped_content_as_cards-field_padding_bottom'.
  $field_instances['bean-grouped_content_as_cards-field_padding_bottom'] = array(
    'bundle' => 'grouped_content_as_cards',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_padding_bottom',
    'label' => 'Padding Bottom',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'bean-grouped_content_as_cards-field_padding_top'.
  $field_instances['bean-grouped_content_as_cards-field_padding_top'] = array(
    'bundle' => 'grouped_content_as_cards',
    'default_value' => array(
      0 => array(
        'value' => 'padding-top--sm',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_padding_top',
    'label' => 'Padding Top',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'bean-grouped_content_as_cards-field_paragraph_width'.
  $field_instances['bean-grouped_content_as_cards-field_paragraph_width'] = array(
    'bundle' => 'grouped_content_as_cards',
    'default_value' => array(
      0 => array(
        'value' => 'paragraph--width--wide',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_paragraph_width',
    'label' => 'Paragraph Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-paragraph_layout_page-field_header_image'.
  $field_instances['node-paragraph_layout_page-field_header_image'] = array(
    'bundle' => 'paragraph_layout_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
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
    'field_name' => 'field_header_image',
    'label' => 'Header Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'epsacrop' => array(
        'styles' => array(
          'crop_landscape' => 0,
          'crop_portrait' => 0,
          'crop_square' => 0,
          'ecrop_frontpage_carousel' => 0,
          'ecrop_frontpage_headlines' => 0,
          'ecrop_frontpage_headlines_small' => 0,
          'ecrop_igp' => 0,
          'ecrop_news_center' => 0,
          'frontpage-headline' => 0,
          'lightbox_text_bottom' => 0,
          'lightbox_text_left_right' => 0,
          'news_thumbnail_headlines_center' => 0,
        ),
      ),
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-paragraph_layout_page-field_image_for_gallery'.
  $field_instances['node-paragraph_layout_page-field_image_for_gallery'] = array(
    'bundle' => 'paragraph_layout_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
    'field_name' => 'field_image_for_gallery',
    'label' => 'Image for Gallery',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'epsacrop' => array(
        'styles' => array(
          'crop_landscape' => 0,
          'crop_portrait' => 0,
          'crop_square' => 0,
          'ecrop_frontpage_carousel' => 0,
          'ecrop_frontpage_headlines' => 0,
          'ecrop_frontpage_headlines_small' => 0,
          'ecrop_igp' => 0,
          'ecrop_news_center' => 0,
          'frontpage-headline' => 0,
          'lightbox_text_bottom' => 0,
          'lightbox_text_left_right' => 0,
          'news_thumbnail_headlines_center' => 0,
        ),
      ),
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

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
        'blank' => -1,
        'block' => -1,
        'block_cards' => 'block_cards',
        'blockquote' => -1,
        'card' => -1,
        'card_wrapper' => 'card_wrapper',
        'column_wrapper' => -1,
        'columns' => 'columns',
        'hero' => 'hero',
        'image' => -1,
        'image_bootstrap' => 'image_bootstrap',
        'simple' => -1,
        'simple_bootstrap' => 'simple_bootstrap',
        'timeline' => -1,
        'timeline_bundler' => 'timeline_bundler',
        'video' => -1,
        'video_bootstrap' => 'video_bootstrap',
        'view' => 'view',
      ),
      'bundle_weights' => array(
        'blank' => -19,
        'block' => -26,
        'block_cards' => -29,
        'blockquote' => -25,
        'card' => -21,
        'card_wrapper' => -30,
        'column_wrapper' => -20,
        'columns' => -32,
        'hero' => -31,
        'image' => -24,
        'image_bootstrap' => -34,
        'simple' => -23,
        'simple_bootstrap' => -35,
        'timeline' => -36,
        'timeline_bundler' => -28,
        'video' => -22,
        'video_bootstrap' => -33,
        'view' => -27,
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
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Card Item');
  t('Card Layout');
  t('Header Image');
  t('Image for Gallery');
  t('Padding Bottom');
  t('Padding Top');
  t('Paragraph Width');
  t('Structured Content');

  return $field_instances;
}
