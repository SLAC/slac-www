<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Three col lectures'),
  'category' => t('Slac layouts'),
  'icon' => 'three_col_lectures.png',
  'theme' => 'three_col_lectures',
  'theme arguments' => array('id', 'content'),
  'css' => 'three_col_lectures.css',
  'regions' => array(
    'left' => t('Left Column'),
    'mainmiddleright' => t('Main Middle+Right Column'),
    'middle-top' => t('Middle Column Top'),
    'middle-top-seccond' => t('Middle Column Top Seccond'),
    'middle-center-left' => t('Middle Column Center Left'),
    'middle-center-right' => t('Middle Column Center Right'),
    'middle-center-bottom' => t('Middle Column Center Bottom'),
    'middle-bottom-left' => t('Middle Column Bottom Left'),
    'middle-bottom-right' => t('Middle Column Bottom Right'),
    'right' => t('Right Column')
  ),
);

