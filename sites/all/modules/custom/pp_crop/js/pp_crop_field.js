(function ($) {

  Drupal.behaviors.ppCropField = {
    attach: function(context) {
      $('[id^=view-thumbnails-][id$=-block]').dialog({
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
      $('[id^=view-thumbnails-]:not([id$=-block])').click(function(event) {
        var blockId = this.id + '-block';
        event.preventDefault();
         $('#' + blockId).dialog('open');
      });
      $('a.manage-crop-link').click(function(event) {
         $('[id^=view-thumbnails-][id$=-block]').dialog('close');
      });
      Drupal.EPSACropOld = jQuery.extend(true, {}, Drupal.EPSACrop);
      Drupal.EPSACrop.dialog = function(type_name, field_name, bundle, delta, img, trueSize) {
        Drupal.EPSACropOld.dialog(type_name, field_name, bundle, delta, img, trueSize);
        $('#EPSACropDialog').bind('dialogclose', function(){
          $(document).ajaxComplete(function() {
            document.location.reload();
          });
        });
      }
    }
  }

})(jQuery);
