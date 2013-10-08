(function($) {
  namespace('Drupal.bi.popups');

  Drupal.bi.popups.blockSelectDialog = function (onSelect, globalOptions, pluginOptions, widgetOptions) {
    var options = Drupal.bi.popups.blockSelectDialog.getDefaults();
    options.global = $.extend({}, options.global, globalOptions);
    options.plugins = pluginOptions;
    options.widget = $.extend({}, options.widget, widgetOptions);

    // Create it as a modal window.
    var browserSrc = options.widget.src;
    if ($.isArray(browserSrc) && browserSrc.length) {
      browserSrc = browserSrc[browserSrc.length - 1];
    }
    // Params to send along to the iframe.  WIP.
    var params = {};
    $.extend(params, options.global);
    params.plugins = options.plugins;

    browserSrc += '&' + $.param(params);
    var mediaIframe = Drupal.bi.popups.getPopupIframe(browserSrc, 'blockInsertBrowser');
    // Attach the onLoad event
    mediaIframe.bind('load', options, options.widget.onLoad);
    /**
     * Setting up the modal dialog
     */

    var ok = 'OK';
    var cancel = 'Cancel';
    var notSelected = 'You have not selected anything!';

    if (Drupal && Drupal.t) {
      ok = Drupal.t(ok);
      cancel = Drupal.t(cancel);
      notSelected = Drupal.t(notSelected);
    }

    // @todo: let some options come through here. Currently can't be changed.
    var dialogOptions = options.dialog;

    dialogOptions.buttons[ok] = function () {
      var selected = this.contentWindow.Drupal.media.browser.selectedMedia;
      if (selected.length < 1) {
        alert(notSelected);
        return;
      }
      onSelect(selected);
      $(this).dialog("destroy");
      $(this).remove();
    };

    dialogOptions.buttons[cancel] = function () {
      $(this).dialog("destroy");
      $(this).remove();
    };

    Drupal.media.popups.setDialogPadding(mediaIframe.dialog(dialogOptions));
    // Remove the title bar.
    mediaIframe.parents(".ui-dialog").find(".ui-dialog-titlebar").remove();
    Drupal.media.popups.overlayDisplace(mediaIframe.parents(".ui-dialog"));

    mediaIframe.parents(".ui-dialog").find("a.fake-submit").once('fake-submit').bind('click', Drupal.bi.popups.blockSelectDialog.submit);
    mediaIframe.parents(".ui-dialog").find("a.fake-cancel").once('fake-cancel').bind('click', Drupal.bi.popups.blockSelectDialog.submit);

    return mediaIframe;
  };

  Drupal.bi.popups.blockSelectDialog.submit  = function () {
    var buttons = $(parent.window.document.body).find('#blockInsertBrowser').parent('.ui-dialog').find('.ui-dialog-buttonpane button');
    if ($(this).hasClass('fake-cancel')) {
      buttons[1].click();
    } else {
      buttons[0].click();
    }
    return false;
  }

  Drupal.bi.popups.blockSelectDialog.getDefaults = function () {
    return {
      global: {
        types: [], // Types to allow, defaults to all.
        activePlugins: [] // If provided, a list of plugins which should be enabled.
      },
      widget: { // Settings for the actual iFrame which is launched.
        src: Drupal.settings.bi.browserUrl, // Src of the media browser (if you want to totally override it)
        onLoad: Drupal.media.popups.mediaBrowser.mediaBrowserOnLoad // Onload function when iFrame loads.
      },
      dialog: Drupal.media.popups.getDialogOptions()
    };
  };

  /**
 * Get an iframe to serve as the dialog's contents. Common to both plugins.
 */
Drupal.bi.popups.getPopupIframe = function (src, id, options) {
  var defaults = {width: '800px', scrolling: 'auto'};
  var options = $.extend({}, defaults, options);

  return $('<iframe class="bi-modal-frame"/>')
  .attr('src', src)
  .attr('width', options.width)
  .attr('id', id)
  .attr('scrolling', options.scrolling);
};

})(jQuery);


