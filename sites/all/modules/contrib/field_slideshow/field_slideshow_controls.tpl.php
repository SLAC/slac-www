<?php
/**
 * @file
 * Template file for field_slideshow_controls
 *
 *
 */
?>
<div id="field-slideshow-<?php print $slideshow_id; ?>-controls" class="field-slideshow-controls">
  <a href="#" class="prev"><span class="prev-button"><?php print t('Prev'); ?></span></a>
  <?php if (!empty($controls_pause)) : ?>
    <a href="#" class="play"><?php print t('Play'); ?></a>
    <a href="#" class="pause"><?php print t('Pause'); ?></a>
  <?php endif; ?>
  <a href="#" class="next"><span class="prev-button"><?php print t('Next'); ?></span></a>
</div>
