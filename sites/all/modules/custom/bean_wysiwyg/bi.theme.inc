<?php
/**
 * @file
 */

/**
 * Define theme templates.
 */
function theme_bi_more_link(&$variables) {
  return l($variables['text'], $variables['path'], array('attributes' => array('class' => array('more-link'))));
}