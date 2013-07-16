(function ($) {
  Drupal.behaviors.displayResolutionSettings = {
    attach: function (context, settings) {
      var width = Drupal.settings.slac_admin.width;
      var height = Drupal.settings.slac_admin.height;

      if (width == 0 || height == 0) {
      	return;
      }

      if (width >= screen.width || height >= screen.height) {
      	$('a[rel^="lightbox"]').find('img').unwrap();
      }
    }
  }
})(jQuery);

