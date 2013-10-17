<div class="slac-beans-image-text-link" style="padding-top: 26px;">
  <?php if ($title): ?>
  <div style="
    border-bottom: 2px solid #881728;
    padding: 6px 0 2px 7px;
    text-transform: uppercase;
    letter-spacing: .125em;
    color: #7F6332;">
    <?php print $title; ?>
  </div>
  <? endif; ?>

  <div style="
    <?php if ($shaded): ?>
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

    <div>

      <?php if ($subtitle): ?>
        <div style="
          color: #474747;
          font-size: 12px;
          font-weight: bold;
        ">
          <p>
            <?php print $subtitle; ?>
          </p>
        </div>
      <?php endif; ?>


      <?php if ($image): ?>
        <div style="float: right; margin-left: 3%;">
          <?php if ($link): ?>
            <a style="display: block;
                      padding: 2px;
                      border: 2px solid #DBDADB;
                      line-height: 0;
                      background-color: #fff;"
            href="<?php print $link_url; ?>">
          <?php print $image; ?>
          </a>
          <?php else: ?>
            <div style="display: block;
                        padding: 2px;
                        border: 2px solid #DBDADB;
                        line-height: 0;
                        background-color: #fff;">
              <?php print $image; ?>
            </div>
          <?php endif; ?>
        </div>
      <?php endif; // if ($image) ?>

      <p>
          <?php print $body; ?>
      </p>

      <?php if ($link): ?>
        <p><?php print $link; ?></p>
      <?php endif; ?>

    </div>
  </div>
</div>
