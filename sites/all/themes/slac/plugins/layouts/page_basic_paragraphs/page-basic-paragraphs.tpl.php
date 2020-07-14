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
  <div class="header-section">
    <div class="container-fluid">
      <div class="row">
        <div class="col-md-9">
         <?php if ($content['header']): ?>
           <?php print $content['header']; ?>
          <?php endif ?>
        </div>
        <div class="col-md-3">
          <?php if ($content['search']): ?>
           <?php print $content['search']; ?>
          <?php endif ?>
        </div>
        <div class="col-md-12">
          <?php if ($content['mainnav']): ?>
            <?php print $content['mainnav']; ?>
          <?php endif ?></div>
        <?php if ($content['secondnav']): ?>
          <div class="col-md-12">
            <?php print $content['secondnav']; ?>
          </div>
        <?php endif ?>
      </div>
    </div>
  </div>

   <?php if ($content['content']): ?>
      <?php print $content['content']; ?>
    <?php endif ?>

  <div class="footer">
    <div class="panel-panel footer container">
      <div class="row">
       <?php if ($content['footer']): ?>
        <?php print $content['footer']; ?>
      <?php endif ?>
    </div>
  </div>
</div>
