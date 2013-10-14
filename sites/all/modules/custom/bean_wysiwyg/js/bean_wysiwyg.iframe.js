(function($) {

// Call parent window function.
$.fn.blockSelectDialogFinalizeSelection = function(bid) {
  // Set the id of the bean block to insert.
  parent.Drupal.bean_wysiwyg.popups.blockSelectDialog.selectedBlock = bid;
  // Click on dialog "OK" button.
  var buttons = $(parent.window.document.body).find('#blockInsertBrowser').parent('.ui-dialog').find('.ui-dialog-buttonpane button');
  buttons[0].click();
};

})(jQuery);


