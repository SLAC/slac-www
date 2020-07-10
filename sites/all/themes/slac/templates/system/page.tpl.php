<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<header>
  <?php if ($site_name || $site_slogan): ?>
    <div class="sr-only">
      <?php if ($site_name): ?>
        <?php if ($title): ?>
          <div id="site-name"><strong>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </strong></div>
        <?php else: /* Use h1 when the content title is empty */ ?>
          <h1 id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>
      <?php endif; ?>

      <?php if ($site_slogan): ?>
        <div id="site-slogan"><?php print $site_slogan; ?></div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <div class="container-fluid header <?php print $b4_top_container; ?>">
    <?php print render($page['header']); ?>
    <?php if (($page['nav_branding']) || ($page['nav_main']) || ($page['nav_additional'])): ?>
    <nav class="navbar navbar-expand-lg navbar-light bg-light<?php print $nav_classes; ?>">
      <div class="navbar-brand">
        <?php print render($page['nav_branding']); ?>
      </div>

      <button class="navbar-toggler" type="button" data-toggle="collapse"
              data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent"
              aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>

      <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <div class="navbar-nav d-flex mr-auto">
            <div id="navigation">
              <div class="section">
                <?php print render($page['nav_main']); ?>
              </div>
            </div> <!-- /.section, /#navigation -->
        </div>
        <?php print render($page['nav_additional']); ?>
      </div>
    </nav>
    <?php endif; ?>
  </div>
</header>

<main role="main">
  <a id="main-content" tabindex="-1"></a>

  <div class="container-lg <?php print $b4_top_container; ?>">
    <?php if ($page['breadcrumb']): ?>
      <?php if ($breadcrumb): ?>
        <div id="breadcrumb"><?php print $breadcrumb; ?></div>
      <?php endif; ?>
      <?php print render($page['breadcrumb']); ?>
    <?php endif; ?>
    <div class="row no-gutters">
      <?php if ($page['sidebar_first']): ?>
      <div class="order-2 order-lg-1 <?php print $sidebar_first_classes; ?>">
        <?php print render($page['sidebar_first']); ?>
      </div>
      <?php endif; ?>
      <div class="order-1 order-lg-2 <?php print $content_classes; ?>">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div>
      <?php if ($page['sidebar_second']): ?>
      <div class="order-3 <?php print $sidebar_second_classes; ?>">
        <?php print render($page['sidebar_second']); ?>
      </div>
      <?php endif; ?>
    </div>
  </div>

</main>
<footer class="mt-auto <?php print $footer_classes; ?>">
  <div class="container-fluid footer <?php print $b4_top_container; ?>">
    <div class="row">
    <?php if ($page['footer_left']): ?>
      <div class="col">
        <?php print render($page['footer_left']); ?>
      </div>
    <?php endif; ?>
    <?php if ($page['footer_copyright']): ?>
      <div class="col">
        <?php print render($page['footer_social']); ?>
        <?php print render($page['footer_copyright']); ?>
      </div>
    <?php endif; ?>
    <?php if ($page['footer_right']): ?>
      <div class="col">
        <?php print render($page['footer_right']); ?>
      </div>
    <?php endif; ?>
  </div>
  </div>
</footer>
