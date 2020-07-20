(function ($, Drupal) {

  $(document).ready(function(){

  // Makes the parallax function.
  function parallaxIt() {

    // Create variables.
    var scrollTop = window.pageYOffset || document.documentElement.scrollTop;

    // Adds on window scroll event.
    $(window).scroll(function() {
      scrollTop = window.pageYOffset || document.documentElement.scrollTop;
    });

    // For each of background parallax elements.
    $('.paragraph--type--xeno-hero .paragraph--type--xeno-hero__image').each(function(){
      var $backgroundObj = $(this);
      var yPos;
      var coords;
      var speed = $backgroundObj.parent().attr('data-speed');

      $backgroundObj.css('background-image', 'url(' + $backgroundObj.find('img').attr('src') + ')');
      $(window).scroll(function() {
        var docViewTop = $(window).scrollTop();
        var docViewBottom = docViewTop + $(window).height();
        var offset = $backgroundObj.parent().attr('data-offset');
        if (!offset || offset === 'undefined') {
          offset = 0;
        }
        else {
          offset = parseInt(offset);
        }

        if ($backgroundObj.offset().top < docViewBottom) {
          yPos = -((docViewTop / speed) + offset);
          coords = '50% '+ yPos + 'px';

          if($(window).width() > 992) {
            $backgroundObj.css('background-position', coords);
          } else {
            $backgroundObj.css('background-position', '');
          }
        }
      });
    });

    // Triggers the window scroll for refresh.
    $(window).trigger('scroll');
  };

  parallaxIt();
  });

})(jQuery, Drupal);