<?php foreach ($blocks as $block) { ?>
<div class="slac-beans-shaded-no-title-block" style="padding-top: 10px;">
  <div
    style="
      background: #f6f6f6;
      background: -moz-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #f6f6f6), color-stop(100%, #ebebeb));
      background: -webkit-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -o-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -ms-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: linear-gradient(to bottom, #f6f6f6 0%, #ebebeb 100%);
      filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#f6f6f6', endColorstr='#ebebeb',GradientType=0 );
      width: 94%;
      padding: 10px 3%;
      font-size: 13px;
      overflow: hidden;
      margin-top: 0;
       ">
    <div style="
      color: #474747;
      font-size: 21px;
      font-weight: bold;
      margin-bottom: 10px;
      position: relative;
      top: 0;
    ">
      <h2><?php print $block['title']; ?></h2>
    </div>
    <div>
      <?php print $block['text']; ?>
    </div>
  </div>
</div>
<?php } ?>
