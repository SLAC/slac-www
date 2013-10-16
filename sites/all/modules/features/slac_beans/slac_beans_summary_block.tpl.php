<?php foreach ($blocks as $block) { ?>
<div class="slac-beans-summary-block" style="padding-top: 26px;">
  <div style="
    border-bottom: 2px solid #881728;
    clear: both;
    margin-bottom: 10px;
    padding: 6px 0 2px 10px;
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
      width: 100%;
      /*padding: 20px 3%;*/
      padding: 0;
      font-size: 13px;
      overflow: hidden;
      margin-top: 0;
       ">
    <div style="">
      <?php if(isset($block['image'])): ?>
        <div style="
          float: right;
          margin-left: 2.5%;
          overflow: hidden;
          width: 24.5%;
          max-width: 143px;
         ">
          <a style="
              display: block;
              padding: 2px;
              border: 2px solid #DBDADB;
              line-height: 0;
              background-color: #fff;" href="<?php print $block['url']; ?>">
            <?php print $block['image']; ?>
          </a>
        </div>
      <?php endif; ?>
      <div style="
        margin: 0 0 0 3%;
        padding: 8px 0;
        width: 70%;
      ">
      <p><?php print $block['text']; ?></p>
      <p><?php print $block['link']; ?> </p>
      </div>
    </div>
  </div>
</div>
<?php } ?>
