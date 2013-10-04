(function($) {
  //Define the WYSIWYG plugin.
  Drupal.wysiwyg.plugins.block_insert = {
    invoke: function (data, settings, instanceId) {
      if (data.format == 'html') {
        //alert(Drupal.t('This button does nothing now.'));
          /*Drupal.CTools.Modal.show()
          $('#modal-title').html(Drupal.t('Title'));
          $('#modal-content').html('content here');*/
          $.get(Drupal.settings.basePath + 'block/add/pp-bi/nojs/1');
      }
    }
  };
})(jQuery);
