<?php foreach ($are_you_links as $are_you_link) { ?>
  <div class="field-item">
    <a href="<?php print $are_you_link['url'] ?>">
      <span>
        <?php print $are_you_link['title'] ?>
      <span>
    </a>
  </div>
<?php } ?>