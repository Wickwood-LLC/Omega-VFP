<?php

/**
 * @file
 * Contains the theme function override for 'breadcrumb'.
 */

/**
 * Returns HTML for a breadcrumb trail.
 *
 * @ingroup themeable
 */
function omega_vfp_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $sep = ' &raquo; ';

  if (count($breadcrumb) > 1) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    // Override Drupal core breadcrumb item imploding (no arrow).
    $output .= '<div class="breadcrumb">' . implode($sep, $breadcrumb) . '</div>';
    return $output;
  }
}
