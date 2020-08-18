<?php

/**
 * @file
 * Paragraphs item simple bootstrap template.
 */

$icon = '';
$body = '';
$image = '';
$title = '';
$link = '';

if (!empty($content['field_icon'])) {
    $icon = render($content['field_icon']);
}
if (!empty($content['field_card_body'])) {
    $body = render($content['field_card_body']);
}
if (!empty($content['field_card_image'])) {
    $image = render($content['field_card_image']);
}
if (!empty($content['field_card_title'])) {
    $title = render($content['field_card_title']);
}
if (!empty($content['field_card_subtitle'])) {
    $subtitle = render($content['field_card_subtitle']);
}
if (!empty($content['field_paragraph_link'])) {
    $link = trim(strip_tags(render($content['field_paragraph_link'])));
}

?>

<div class="card">
    <?php if ($icon || $title || $subtitle): ?>
        <div class="card-header"><?php if ($link) : ?><a href="<?php print $link; ?>"><?php endif; ?><?php if ($icon) : ?><?php print $icon; ?><?php endif; ?><?php if ($title) : ?><h5 class="card-title"><?php print $title; ?></h5><?php endif; ?>
        <?php if ($subtitle) : ?><div class="card-subtitle"><?php print $subtitle; ?></div><?php endif; ?></div><?php endif; ?>
    <?php if ($image) : ?>
            <div class="card-img"><?php print $image; ?></div>
        <?php endif; ?><?php if ($link) : ?></a><?php endif; ?>
    <?php if ($body) : ?>
        <div class="card-body">
            <div class="card-text">
                <?php print $body; ?>
            </div>
        </div>
    <?php endif; ?>
</div>
