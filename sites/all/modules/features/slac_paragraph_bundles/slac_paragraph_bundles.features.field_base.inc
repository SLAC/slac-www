<?php
/**
 * @file
 * slac_paragraph_bundles.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function slac_paragraph_bundles_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_align_columns'.
  $field_bases['field_align_columns'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_align_columns',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'columns-center' => 'Center',
        'columns-start' => 'Start',
        'columns-end' => 'End',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_animation'.
  $field_bases['field_animation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_animation',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'fadeIn' => 'Fade In',
        'fadeInLeft' => 'Fade In Left',
        'fadeInLeftBig' => 'Fade in Left Big',
        'fadeInRight' => 'Fade In Right',
        'fadeInRightBig' => 'Fade in Right Big',
        'fadeInUp' => 'Fade In Up',
        'fadeInDown' => 'Fade in Down',
        'fadeInDownBig' => 'Fade in Down Big',
        'rotateIn' => 'Rotate In',
        'rotateInDownLeft' => 'Rotate In Down Left',
        'rotateInDownRight' => 'Rotate In Down Right',
        'rollIn' => 'Roll In',
        'rollOut' => 'Roll Out',
        'slideInUp' => 'Slide In Up',
        'slideInLeft' => 'Slide In Left',
        'slideInRight' => 'Slide In Right',
        'shake' => 'Shake',
        'swing' => 'Swing',
        'tada' => 'Tada',
        'wobble' => 'Wobble',
        'zoomIn' => 'Zoom In',
        'zoomInLeft' => 'Zoom In Left',
        'zoomInRight' => 'Zoom In Right',
        'zoomInUp' => 'Zoom In Up',
        'zoomInDown' => 'Zoom In Down',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_animation_setting'.
  $field_bases['field_animation_setting'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_animation_setting',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'infinite' => 'Infinite',
        'slow' => 'Slow',
        'slower' => 'Slower',
        'fast' => 'Fast',
        'faster' => 'Faster',
        'delay-1s' => 'Delay 1 Second',
        'delay-2s' => 'Delay 2 Seconds',
        'delay-3s' => 'Delay 3 Seconds',
        'delay-4s' => 'Delay 4 Seconds',
        'delay-5s' => 'Delay 5 Seconds',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_background'.
  $field_bases['field_background'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_background',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--color--transparent' => 'Transparent',
        'paragraph--color--transparent-black' => 'Transparent Black',
        'paragraph--color paragraph--color--red' => 'Red',
        'paragraph--color paragraph--color--light-grey' => 'LIght Grey',
        'paragraph--color paragraph--color--dark-grey' => 'Dark Grey',
        'paragraph--color paragraph--color--black' => 'Black',
        'paragraph--color paragraph--color--white' => 'White',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_background_image'.
  $field_bases['field_background_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_background_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_card'.
  $field_bases['field_card'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_card_body'.
  $field_bases['field_card_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_card_image'.
  $field_bases['field_card_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_card_layout'.
  $field_bases['field_card_layout'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_layout',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'card-deck' => 'A set of equal width and height cards that aren’t attached to one another',
        'card-columns' => 'Cards that are organized into Masonry-like columns',
        'card-group' => 'Use card groups to render cards as a single, attached element with equal width and height columns',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_card_title'.
  $field_bases['field_card_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_column_contentp'.
  $field_bases['field_column_contentp'] = array(
    'active' => 1,
    'cardinality' => 6,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_column_contentp',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_column_style'.
  $field_bases['field_column_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_column_style',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--style--75-25' => '75% - 25%',
        'paragraph--style--66-33' => '66% - 33%',
        'paragraph--style--25-75' => '25% - 75%',
        'paragraph--style--33-66' => '33% - 66%',
        'paragraph--style--25-50-25' => '25% - 50% - 25%',
        'paragraph--style--50-25-25' => '50% - 25% - 25%',
        'paragraph--style--25-25-50' => '25% - 25% - 50%',
        'paragraph--style--16-66-16' => '1/6 - 2/3 - 1/6',
        'paragraph--style--66-16-16' => '2/3 - 1/6 - 1/6',
        'paragraph--style--16-16-66' => '1/6 - 1/6 - 2/3',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_column_wrapper_contentp'.
  $field_bases['field_column_wrapper_contentp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_column_wrapper_contentp',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_content'.
  $field_bases['field_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_content_blank'.
  $field_bases['field_content_blank'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_blank',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_icon'.
  $field_bases['field_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_icon',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_invert'.
  $field_bases['field_invert'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_invert',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'invert' => 'Invert',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_offset'.
  $field_bases['field_offset'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_offset',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_overlay'.
  $field_bases['field_overlay'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_overlay',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        9 => '9 - Darkest',
        8 => 8,
        7 => 7,
        6 => 6,
        5 => 5,
        4 => 4,
        3 => 3,
        2 => 2,
        1 => '1 - Lightest',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_padding_bottom'.
  $field_bases['field_padding_bottom'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_padding_bottom',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'padding-bottom--off' => 'Off',
        'padding-bottom--sm' => 'Normal',
        'padding-bottom--md' => 'Medium',
        'padding-bottom--lg' => 'Large',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_padding_top'.
  $field_bases['field_padding_top'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_padding_top',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'padding-top--off' => 'Off',
        'padding-top--sm' => 'Normal',
        'padding-top--md' => 'Medium',
        'padding-top--lg' => 'Large',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_paragraph_width'.
  $field_bases['field_paragraph_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_paragraph_width',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--width--tiny' => 'Tiny',
        'paragraph--width--narrow' => 'Narrow',
        'paragraph--width--medium' => 'Medium',
        'paragraph--width--wide' => 'Wide',
        'paragraph--width--full' => 'Full Screen',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_parallax'.
  $field_bases['field_parallax'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_parallax',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        6 => 'Slowest',
        5 => 'Slower',
        4 => 'Slow',
        3 => 'Fast',
        2 => 'Faster',
        1 => 'Fastest',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_pimage'.
  $field_bases['field_pimage'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pimage',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_pvideo'.
  $field_bases['field_pvideo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pvideo',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'media',
  );

  // Exported field_base: 'field_reverse_order_on_mobile'.
  $field_bases['field_reverse_order_on_mobile'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_reverse_order_on_mobile',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'mobile-reverse' => 'Yes',
        'no-mobile-reverse' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_text'.
  $field_bases['field_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_video_paragraph'.
  $field_bases['field_video_paragraph'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_paragraph',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'media',
  );

  // Exported field_base: 'field_view'.
  $field_bases['field_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_view',
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 0,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'referenceable_tags' => array(
        'allow' => '',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'Grid_Lightbox_Gallery_node:block' => 0,
        'Grid_Lightbox_Gallery_node:default' => 0,
        'admin_views_comment:default' => 0,
        'admin_views_comment:system_1' => 0,
        'admin_views_comment:system_2' => 0,
        'admin_views_file:default' => 0,
        'admin_views_file:system_1' => 0,
        'admin_views_node:default' => 0,
        'admin_views_node:system_1' => 0,
        'admin_views_taxonomy_term:default' => 0,
        'admin_views_taxonomy_term:system_1' => 0,
        'admin_views_user:default' => 0,
        'admin_views_user:system_1' => 0,
        'archive:block' => 0,
        'archive:default' => 0,
        'archive:page' => 0,
        'backlinks:block' => 0,
        'backlinks:default' => 0,
        'backlinks:page' => 0,
        'bean_blocks_overview:admin_page' => 0,
        'bean_blocks_overview:default' => 0,
        'comments_recent:block' => 0,
        'comments_recent:default' => 0,
        'comments_recent:page' => 0,
        'email_top_stories:default' => 0,
        'email_top_stories:panel_pane_2' => 0,
        'feeds_log:default' => 0,
        'feeds_log:page_1' => 0,
        'feeds_log:page_2' => 0,
        'feeds_log:page_3' => 0,
        'fieldable_pane_entities:default' => 0,
        'fieldable_pane_entity_revisions:default' => 0,
        'frontpage:default' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'frontpage_slideshow:default' => 0,
        'frontpage_slideshow:panel_slideshow_pane_1' => 0,
        'glossary:attachment' => 0,
        'glossary:default' => 0,
        'glossary:page' => 0,
        'last_story:block' => 0,
        'last_story:default' => 0,
        'last_story:panel_pane_1' => 0,
        'last_story:panel_pane_2' => 0,
        'lectures_gallery:default' => 0,
        'lectures_gallery:panel_pane_1' => 0,
        'lectures_list:default' => 0,
        'lectures_list:feed_1' => 0,
        'mailchimp_campaigns:default' => 0,
        'mailchimp_campaigns:main' => 0,
        'media_default:default' => 0,
        'media_default:media_browser_1' => 0,
        'media_default:media_browser_my_files' => 0,
        'news_center:block_1' => 0,
        'news_center:default' => 0,
        'news_center:panel_pane_1' => 0,
        'news_center:panel_pane_2' => 0,
        'news_center:panel_pane_3' => 0,
        'news_center:panel_pane_5' => 0,
        'news_rss_feed:default' => 0,
        'news_rss_feed:feed_1' => 0,
        'next_lecture:default' => 0,
        'next_lecture:feed_1' => 0,
        'next_lecture:panel_pane_1' => 0,
        'nodequeue_1:block' => 0,
        'nodequeue_1:default' => 0,
        'nodequeue_1:page' => 0,
        'nodequeue_2:block' => 0,
        'nodequeue_2:default' => 0,
        'nodequeue_2:page' => 0,
        'redirects:default' => 0,
        'redirects:page_admin' => 0,
        'redirects:page_user' => 0,
        'slac_in_the_news:default' => 0,
        'slac_in_the_news:page_1' => 0,
        'slac_in_the_news:page_2' => 0,
        'slac_in_the_news:panel_pane_1' => 0,
        'slac_lectures:default' => 0,
        'slac_lectures:panel_pane_1' => 0,
        'slac_lectures:panel_pane_2' => 0,
        'slac_lectures:panel_pane_3' => 0,
        'slac_taxonomy_term:default' => 0,
        'slac_taxonomy_term:feed' => 0,
        'slac_taxonomy_term:page' => 0,
        'taxonomy_term:default' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'test_last_story:block' => 0,
        'test_last_story:default' => 0,
        'test_last_story:panel_pane_1' => 0,
        'test_last_story:panel_pane_2' => 0,
        'tracker:default' => 0,
        'tracker:page' => 0,
        'vbo:default' => 0,
        'vbo:page' => 0,
        'webform_analysis:default' => 0,
        'webform_results:default' => 0,
        'webform_submissions:default' => 0,
        'webform_webforms:default' => 0,
        'workbench_current_user:block_1' => 0,
        'workbench_current_user:default' => 0,
        'workbench_edited:block_1' => 0,
        'workbench_edited:default' => 0,
        'workbench_edited:page_1' => 0,
        'workbench_moderation:default' => 0,
        'workbench_moderation:drafts_page' => 0,
        'workbench_moderation:needs_review_page' => 0,
        'workbench_recent_content:block_1' => 0,
        'workbench_recent_content:default' => 0,
        'workbench_recent_content:page_1' => 0,
      ),
      'skip_default' => 1,
      'skip_disabled' => 0,
      'skip_empty' => 0,
      'sort_views' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  // Exported field_base: 'field_width'.
  $field_bases['field_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_width',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'large' => 'Large Width',
        'full' => 'Full Width',
        'pull-left pull-left-portrait' => 'Pull Left Portrait',
        'pull-right pull-right-portrait' => 'Pull Right Portrait',
        'pull-left pull-left-narrow' => 'Pull Left Narrow',
        'pull-right pull-right-narrow' => 'Pull Right Narrow',
        'pull-left pull-left-wide' => 'Pull Left Wide',
        'pull-right pull-right-wide' => 'Pull Right Wide',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_xeno_content'.
  $field_bases['field_xeno_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_xeno_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_zoom'.
  $field_bases['field_zoom'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_zoom',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        6 => 'Slowest',
        5 => 'Slower',
        4 => 'Slow',
        3 => 'Fast',
        2 => 'Faster',
        1 => 'Fastest',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
