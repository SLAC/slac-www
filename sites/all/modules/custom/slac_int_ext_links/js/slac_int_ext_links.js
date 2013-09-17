(function ($) {

    Drupal.behaviors.slacIntExtLinks = {
        attach: function(context) {
            internal_links = Drupal.settings.slac_int_ext_links.internal_links;
            external_links = Drupal.settings.slac_int_ext_links.external_links;
            $('.int-ext-links a').each(function(index, element){
                //
                console.log($(this));
                console.log(element);
                console.log(internal_links.indexOf(element.href));
                if(internal_links.indexOf(element.href) > -1){
                    $(this).addClass('internal');
                }
            });
        }
    }

})(jQuery);
