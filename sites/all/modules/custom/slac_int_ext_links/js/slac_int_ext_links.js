(function ($) {

    Drupal.behaviors.slacIntExtLinks = {
        attach: function (context) {
            var internal_links = Drupal.settings.slac_int_ext_links.internal_links;
            var external_links = Drupal.settings.slac_int_ext_links.external_links;
            $('.links-internal-external-icons a').each(function (index, element) {
                link_checker(internal_links, $(this), 'internal')
                link_checker(external_links, $(this), 'external')
            });
        }
    }
    // check if is valid regex and add class
    function link_checker(links_array, obj, css_class){
        var href = obj.attr("href");
        for (var i = 0; i < links_array.length; i++) {
            var link = $.trim(links_array[i]);
            patt = new RegExp(link);
            if (patt.test(href) == true) {
                obj.addClass(css_class);
            }
        }
    }
})(jQuery);
