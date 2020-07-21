<?php

/**
 * @file
 * Paragraphs item template.
 */
$bg_image = trim(strip_tags(render($content['field_background_image'])));
?>
<div class="time-line-container" style="background-image:url('<?php print $bg_image; ?>');">
  <ul class="time-line">
    <?php print render($content); ?>
  </ul>
</div>
