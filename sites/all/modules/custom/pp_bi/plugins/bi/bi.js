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
    },

    /**
   * Attach function, called when a rich text editor loads.
   * This finds all [[tags]] and replaces them with the html
   * that needs to show in the editor.
   *
   * This finds all JSON macros and replaces them with the HTML placeholder
   * that will show in the editor.
   */
    attach: function (content, settings, instanceId) {
      bi_ensure_tagmap();

      var bi_tagmap = Drupal.settings.bi_tagmap,
      matches = content.match(/\[block_insert\]\d*\[\/block_insert\]/g);

      if (matches) {
        for (var index in matches) {
          var macro = matches[index];

          if (bi_tagmap[macro]) {
            content = content.replace(macro, bi_tagmap[macro]);
          }
          else {
            debug.debug("Could not find content for " + macro);
          }
        }
      }
      return content;
    },

    /**
    * Detach function, called when a rich text editor detaches.
    */
    detach: function (content, settings, instanceId) {
      bi_ensure_tagmap();
      var bi_tagmap = Drupal.settings.bi_tagmap,
      i = 0,
      markup,
      macro;

      var matches = content.match(/<div class="block-insert(.)*<!-- block-insert --><\/div>/gi);
      if (matches) {
        for (i = 0; i < matches.length; i++) {
          markup = matches[i];
          macro = bi_create_macro(markup);
          bi_tagmap[macro] = markup;
          content = content.replace(markup, macro);
        }
      }

      return content;
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
      var markup = '<div class="block-insert" data-block_insert="' + block.bid + '">' + block.html + '<!-- block-insert --></div>',
      macro = bi_create_macro(markup);

      // Insert placeholder markup into wysiwyg.
      Drupal.wysiwyg.instances[this.instanceId].insert(markup);
      // Store macro/markup pair in the bi_tagmap.
      bi_ensure_tagmap();
      Drupal.settings.bi_tagmap[macro] = markup;
    }
  };

  /**
   * Ensure that block insert tagmap initialized.
   */
  function bi_ensure_tagmap () {
    Drupal.settings.bi_tagmap = Drupal.settings.bi_tagmap || {};
  }

  /**
   * Create a macro token from the block.
   */
  function bi_create_macro(html) {
    return '[block_insert]' + $(html).data('block_insert') + '[/block_insert]';
  }

})(jQuery);
