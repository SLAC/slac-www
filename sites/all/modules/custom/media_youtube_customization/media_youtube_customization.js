
(function ($) {

/**
 * Do not use Flash for embeding youtube video so iPad will display video properly.
 */
Lightvideo.createEmbed = function(href, id, color, variables) {
  var bgcolor = 'bgcolor="' + color + '"';
    var flashvars = '';
    if (variables) {
      flashvars = 'flashvars="' + variables + '"';

    }
    var href_array = href.split('/');
    var youtube_id = href_array.pop();

    Lightbox.modalHTML = '<iframe class="youtube-player" type="text/html" width="' + Lightbox.modalWidth + '" height="' + Lightbox.modalHeight + '" src="https://www.youtube.com/embed/' + youtube_id + '" frameborder="0"></iframe>';
};

//End jQuery block
}(jQuery));
