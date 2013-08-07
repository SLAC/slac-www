(function ($) {
   Drupal.behaviors.slacSearch = {
    attach: function(context) {
      $("#slac-search-options").hide();
      console.log(jQuery.cookie("Drupal.visitor.search_option"));
      $("#slac-search-wrapper").hover(function(context){
        $("#slac-search-options").fadeIn(1000);
      });
    }
  }
})(jQuery);
