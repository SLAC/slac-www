<?php
/**
 * @file
 * slac_migrate_pages.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function slac_migrate_pages_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_0-truncate_text';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '255',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['topic_details_importer-xpathparser_0-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_2-explode';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '%s',
    'limit' => '',
    'real_separator' => ' ',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Explode';
  $export['topic_details_importer-xpathparser_2-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_2-find_replace';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '     ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['topic_details_importer-xpathparser_2-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_2-find_replace_comma';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ', ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace';
  $export['topic_details_importer-xpathparser_2-find_replace_comma'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_2-trim';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['topic_details_importer-xpathparser_2-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<content><content-block><shaded-background>yes</shaded-background>',
    'replace' => '<div class="content-block shaded-background">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Find replace content block shaded bg';
  $export['topic_details_importer-xpathparser_4-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_4';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<content-block>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Find replace content block';
  $export['topic_details_importer-xpathparser_4-find_replace_4'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_5';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '</content-block>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'Find replace content block close';
  $export['topic_details_importer-xpathparser_4-find_replace_5'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_banner_graphic';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<banner-graphic>',
    'replace' => '<div class="introduction-banner-graphic>',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 19;
  $feeds_tamper->description = 'Find replace banner graphic';
  $export['topic_details_importer-xpathparser_4-find_replace_banner_graphic'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_body';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<body>',
    'replace' => '<div class="content-block-body">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 14;
  $feeds_tamper->description = 'Find replace block body';
  $export['topic_details_importer-xpathparser_4-find_replace_body'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_cb';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<content>',
    'replace' => '<div class="content-block-other">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 22;
  $feeds_tamper->description = 'Find replace content';
  $export['topic_details_importer-xpathparser_4-find_replace_cb'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_graphic_block';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<graphic>',
    'replace' => '<div class="content-graphic-block">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 20;
  $feeds_tamper->description = 'Find replace graphic block';
  $export['topic_details_importer-xpathparser_4-find_replace_graphic_block'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_heading';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<heading>',
    'replace' => '<div class="content-block-heading">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 15;
  $feeds_tamper->description = 'Find replace heading';
  $export['topic_details_importer-xpathparser_4-find_replace_heading'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_intro_paragraph';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<intro-paragraph>',
    'replace' => '<div class="intro-paragraph">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace intro paragraph';
  $export['topic_details_importer-xpathparser_4-find_replace_intro_paragraph'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_introduction';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<introduction>',
    'replace' => '<div class="introduction-block">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace introduction';
  $export['topic_details_importer-xpathparser_4-find_replace_introduction'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_more_link';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<more-link>',
    'replace' => '<div class="content-more-link">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 21;
  $feeds_tamper->description = 'Find replace more link';
  $export['topic_details_importer-xpathparser_4-find_replace_more_link'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_no_bg';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<content><content-block><shaded-background>no</shaded-background>',
    'replace' => '<div class="content-block">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Find replace content block no shaded bg';
  $export['topic_details_importer-xpathparser_4-find_replace_no_bg'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_page_body';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<page-body>',
    'replace' => '<div class=page-body-block>',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace page-body';
  $export['topic_details_importer-xpathparser_4-find_replace_page_body'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_page_body_close';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '</page-body>',
    'replace' => '</div>',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Find replace page body';
  $export['topic_details_importer-xpathparser_4-find_replace_page_body_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_page_heading';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<page-heading>',
    'replace' => '<h1>',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace page heading';
  $export['topic_details_importer-xpathparser_4-find_replace_page_heading'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_page_heading_close';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '</page-heading>',
    'replace' => '</h1>',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace page heading close';
  $export['topic_details_importer-xpathparser_4-find_replace_page_heading_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_regex';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '(</?/body>|</?/heading>|</?/introduction>|</?/content>|</?/intro-paragraph>|</?/graphic>|</?/more-link>|</?/summary-block>)',
    'replace' => '</div>',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 16;
  $feeds_tamper->description = 'Find replace REGEX close div';
  $export['topic_details_importer-xpathparser_4-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_regex_div_2';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '(</?/banner-graphic>)',
    'replace' => '</div>',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 17;
  $feeds_tamper->description = 'Find replace REGEX close div 2';
  $export['topic_details_importer-xpathparser_4-find_replace_regex_div_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_regex_rm_tags';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '(</?short-name>|</?/short-name>|</?long-name>|</?/long-name>)',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 18;
  $feeds_tamper->description = 'Find replace REGEX remove tags';
  $export['topic_details_importer-xpathparser_4-find_replace_regex_rm_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_summary_shade';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<summary-block><shaded-background>yes</shaded-background>',
    'replace' => '<div class="content-summary-block shaded-background">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Find replace content summary shaded bg';
  $export['topic_details_importer-xpathparser_4-find_replace_summary_shade'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-find_replace_summary_shade_no';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<summary-block><shaded-background>no</shaded-background>',
    'replace' => '<div class="content-summary-block">',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Find replace content summary no shaded bg';
  $export['topic_details_importer-xpathparser_4-find_replace_summary_shade_no'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_4-html_entity_decode';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 23;
  $feeds_tamper->description = 'HTML entity decode';
  $export['topic_details_importer-xpathparser_4-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_details_importer-xpathparser_5-rewrite';
  $feeds_tamper->importer = 'topic_details_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'http://www6.slac.stanford.edu[xpathparser:5]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['topic_details_importer-xpathparser_5-rewrite'] = $feeds_tamper;

  return $export;
}
