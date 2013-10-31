<?php
/**
 * @file
 * slac_contact_us.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_contact_us_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Contact Us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '45d13fc4-fe74-43b6-8e6d-ce525b7d9f47',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1382942748,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e185d3c9-12e6-4e8c-bd00-cd3ad55d680e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>You can send us any questions, comments or inquiries that you have by filling out the form below.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '  <p>You can send us any questions, comments or inquiries that you have by filling out the form below.</p>
  ',
        'safe_summary' => '    ',
      ),
    ),
  ),
  'field_form_page' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 3479,
    'confirmation' => '',
    'confirmation_format' => 'full_html',
    'redirect_url' => 'node/3480',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 0,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 0,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 3479,
        'eid' => 1,
        'email' => 'communications@slac.stanford.edu, webteam@slac.stanford.edu',
        'subject' => 'SLAC Website Contact Us Form',
        'from_name' => 1,
        'from_address' => 2,
        'template' => 'Contact Us Topic: [submission:values:topic_of_your_feedback___question]

From: [submission:values:your_name]
Message: [submission:values:your_feedback]

The results of this submission may be viewed at:
[submission:url]',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'extra' => FALSE,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 3479,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'your_name',
        'name' => 'Your Name:',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 3479,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'your_email',
        'name' => 'Your Email:',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
        ),
        'required' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 3479,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'your_organization___affiliation',
        'name' => 'Your Organization / Affiliation:',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 3479,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'topic_of_your_questions_comments_or_inquiries',
        'name' => 'Topic of Your Questions, Comments or Inquiries:',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'career_opportunities|Career Opportunities/Employment
research_collaboration|Research Collaboration
doing_business|Doing Business with SLAC
teachers_students|Teachers and Students
media_inquires|Media Inquiries/Questions
other|Other',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 1,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
        ),
        'required' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 3479,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'your_questions_comments_or_inquiries',
        'name' => 'Your Questions, Comments or Inquiries:',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'resizable' => 0,
          'cols' => '',
          'rows' => '',
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
        ),
        'required' => 1,
        'weight' => 4,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-27 23:45:48 -0700',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Thank You!',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e8da4e21-1916-4350-8286-906515b2ce11',
  'type' => 'page',
  'language' => 'und',
  'created' => 1382944082,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f105f3b9-4e95-4c17-b7be-d96b9effb54a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Thank you for your comments or questions.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '  <p>Thank you for your comments or questions.</p>
  ',
        'safe_summary' => '    ',
      ),
    ),
  ),
  'field_image' => array(),
  'field_page_keywords' => array(),
  'field_related_links' => array(
    'und' => array(
      0 => array(
        'target_id' => 79,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'path' => array(
    'pid' => 2495,
    'source' => 'node/3480',
    'alias' => 'general/contact-thank-you.aspx',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 1521,
      'vid' => 5126,
      'nid' => 3480,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1383030395,
      'published' => 1,
      'current' => 1,
      'title' => 'Thank You!',
      'timestamp' => 1383030395,
    ),
    'published' => array(
      'hid' => 1521,
      'vid' => 5126,
      'nid' => 3480,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1383030395,
      'published' => 1,
      'current' => 1,
      'title' => 'Thank You!',
      'timestamp' => 1383030395,
    ),
    'my_revision' => array(
      'hid' => 1521,
      'vid' => 5126,
      'nid' => 3480,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1383030395,
      'published' => 1,
      'current' => 1,
      'title' => 'Thank You!',
      'timestamp' => 1383030395,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-10-28 00:08:02 -0700',
);
  return $nodes;
}
