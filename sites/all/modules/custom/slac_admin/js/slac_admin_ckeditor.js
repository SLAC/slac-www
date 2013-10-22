(function ($) {
    if (typeof CKEDITOR != 'undefined') {
        CKEDITOR.on('dialogDefinition', function( ev ) {
            var dialogName = ev.data.name;
            var dialogDefinition = ev.data.definition;
            switch (dialogName) {
                case 'image': //Image Properties dialog
                    // Remove Link tab.
                    dialogDefinition.removeContents('Link');
                    break;
            }
        });
    }

})(jQuery);