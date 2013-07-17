(function ($) {
  Drupal.behaviors.displayResolutionSettings = {
    attach: function (context, settings) {

      if (typeof Drupal.settings.slac_admin != 'undefined'
        && typeof Drupal.settings.slac_admin.width != 'undefined'
        && typeof Drupal.settings.slac_admin.height != 'undefined') {
        var width = Drupal.settings.slac_admin.width;
        var height = Drupal.settings.slac_admin.height;
        if (width >= screen.width || height >= screen.height) {
          $('a[rel^="lightbox"]').find('img').unwrap();
        }
      }
    }
  }
})(jQuery);

