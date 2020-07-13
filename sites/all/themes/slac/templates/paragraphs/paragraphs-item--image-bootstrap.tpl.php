<?php

/**
 * @file
 * Paragraphs item simple bootstrap template.
 */

$width = '';
$background = '';
$padding_top = '';
$padding_bottom = '';
$animation = '';
$animation_setting = '';

if (!empty($content['field_paragraph_width'])) {
    $width = trim(strip_tags(render($content['field_paragraph_width'])));
}
if (!empty($content['field_background'])) {
    $background = 'paragraph--color ' . trim(strip_tags(render($content['field_background'])));
}
if (!empty($content['field_padding_top'])) {
    $padding_top = trim(strip_tags(render($content['field_padding_top'])));
}
if (!empty($content['field_padding_bottom'])) {
    $padding_bottom = trim(strip_tags(render($content['field_padding_bottom'])));
}
if (!empty($content['field_animation'])) {
    $animation = 'wow animated' . trim(strip_tags(render($content['field_animation'])));
}
if (!empty($content['field_animation_setting'])) {
    $animation_setting = trim(strip_tags(render($content['field_animation_setting'])));
}

$classes = 'paragraph paragraph--type--image paragraph--view-mode--default ' . $background . ' ' . $width;
$paragraphclass = 'paragraph__column row ' . $padding_top . ' ' . $padding_bottom . ' ' . $animation . ' ' . $animation_setting;

?>

<div class="<?php print $classes; ?>">
<div class="<?php print $paragraphclass; ?>">
    <?php print render($content['field_image']); ?>
</div>
</div>
