(function ($) {

    Drupal.behaviors.slacIntExtLinks = {
        attach: function(context) {
            internal_links = Drupal.settings.slac_int_ext_links.internal_links;
            external_links = Drupal.settings.slac_int_ext_links.external_links;
            $('.links-internal-external-icons a').each(function(index, element){
                if(internal_links.indexOf(element.href) > -1){
                    $(this).addClass('internal');
                }
                if(external_links.indexOf(element.href) > -1){
                    $(this).addClass('external');
                }
            });
        }
    }

})(jQuery);
