<?php

/**
 * @file
 * Paragraphs item simple bootstrap template.
 */

$overlay = '';
$parallax = '';
$invert = '';
$zoom = '';
$offset = '';

if (!empty($content['field_overlay'])) {
    $overlay = trim(strip_tags(render($content['field_overlay'])));
}
if (!empty($content['field_parallax'])) {
    $parallax = trim(strip_tags(render($content['field_parallax'])));
}
if (!empty($content['field_invert'])) {
    $invert = 'paragraph--overlay--invert';
}
if (!empty($content['field_zoom'])) {
    $zoom = trim(strip_tags(render($content['field_zoom'])));
}
if (!empty($content['field_offset'])) {
    $offset = trim(strip_tags(render($content['field_offset'])));
}
$classes = 'paragraph paragraph--type--xeno-hero paragraph--view-mode--default ' . $invert . ' ' . $zoom;

?>

<div class="<?php print $classes; ?>" <?php if ($overlay) print 'data-overlay="' . $overlay . '"'; ?> data-speed="<?php print $parallax; ?>" data-offset="<?php print $offset; ?>">
    <?php
    if (!empty($content['field_background_image'])) {
        echo '<div class="paragraph--type--xeno-hero__image">';
        print render($content['field_background_image']);
        echo '</div>';
    }
    ?>
    <?php print render($content['field_xeno_content']); ?>
</div>
