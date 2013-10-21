(function ($) {

  Drupal.behaviors.ppCropField = {
    attach: function(context) {
      /**
       * Update thumbnails preview when new media file has been selected.
       */
      $('.fid').once('ppCropField').bind('change', function() {
        var $theme_variables_element = $(this).parent().find('.theme-variables');
        var fid = $(this).val();
        if (fid == 0) {
          return;
        }
        // Remove existing "Manage thumbnails" link.
        $(this).parent().find('.manage-thumbnails').remove();

        // Insert popup block.
        var popup_block_id = 'manage-thumbnails-popup-' + fid;
        var popup_block = '<div class="manage-thumbnails-popup" id="' + popup_block_id + '"></div>';
        $(popup_block).insertAfter(this).dialog({
          autoOpen: false,
          bgiframe: true,
          height: 600,
          width: 850,
          modal: true,
          draggable: false,
          resizable: false,
          overlay: {
            backgroundColor: '#000',
            opacity: 0.6
          }
        });

        if (!($theme_variables_element.data('theme-variables'))){
          return;
        };

        // Create a link "Manage thumbnails" and attach click event handler.
        var link = '<a href="#" class="manage-thumbnails button" id="manage-thumbnails-link-' + fid + '">' + Drupal.t('Manage thumbnails') + '</a>';
        $(this).after(link);
        $('#manage-thumbnails-link-' + fid).click(function(event){
          settings = $theme_variables_element.data('theme-variables');
          $.ajax({
            async: false,
            url: Drupal.settings.basePath,
            data: { q: 'js/pp_crop/manage_thumbnails/' + settings + '/' + fid},
            dataType: 'html',
            success: function (data) {
              $('#' + popup_block_id).html(data).dialog('open');
            }
          });
          event.preventDefault();
        });
      });

      $('.fid').once('ppCropFieldTrigger').trigger('change');
    }
  }

  Drupal.PPCrop = jQuery.extend(true, {}, Drupal.EPSACrop);
  Drupal.PPCrop.dialog = function(type_name, field_name, bundle, delta, img, trueSize) {
    Drupal.EPSACrop.dialog(type_name, field_name, bundle, delta, img, trueSize);
    $('#EPSACropDialog').bind('dialogclose', function(){
      $('img.pp-crop-thumbnail').each(function(){
        var src = $(this).attr('src');
        var andMarkPosition = src.indexOf('&');
        src = src.substr(0, andMarkPosition) + '&version=' + new Date().getTime();

        /**
         * We making sure that no ajax calls currently in progress because
         * right before popup is closed we send new crops coordinates to server
         * and if we do not wait for that call to finish we will get not changed
         * images instead.
         */
        var image = this;
        var interval = setInterval(function() {
          if ($.active == 0) {
            $(image).attr('src', src);
            clearInterval(interval);
          }
        }, 100);

      });
    });
  }

})(jQuery);
