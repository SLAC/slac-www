(function ($) {

  Drupal.behaviors.SLACImageLightbox = {
    attach: function(context) {
      $('input[name=thumbnails]').once('SLACImageLightbox').click(function(){
        var $radios_value = $('input[name=thumbnails]:checked').val();
        if ($radios_value == $(this).val()) {
          $('#edit-format').val($radios_value);
        }
      });
      var $select_value = $('#edit-format').val();
      $('input[name=thumbnails]').each(function(){
        if ($(this).val() == $select_value) {
          $(this).click();
        }
      });
      $('.form-item-format').hide();
    }
  };

  Drupal.behaviors.SLACImageLightboxCropDialog = {
    attach: function(context) {
      $('body').once('SLACImageLightboxCropDialog').each(function(){
        Drupal.EPSACropOld = $.extend(true, {}, Drupal.EPSACrop);

        Drupal.EPSACrop.dialog = function(type_name, field_name, bundle, delta, img, trueSize) {
          Drupal.EPSACropOld.dialog(type_name, field_name, bundle, delta, img, trueSize);
          $('#EPSACropDialog').bind('dialogclose', function(event) {
              // Reload the page so new thumbnails will be populated in the form.
              document.location.reload();
          });
        };
      });
    }
  };

  /**
   * Override this method so every time image is inserted into WYSIWYG it is refreshed and not taken from browser cache.
   */
  Drupal.media.formatForm.getFormattedMedia = function () {
    var formatType = $("select#edit-format option:selected").val();
    var imageHtml = Drupal.settings.media.formatFormFormats[formatType];

    regex = /\?itok=[a-zA-Z0-9]*/;
    var matches = regex.exec(imageHtml);
    var rand = new Date().getTime();
    imageHtml = imageHtml.replace(matches[0], matches[0] + '&' + rand + '=' + rand);

    return { type: formatType, options: Drupal.media.formatForm.getOptions(), html: imageHtml };
  };

})(jQuery);
