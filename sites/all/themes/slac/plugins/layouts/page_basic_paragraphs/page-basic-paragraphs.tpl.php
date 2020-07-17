<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="panel-display page-basic clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="sidebar-menu">
    <?php if ($content['menu']): ?>
      <?php print $content['menu']; ?>
    <?php endif ?>
  </div>
  <div class="page-content">
    <div class="header-section">
      <div class="container">
         <?php if ($content['header']): ?>
           <?php print $content['header']; ?>
          <?php endif ?>
        <div class="row">
          <div class="col-md-12">
            <?php if ($content['mainnav']): ?>
              <?php print $content['mainnav']; ?>
            <?php endif ?>
          </div>
        </div>
      </div>
    </div>
      <?php if ($content['secondnav']): ?>
      <div class="secondary-nav">
        <div class="container">
           <div class="row">
            <div class="site-icon">
              <?php print $content['icon']; ?>
            </div>
            <div class="nav-secondary">
              <?php print $content['secondnav']; ?>
            </div>
             <?php if ($content['cta']): ?>
              <div class="cta"><?php print $content['cta']; ?></div>
              <?php endif ?>
          </div>
        </div>
      </div>
      <?php endif ?>


     <?php if ($content['content']): ?>
        <?php print $content['content']; ?>
      <?php endif ?>

    <div class="footer-section">
    <div class="panel-panel footer">
       <?php if ($content['footer']): ?>
        <?php print $content['footer']; ?>
      <?php endif ?>
    </div>
  </div>
</div>
