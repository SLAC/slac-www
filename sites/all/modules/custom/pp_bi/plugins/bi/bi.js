(function($) {
  Drupal.behaviors.biSettings = {
    attach: function(context, settings) {
      CKEDITOR.config.allowedContent = true;
      CKEDITOR.config.extraPlugins = 'widget';
    }
  }

  Drupal.behaviors.bi = {
    attach: function(context, settings) {

      $('iframe').each(function(){
        $(this).load(function(){
          $(this).contents().find('.block-insert').each(function() {
            var block = this;

            $(this).parents('html').once('block-insert').click(function(){
              $(block).removeClass('block-insert-active');
              updateBlockInsertButtonState();
            });

            $(this).once('block-insert').click(function(event){
              event.stopPropagation();

              $(block).addClass('block-insert-active');
              updateBlockInsertButtonState();
            });
          });
        });
      });

      function updateBlockInsertButtonState() {
        $('iframe').each(function(){
          var insertBlockIsActive = $(this).contents().find('.block-insert-active').length;

          if (insertBlockIsActive) {
            $(this).parents('.cke_inner').find('.cke_button__bi').addClass('cke_button_on').removeClass('cke_button_off');
          }
          else {
            $(this).parents('.cke_inner').find('.cke_button__bi').addClass('cke_button_off').removeClass('cke_button_on');
          }
        });
      };

      $('iframe.cke_wysiwyg_frame').contents().find('html').click(function(){
          $(this).find('.cke_button__bi').addClass('cke_button_off').removeClass('cke_button_on');
      });

    }
  };

  Drupal.wysiwyg.plugins.bi = {

    /**
     * Get the active block from the iframe.
     */
    getActiveBlockInsert: function(instanceId) {
      return $('#cke_' + instanceId).find('iframe').contents().find('.block-insert-active');
    },

    /**
     * Method called when wysiwyg button clicked.
     **/
    invoke: function (data, settings, instanceId) {
      if (data.format == 'html') {
        var insert = new InsertBlock(instanceId);
        var $activeBlock = this.getActiveBlockInsert(instanceId);

        if ($activeBlock.length > 0) {
          var bean_bid = $activeBlock.data('block_insert');
          // Update existing block.
          insert.onSelect(bean_bid, settings.global);
        }
        else {
          // Insert new block.
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

      Drupal.attachBehaviors();
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
    /**
     * Display popup to insert new block.
     */
    prompt: function (settings) {
      Drupal.bi.popups.blockSelectDialog($.proxy(this, 'insert'), settings);
    },

  /**
   * On selection of a media item, display item's display configuration form.
   */
  onSelect: function (bean_bid, settings) {
    Drupal.bi.popups.blockUpdateDialog($.proxy(this, 'update'), bean_bid, settings);
  },

    /**
   * Insert HTML to the WYSIWYG when block has been created. Set the macro.
   */
    insert: function (block) {
      var markup = bi_create_markup(block);
      macro = bi_create_macro(markup);

      // Insert placeholder markup into wysiwyg.
      Drupal.wysiwyg.instances[this.instanceId].insert(markup);
      Drupal.attachBehaviors();

      // Store macro/markup pair in the bi_tagmap.
      bi_ensure_tagmap();
      Drupal.settings.bi_tagmap[macro] = markup;
    },

    /**
     * Update already inserted block.
     */
    update: function (block) {
      var markup = bi_create_markup(block);
      var macro = bi_create_macro(markup);

      // Replace block old markup with new one.
      $('#cke_' + this.instanceId).find('iframe').contents().find('.block-insert-active').html($(markup).html()).removeClass('block-insert-active');
      updateBlockInsertButtonState();

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

  /**
   * Create a markup from block object.
   */
  function bi_create_markup(block) {
    return '<div class="block-insert" data-block_insert="' + block.bid + '" contenteditable="false">' + block.html + '<!-- block-insert --></div>';
  }

})(jQuery);
