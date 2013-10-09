(function($) {
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
      }
    }
  };

  var InsertBlock = function (instance_id) {
    this.instanceId = instance_id;
    return this;
  };

  InsertBlock.prototype = {
    prompt: function (settings) {
      Drupal.bi.popups.blockSelectDialog($.proxy(this, 'insert'), settings);
    },

   /**
   * Insert HTML to the WYSIWYG when block has been created. Set the macro.
   */
    insert: function (block) {
      var markup = '<div class="block-insert" data-block_insert="' + block.bid + '">' + block.html + '</div>',
            macro = '{{' + block.bid + '}}';

      // Insert placeholder markup into wysiwyg.
      Drupal.wysiwyg.instances[this.instanceId].insert(markup);
      // Store macro/markup pair in the tagmap.
      Drupal.settings.tagmap = Drupal.settings.tagmap || {};
      Drupal.settings.tagmap[macro] = markup;
    }
  };

})(jQuery);
