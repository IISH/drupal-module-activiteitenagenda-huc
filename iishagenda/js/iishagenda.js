(function ($, Drupal, window, document, undefined) {

    function deselect(e) {
        e.parent().find('.pop').slideFadeToggle(function() {
            e.removeClass('selected');
        });
    }

    jQuery.fn.slideFadeToggle = function(easing, callback) {
        return this.animate({ opacity: 'toggle', height: 'toggle' }, 'fast', easing, callback);
    };

    jQuery(document).ready(function($) {

        $('.messagepop-link').on('click', function() {
            if($(this).hasClass('selected')) {
                deselect($(this));
            } else {
                $(this).addClass('selected');
                $(this).parent().find('.pop').slideFadeToggle();
            }
            return false;
        });
    });

})(jQuery, Drupal, this, this.document);