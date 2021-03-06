<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Page basic For Slac Virtual Theme'),
  'category' => t('Slac Paragraph layouts'),
  'icon' => 'page_basic_paragraphs.png',
  'theme' => 'page_basic_paragraphs',
  'theme arguments' => array('id', 'content'),
  'css' => 'page_basic_paragraphs.css',
  'regions' => array(
    'menu' => t('Responsive menu'),
    'menu-responsive' => t('Secondary Responsive menu'),
    'header' => t('Header'),
    'search' => t('Search'),
    'mainnav' => t('Main Nav'),
    'icon' => t('Icon'),
    'secondnav' => t('Secondary Nav'),
    'cta' => t('Call to Action'),
    'content' => t('Content'),
    'footer' => t('Footer')
  ),
);

