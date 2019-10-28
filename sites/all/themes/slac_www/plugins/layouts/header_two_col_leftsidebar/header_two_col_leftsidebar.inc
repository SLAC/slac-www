<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Basic 2 col with leftsidebar with Header Image'),
  'category' => t('Slac layouts'),
  'icon' => 'header_two_col_leftsidebar.png',
  'theme' => 'header_two_col_leftsidebar',
  'theme arguments' => array('id', 'content'),
  'css' => 'header_two_col_leftsidebar.css',
  'regions' => array(
    'header' => t('Header'),
    'left' => t('Left Column'),
    'right' => t('Right Column')
  ),
);

