(function ($) {

  Drupal.behaviors.slacIntExtLinks = {
    attach: function (context) {
      var internal_links = Drupal.settings.slac_int_ext_links.internal_links.split("\n");
      var external_links = Drupal.settings.slac_int_ext_links.external_links.split("\n");
      all_links = $.merge($.merge([], internal_links), external_links);
      $('.links-internal-external-icons a').each(function (index, element) {
        for (var i = 0; i < all_links.length; i++) {
          patt = new RegExp(all_links[i]);
          if (patt.test(element.href) == true) {
            if ($.inArray(all_links[i], internal_links)){
              $(this).addClass('internal');
            }
            else if($.inArray(all_links[i], external_links) ){
              $(this).addClass('external');
            }
          }
        }
      });
    }
  }

})(jQuery);
