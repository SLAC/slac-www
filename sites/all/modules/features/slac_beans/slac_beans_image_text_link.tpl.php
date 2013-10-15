<?php foreach ($blocks as $block) { ?>
<div class="slac-beans-image-text-link" style="padding-top: 26px;">
  <div style="
    border-bottom: 2px solid #881728;
    padding: 6px 0 2px 7px;
    text-transform: uppercase;
    letter-spacing: .125em;
    color: #7F6332;">
    <?php print $block['title']; ?>
  </div>
  <div
    style="
    <?php if($block['shaded_background']): ?>
      background: #f6f6f6;
      background: -moz-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #f6f6f6), color-stop(100%, #ebebeb));
      background: -webkit-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -o-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -ms-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: linear-gradient(to bottom, #f6f6f6 0%, #ebebeb 100%);
      filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#f6f6f6', endColorstr='#ebebeb',GradientType=0 );
    <?php endif; ?>
      width: 94%;
      padding: 20px 3%;
      font-size: 13px;
      overflow: hidden;
      margin-top: 0;
       ">
    <div style="">
      <?php if(isset($block['image'])): ?>
        <div style="
        float: right;
        width: 25%;
        margin-left: 5%;
         ">
          <a style="
              display: block;
              padding: 2px;
              border: 2px solid #DBDADB;
              background-color: #fff;" href="<?php print $block['url']; ?>">
            <?php print $block['image']; ?>
          </a>
        </div>
      <?php endif; ?>
      <p>
          <?php print $block['text']; ?>
      </p>
      <p>
        <?php print $block['link']; ?>
      </p>
    </div>
  </div>
</div>
<?php } ?>
