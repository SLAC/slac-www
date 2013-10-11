<?php
/**
 * @file
 */

class BlockBean extends BeanPlugin {
  /**
   * Declares default block settings.
   */
  public function values() {
    $values = array(
      /*'settings' => array(
        'node_view_mode' => FALSE,
        'records_shown' => FALSE,
      ),*/
      'body' => '',
      'file' => array(
        'image' => '',
      ),
      'more_link' => array(
        'text' => '',
        'path' => '',
      ),
    );

    return array_merge(parent::values(), $values);
  }
  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    $form = array();
    $form['body'] = array(
      '#type' => 'textarea',
      '#title' => t('Block content'),
      '#description' => t('Text that will be displayed in the block.'),
      '#default_value' => $bean->body,
    );
    $form['file'] = array(
      '#type' => 'fieldset',
      '#tree' => 1,
      '#title' => t('Choose a image'),
    );
    $image = array();
    if (isset($bean->file['image']['fid'])) {
      $image = $bean->file['image'];
    }
    $form['file']['image'] = array(
      '#type' => 'media',
      '#title' => '',
      '#default_value' => $image,
      '#description' => t('Upload image for the block, allowed extensions: jpeg, jpg, png'),
      '#media_options' => array(
        'global' => array(
          'types' => array(
            'image' => 'image',
          ),
          'enabledPlugins' => array(
            'upload' => 'upload',
            'media_default--media_browser_1' => 'media_default--media_browser_1',
          ),
          'schemes' => array(
            'public' => 'public',
          ),
          'file_directory' => 'bi_images',
          'file_extensions' => 'png jpg jpeg',
          'max_filesize' => '4 MB',
          'uri_scheme' => 'public',
        ),
      ),
    );
    $form['more_link'] = array(
      '#type' => 'fieldset',
      '#tree' => 1,
      '#title' => t('More link'),
      '#description' => t('Add a more link to the block.'),
    );
    $form['more_link']['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Link text'),
      '#default_value' => $bean->more_link['text'],
    );
    $form['more_link']['path'] = array(
      '#type' => 'textfield',
      '#title' => t('Link path'),
      '#default_value' => $bean->more_link['path'],
    );
    return $form;
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    $content = array();
    $content['body']['#markup'] = check_plain($bean->body);
    $content['more_link']['#markup'] = theme('bi_more_link', array('text' => $bean->more_link['text'], 'path' => $bean->more_link['path']));
    return $content;
  }
}