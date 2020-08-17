<?php

/**
 * @file
 * theme-settings.php
 *
 * Provides theme settings for Bootstrap4 themes and subthemes.
 */

function bootstrap4_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {
  /*if (!$form_id) {
    return;
  }*/

  // General.
  $form['bootstrap4'] = [
    '#type' => 'fieldset',
    '#title' => t('Bootstrap 4'),
  ];

  // Container.
  $form['bootstrap4']['bootstrap4_menu_styles'] = [
    '#type' => 'textarea',
    '#title' => t('Menu styles'),
    '#description' => t('Place each menu on the new line. <br />Format: <code>menu name; list stiles; list item stiles; link stiles</code><br />Examples:<br /><code>main-menu;nav flex-column;nav-item;nav-link</code><br /><code>menu-footer-menu;nav flex-column;nav-item;nav-link</code><br /><code>user-menu;nav flex-column;nav-item;nav-link</code>.<br />See <a href="!nav" target="_blank">Bootstrap 4 nav</a> documentation.', [
      '!nav' => 'https://getbootstrap.com/docs/4.4/components/navs/#base-nav',
    ]),
    '#default_value' => theme_get_setting('bootstrap4_menu_styles'),
  ];
}
