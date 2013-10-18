(function ($) {
    namespace('Drupal.media.popups');

    /**
     * Returns the commonly used options for the dialog.
     */
    Drupal.media.popups.getDialogOptions = function () {
        return {
            buttons: {},
            dialogClass: 'media-wrapper',
            modal: true,
            draggable: false,
            resizable: false,
            minWidth: 600,
            width: 900,
            height: 650,
            position: 'center',
            overlay: {
                backgroundColor: '#000000',
                opacity: 0.4
            },
            zIndex: 10000,
            close: function (event, ui) {
                $(event.target).remove();
            }
        };
    };
})(jQuery);
