<?php
/**
 * @file
 * slac_metatags.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function slac_metatags_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[site:name] - [current-page:title]',
      ),
      'description' => array(
        'value' => 'SLAC National Accelerator Laboratory is a U.S. Department of Energy (DOE) Office of Science laboratory operated by Stanford University.',
      ),
      'abstract' => array(
        'value' => 'SLAC National Accelerator Laboratory is a U.S. Department of Energy (DOE) Office of Science laboratory operated by Stanford University.',
      ),
      'keywords' => array(
        'value' => 'SLAC, National, Accelerator, Laboratory, DOE, Stanford, lab, science, physics, research',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'generator' => array(
        'value' => '',
      ),
      'copyright' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '2400913,1326093633,665533407,1179945065,1051912943,707296362',
      ),
      'fb:app_id' => array(
        'value' => '1550610395185450',
      ),
      'og:site_name' => array(
        'value' => 'SLAC National Accelerator Laboratory',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:description' => array(
        'value' => 'SLAC National Accelerator Laboratory is a U.S. Department of Energy (DOE) Office of Science laboratory operated by Stanford University.',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:image' => array(
        'value' => 'https://www6.slac.stanford.edu/sites/www6.slac.stanford.edu/files/logo.jpeg',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:latitude' => array(
        'value' => 37.4147,
      ),
      'og:longitude' => array(
        'value' => 122.2217,
      ),
      'og:street-address' => array(
        'value' => '2575 Sand Hill Road',
      ),
      'og:locality' => array(
        'value' => 'Menlo Park',
      ),
      'og:region' => array(
        'value' => 'California',
      ),
      'og:postal-code' => array(
        'value' => 94025,
      ),
      'og:country-name' => array(
        'value' => 'United States of America',
      ),
      'og:email' => array(
        'value' => 'communications@slac.stanford.edu',
      ),
      'og:phone_number' => array(
        'value' => '650-926-3300',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:video' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:site' => array(
        'value' => '@SLAClab',
      ),
      'twitter:site:id' => array(
        'value' => 90696553,
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => 'SLAC National Accelerator Laboratory is a U.S. Department of Energy (DOE) Office of Science laboratory operated by Stanford University.',
      ),
      'twitter:image' => array(
        'value' => 'https://www6.slac.stanford.edu/sites/www6.slac.stanford.edu/files/logo.jpeg',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => 'SLAC | Bold People. Visionary Science. Real Impact.',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  // Exported Metatag config instance: node:news_article.
  $config['node:news_article'] = array(
    'instance' => 'node:news_article',
    'config' => array(
      'keywords' => array(
        'value' => '[node:field-tags]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'twitter:image' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:page.
  $config['node:page'] = array(
    'instance' => 'node:page',
    'config' => array(
      'keywords' => array(
        'value' => '[node:field_page_keywords]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'config' => array(
      'title' => array(
        'value' => '[site:name] - [user:name]',
      ),
    ),
  );

  return $config;
}
