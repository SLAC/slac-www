<?php

/**
 * @file
 * Paragraphs item template.
 */
$bg_image = render($content['field_background_image']);
?>
<div class="time-line-container">
  <ul class="time-line" style="background-image:url('<?php print $bg_image; ?>');">
    <?php print render($content); ?>
  </ul>
</div>
