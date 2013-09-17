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
                    $('.section-research-resources .view-content .view-grouping-header').click(function () {
                        var $this = $(this);
                        if (!$this.index() && !$this.hasClass('processed')) {
                            $this.addClass('processed').toggleClass('expanded').siblings('.view-grouping-content').toggle(1, function () {
                                $this.removeClass('processed');
                            });
                            $this.parent().siblings('.view-grouping').find('.view-grouping-content').hide()
                                .stop().siblings().removeClass('expanded');
                        }
                    });
                    $('.section-research-resources .view-content .collapse').click(function () {
                        $(this).closest('.view-grouping-content').hide().siblings().removeClass('expanded');
                    });
                }
        });
	  }
	}


  Drupal.behaviors.responsiveMenuAndSearch = {
    attach: function (context, settings) {
      var mobileSearchTrigger = $('.mobile-search-trigger');
      
      if( mobileSearchTrigger.length == 0 ){
        $('<div class="mobile-search-trigger"><span></span></div>').insertBefore('.pane-pane-header #search-box');
        mobileSearchTrigger = $('.mobile-search-trigger');
      }

      if (!mobileSearchTrigger.hasClass('trigger-processed')) {
        mobileSearchTrigger.addClass('trigger-processed');
        mobileSearchTrigger.click(function(){
          var $this = $('#mobile-search-box');
          if( $this.is(':visible') ){
            $this.slideUp('fast');
          } else{
            $this.slideDown('fast');
          }
        });

        if( $('.left-menu-trigger').length == 0 ){
          $('<div class="left-menu-trigger"></div>').insertBefore('.page-basic .header .inside');
        }

        $('.left-menu-trigger').click(function() {
          var $this = $(this);
          if( $this.hasClass("left-menu-active") ) {
            $this
            .removeClass('left-menu-active')
            .parents('.page-basic').find('> div:not(.sidebar-menu)').stop(true,true).animate({
              'marginLeft': '0'
            })
          } else{
            $this
            .addClass('left-menu-active')
            .parents('.page-basic').find('> div:not(.sidebar-menu)').stop(true,true).animate({
              'marginLeft': '30%'
            })
          }
        });

        // main menu add class for menu items
        $('.main-menu ul.nice-menu-menu-top-nav-menu > li').each(function(){
          $(this).addClass('menu-item-'+$(this).index());
        });
      }
    }
  }

  Drupal.behaviors.backOnTop = {
    attach: function (context, settings) {
      if( $('.back-on-top').length == 0 ){
        $('<a href="#" class="back-on-top"><span>Go to top</span></a>').insertAfter('.page-basic > .content > .inside');
      }
      /* Left menu expanded class */
      $('.left-menu li ul').closest('li').addClass('has-subitems');
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
      var slider = $('.slider'),
          resizer = function( event ){
            var h = slider.find('.field-slideshow-image-caption:visible img').height();
            if( $(window).width() > 580 ){
              console.log('width: ' + $(window).width() + ' h= ' +h);
              slider.css({'width':'100%','height':h})
              .find('.field-slideshow-body').css({'height':h-40});
            } else{
              slider.css({'width':'100%','height':h+82})
              .find('.field-slideshow-image-caption').css({'height':'100%'});
            }
            if( h != slider.find('.field-slideshow-image-caption:visible img').height() ){resizer()}
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

  Drupal.behaviors.externalLinks = {
    attach: function (context, settings) {
      $('a.ext').each(function(){  
        if ($(this).siblings('span.ext').length == 0) {
          $('<span class="ext"></span>').insertAfter(this); 
        }
      });
    }
  }

  Drupal.behaviors.placeholderIE = {
    attach: function (context, settings) {
      $("[placeholder]").textPlaceholder();
    }
  }

  Drupal.behaviors.columnsChecker = {
    attach: function (context, settings) {
      if ($('.no-left-column').length) {
        $('.pane-page-content').addClass('move-title-left');
      }
    }
  }

  

  Drupal.behaviors.popupBlockonMobile = {
    attach: function (context, settings) {
      var smallflag = Modernizr.mq('(max-width: 600px)');
      $('.video-block .field-item .youtube-video-popup a, a.lightbox-processed').click(function() {
        if (smallflag) {
          window.location = $(this).attr('href');
        }            
      });
    }
  }

})(jQuery, Drupal, this, this.document);



