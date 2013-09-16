<?php

// Overridden to change lightboxmodal to lightbox.

class slac_admin_lightbox2_handler_field_lightbox2 extends lightbox2_handler_field_lightbox2 {
  /**
   * Render the trigger field and its linked popup information.
   */
  function render($values) {
    // We need to have multiple unique IDs, one for each record.
    static $i = 0;
    static $link;

    if (!empty($this->options['trigger_field'])) {


      $image_style = $values->field_field_image[0]['rendered']['#image_style'];
      $image_url = $values->field_field_image[0]['raw']['uri'];
      $link = image_style_url($image_style, $image_url);

      // Get the token information and generate the value for the popup and the
      // caption.
      $tokens = $this->get_render_tokens($this->options['alter']);
      $popup = filter_xss_admin($this->options['popup']);
      $caption = filter_xss_admin($this->options['caption']);
      $popup = strtr($popup, $tokens);
      $caption = strtr($caption, $tokens);

      $i++;

      // The outside div is there to hide all of the divs because if the specific lightbox
      // div is hidden it won't show up as a lightbox.  We also specify a group
      // in the rel attribute in order to link the whole View together for paging.
      $group_name = !empty($this->options['custom_group']) ? $this->options['custom_group'] : ($this->options['rel_group'] ? 'lightbox-popup-' . $this->view->name . '-' . implode('/', $this->view->args) : '');
      // Overridden to change lightboxmodal to lightbox.
      return "<a href='$link'  rel='lightbox[{$group_name}][" . $caption . "]' class='lightbox'>" . $tokens["[{$this->options['trigger_field']}]"] . "</a>";
    }
    else {
      return;
    }
  }
}