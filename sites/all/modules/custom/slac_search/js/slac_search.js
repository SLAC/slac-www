(function ($) {
   Drupal.behaviors.slacSearch = {
    attach: function(context) {
      $("#slac-search-options").hide();
      $("#slac-search-wrapper").hover(function(context){
        $("#slac-search-options").fadeIn(1000);
      });
    }
  }
})(jQuery);
