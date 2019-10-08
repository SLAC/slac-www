<?php

/**
 * @file
 * Paragraphs item simple template.
 */
?>
<?php
  hide($content);

  $width_field = '';
  if (!empty($content['field_quote_width'])) {
    $width_field = ' ' . trim(strip_tags(render($content['field_quote_width'])));
  }
?>
<div class="paragraph-item paragraph-type--quote<?php print $width_field; ?>">
  <div>
    <div>
      <div><blockquote><?php print render($content['field_quote']); ?></blockquote>
        <cite><?php print render($content['field_quotee']); ?></cite>
      </div>
    </div>
  </div>
</div>
