(function($) {

//  Drupal.CTools = Drupal.CTools || {};
//  Drupal.CTools.Modal = Drupal.CTools.Modal || {};
//  Drupal.bi = Drupal.bi || {};
//

  Drupal.wysiwyg.plugins.bi = {
    isNode: function(node) {
      return $(node).is('img.media-element');
    },

    /**
     * Method called when wysiwyg button clicked.
     **/
    invoke: function (data, settings, instanceId) {
      if (data.format == 'html') {
        var insert = new InsertBlock(instanceId);
        if (this.isNode(data.node)) {
          // Change the view mode for already-inserted media.
          var media_file = extract_file_info($(data.node));
          insert.onSelect([media_file]);
        }
        else {
          // Insert new media.
          insert.prompt(settings.global);
        }
//          $.get(
//            Drupal.settings.basePath + 'block/add/pp-bi/nojs',
//            function(data) {
//              Drupal.CTools.Modal.show()
//              $('#modal-title').html(Drupal.t('Add a new block'));
//              $('#modal-content').html(data);
//            }
//          );
      }
      //Drupal.wysiwyg.instances[instanceId].insert('content');
    }
  };

  var InsertBlock = function (instance_id) {
    this.instanceId = instance_id;
    return this;
  };

  InsertBlock.prototype = {
    prompt: function (settings) {
      Drupal.bi.popups.blockSelectDialog($.proxy(this, 'onSelect'), settings);
    },

    /**
    * On selection of a media item, display item's display configuration form.
    */
   onSelect: function (media_files) {
     this.block = media_files[0];
     Drupal.media.popups.mediaStyleSelector(this.block, $.proxy(this, 'insert'), {});
   }
  };

})(jQuery);
