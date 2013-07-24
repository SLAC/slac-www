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

