/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  // Drupal.behaviors.header = {
  //   attach: function (context, settings) {
  //     $('.region-header .block').prepend('<div class="icon"></div>');
  //   }
  // }
  
  // combo searchbox
  Drupal.behaviors.search = {
     attach: function (context, settings) {
       $('#searchForm').submit(function(e) {
          e.preventDefault();
         var search_type = $('#searchForm input[name="searchType"]:checked').val();
         var keyword = $('#searchForm #keyword').val();
         // people search
         if (search_type == 'people') {
           var url = "http://www-public.slac.stanford.edu/phonebook/dirsearch.aspx?lf=1&url=&gone=active&NAME=" + keyword;
         } else {
           var url = "http://www-psearch.slac.stanford.edu/SLACSearch/app/slac/index?style=mainSite&qt=" + keyword;
         }
         document.location = url;
       })
     }
   }

	Drupal.behaviors.researchLists = {
	  attach: function (context, settings) {

    	$('.section-research-resources .view-content .view-grouping-content').append('<span class="collapse">Collapse<img src="/sites/all/themes/slac/images/collapse.png" alt="" /></span>');	
			$(window).resize(function() {
				if (Modernizr.mq('(max-width: 600px)')) {		
		    	$('.section-research-resources .view-content .view-grouping-header').click(function(){
					  var $this = $(this);
		        if (!$this.index() && !$this.hasClass('processed')) {
		          $this.addClass('processed').toggleClass('expanded').siblings('.view-grouping-content').toggle(1, function() {
		            $this.removeClass('processed');
		          });
		          $this.parent().siblings('.view-grouping').find('.view-grouping-content').hide()
		          	   .stop().siblings().removeClass('expanded');
		        }
					});
		    	$('.section-research-resources .view-content .collapse').click(function(){
		    	$(this).closest('.view-grouping-content').hide().siblings().removeClass('expanded');
		    	});
	 			}


			});
	  }
	}


  Drupal.behaviors.responsiveMenuAndSearch = {
    attach: function (context, settings) {

      $('<div class="mobile-search-trigger"><span></span></div>').insertBefore('.pane-pane-header #search-box');
      $('.mobile-search-trigger').click(function(){
        $('.mobile-search-box').slideToggle();
      });

      $('<div class="left-menu-trigger"></div>').insertBefore('.page-basic .header .inside');
       
        $('.left-menu-trigger').click(function() {
          $(this).toggleClass('left-menu-active');
          if(($(this).hasClass("left-menu-active")) == true) {
          $(this).parents('.header').siblings('.panel-panel').andSelf().animate({
              'marginLeft': '30%'
            })
          }   
          else{
          $(this).parents('.header').siblings('.panel-panel').andSelf().animate({
              'marginLeft': '0'
            })
          }
        });
    }
  }

  Drupal.behaviors.backOnTop = {
    attach: function (context, settings) {
      $('<a href="#" class="back-on-top"><span>Go to top</span></a>').insertAfter('.page-basic > .content > .inside') 
    }
  }

  Drupal.behaviors.slacSearch = {
    attach: function(context) {
      $('#search-box').each(function(){
        $this= $(this);
        $this.hover(function(){
          $this.find("#slac-search-options").fadeIn("slow");
        },
        function(){
          $this.find("#slac-search-options").fadeOut();
        });      
      })     
    }
  }

  Drupal.behaviors.sliderResize = {
    attach: function (context, settings) {
      // fix slider width/height on screen resize
      var slider = $('.views-slideshow-cycle-main-frame'),
          resizer = function( event ){
            var h = slider.find('.views_slideshow_slide:visible img').height();
            if( $(window).width() > 600 ){
              slider.css({'width':'100%','height':h})
              .find('.slide-text-side').css({'height':h-40});
            } else{
              slider.css({'width':'100%','height':h+82})
              .find('.views_slideshow_slide').css({'height':'100%'});
            }
            if( h != slider.find('.views_slideshow_slide:visible img').height() ){resizer()}
          }
      // on DOM ready
      $(window).load(resizer);
      // on window resize
      try{
        window.addEventListener("orientationchange", resizer);
      } catch(e){}
      $(window).resize(resizer);
      // on slider btns click
      $('div[class*="views-slideshow-controls"]').find('a,.views-content-counter').click(resizer);
    }
  }

})(jQuery, Drupal, this, this.document);
