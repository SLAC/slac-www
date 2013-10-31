<?php
/**
 * @file
 * slac_linkit_profiles.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function slac_linkit_profiles_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'author';
  $linkit_profile->admin_title = 'Search link for wysiwyg';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'full_html' => 'full_html',
      'filtered_html' => 0,
      'plain_text' => 0,
      'mailchimp_campaign' => 0,
    ),
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:fieldable_panels_pane' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:mailchimp_list' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:field_collection_item' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:mailchimp_campaign' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'block_with_brochures' => 'block_with_brochures',
        'content_block' => 'content_block',
      ),
      'group_by_bundle' => 1,
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_page' => 0,
        'comment_node_grid_lightbox_gallery' => 0,
        'comment_node_in_the_news' => 0,
        'comment_node_lecture' => 0,
        'comment_node_news_article' => 0,
        'comment_node_webform' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:fieldable_panels_pane' => array(
      'result_description' => '',
      'bundles' => array(
        'fieldable_panels_pane' => 0,
        'slideshow_text_bottom' => 0,
        'slideshow_text_left_right' => 0,
        'are_you_block' => 0,
        'events' => 0,
        'scheduled_lecture' => 0,
        'related_links' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:field_collection_item' => array(
      'result_description' => '',
      'bundles' => array(
        'field_media_collection' => 0,
        'field_slideshow_btmtxt_slide' => 0,
        'field_slideshow_txtlr_slide' => 0,
        'field_block_bb_brochures' => 0,
        'field_block_bb_content' => 0,
        'field_block_itl_content' => 0,
        'field_block_no_title' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:mailchimp_campaign' => array(
      'result_description' => '',
    ),
    'entity:mailchimp_list' => array(
      'result_description' => '',
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'page' => 'page',
        'in_the_news' => 'in_the_news',
        'lecture' => 'lecture',
        'news_article' => 'news_article',
        'grid_lightbox_gallery' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'video' => 0,
        'image' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'article_type' => 0,
        'news_article_source' => 0,
        'page_keywords' => 0,
        'tags' => 0,
        'categories' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'title' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['author'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'author_for_field';
  $linkit_profile->admin_title = 'Search link for fields';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:fieldable_panels_pane' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:mailchimp_list' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:field_collection_item' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:mailchimp_campaign' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'block_with_brochures' => 0,
        'content_block' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_page' => 0,
        'comment_node_grid_lightbox_gallery' => 0,
        'comment_node_in_the_news' => 0,
        'comment_node_lecture' => 0,
        'comment_node_news_article' => 0,
        'comment_node_webform' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:fieldable_panels_pane' => array(
      'result_description' => '',
      'bundles' => array(
        'fieldable_panels_pane' => 0,
        'slideshow_text_bottom' => 0,
        'slideshow_text_left_right' => 0,
        'are_you_block' => 0,
        'events' => 0,
        'scheduled_lecture' => 0,
        'related_links' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:field_collection_item' => array(
      'result_description' => '',
      'bundles' => array(
        'field_media_collection' => 0,
        'field_slideshow_btmtxt_slide' => 0,
        'field_slideshow_txtlr_slide' => 0,
        'field_block_bb_brochures' => 0,
        'field_block_bb_content' => 0,
        'field_block_itl_content' => 0,
        'field_block_no_title' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:mailchimp_campaign' => array(
      'result_description' => '',
    ),
    'entity:mailchimp_list' => array(
      'result_description' => '',
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'page' => 0,
        'grid_lightbox_gallery' => 0,
        'in_the_news' => 0,
        'lecture' => 0,
        'news_article' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'video' => 0,
        'image' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'article_type' => 0,
        'news_article_source' => 0,
        'page_keywords' => 0,
        'tags' => 0,
        'categories' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['author_for_field'] = $linkit_profile;

  return $export;
}
