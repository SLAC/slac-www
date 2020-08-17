/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

(function ($, Drupal, window, document, undefined) {

	 $(document).ready(function($){
      if (typeof WOW === 'function') {
        // Check if class exists, then initialize WOW object.
        new WOW().init();
      }
    });

	Drupal.behaviors.search = {
		attach: function (context, settings) {
			$('#searchForm').submit(function(e) {
				e.preventDefault();
				var search_type = $('#searchForm input[name="searchType"]:checked').val();
				var term = $('#searchForm #keyword').val();
				var reg = /^[\w ]+$/;
				if(!reg.test(term)) {
					alert("Error: Input contains invalid characters!");
					form.inputfield.focus();
				} else {
					var keyword = filter;
				}

				//var keyword = $('#searchForm #keyword').val();

				// people search
				if (search_type == 'people') {
					var url = "https://www-public.slac.stanford.edu/phonebook/dirsearch.aspx?lf=1&url=&gone=active&NAME=" + keyword;
				} else {
					var url = "http://www-psearch.slac.stanford.edu/SLACSearch/app/slac/index?style=mainSite&qt=" + keyword;
				}
				document.location = url;
			})
		}
	}


	Drupal.behaviors.responsiveMenuAndSearch = {
		attach: function (context, settings) {
			var mobileSearchTrigger = $('.mobile-search-trigger');

			if( mobileSearchTrigger.length == 0 ){
				$('<div class="mobile-search-trigger"><span></span></div>').insertBefore('#search-box');
				mobileSearchTrigger = $('.mobile-search-trigger');
			}

			if (!mobileSearchTrigger.hasClass('trigger-processed')) {
				mobileSearchTrigger.addClass('trigger-processed');
				mobileSearchTrigger.click(function(){
					var $this = $('#mobile-search-box');
					if( $this.is(':visible') ){
						$this.slideUp('fast');
						$('.right-menu-trigger').css('top', '42px');
					} else{
						$this.slideDown('fast');
						$('.right-menu-trigger').css('top', '123px');
					}
				});

				if( $('.left-menu-trigger').length == 0 ){
					$('<div class="left-menu-trigger"></div>').insertBefore('.page-basic.header.inside');
				}

				if( $('.right-menu-trigger').length == 0 ){
					$('<div class="right-menu-trigger"></div>').insertBefore('.page-basic.header.inside');
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

				$('.right-menu-trigger').click(function() {
					var $this = $(this);
					if( $this.hasClass("right-menu-active") ) {
						$this
						.removeClass('right-menu-active')
						.parents('.page-basic').find('> div:not(.sidebar-menu-right)').stop(true,true).animate({
							'marginRight': '0'
						})
					} else{
						$this
						.addClass('right-menu-active')
						.parents('.page-basic').find('> div:not(.sidebar-menu-right)').stop(true,true).animate({
							'marginRight': '30%'
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


	Drupal.behaviors.slacSearch = {
		attach: function(context) {
			$('#search-box').each(function(){
				$this= $(this);
				$this.find("#slac-search-options").hide();
				$this.hover(function(){
					$this.find("#slac-search-options").fadeIn("slow");
				},
				function(){
					$this.find("#slac-search-options").fadeOut();
				});
			})
		}
	}


})(jQuery, Drupal, this, this.document);
