(function($) {

  Drupal.CTools = Drupal.CTools || {};
  Drupal.CTools.Modal = Drupal.CTools.Modal || {};
  Drupal.block_insert = Drupal.block_insert || {};

  //Define the WYSIWYG plugin.
  Drupal.wysiwyg.plugins.block_insert = {
    invoke: function (data, settings, instanceId) {
      if (data.format == 'html') {
          $.get(
            Drupal.settings.basePath + 'block/add/pp-bi/nojs',
            function(data) {
              Drupal.CTools.Modal.show()
              $('#modal-title').html(Drupal.t('Add a new block'));
              $('#modal-content').html(data);
            }
          );
      }
      //Drupal.wysiwyg.instances[instanceId].insert('content');
    }
  };
})(jQuery);
