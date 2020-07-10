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
$column_style = '';
$reverse_class = '';
$align_columns = '';

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
    $animation = trim(strip_tags(render($content['field_animation'])));
}
if (!empty($content['field_animation_setting'])) {
    $animation_setting = trim(strip_tags(render($content['field_animation_setting'])));
}
if (!empty($content['field_column_style'])) {
    $column_style = trim(strip_tags(render($content['field_column_style'])));
}
if (!empty($content['field_reverse_order_on_mobile'])) {
    $reverse_class = trim(strip_tags(render($content['field_reverse_order_on_mobile'])));
}
if (!empty($content['field_align_columns'])) {
    $align_columns = trim(strip_tags(render($content['field_align_columns'])));
}

$classes = 'paragraph paragraph--type--simple-bootstrap paragraph--view-mode--default ' . $background . ' ' . $width;
$paragraphclass = 'paragraph__column row ' . $padding_top . ' ' . $padding_bottom . ' ' . $animation . ' ' . $animation_setting . ' ' . $column_style . ' ' . $reverse_class . ' ' . $align_columns;

?>

<div class="<?php print $classes; ?>">
<div class="<?php print $paragraphclass; ?>">
    <div class="col-md">
        <?php print render($content['field_column_content']); ?>
    </div>
</div>
</div>
