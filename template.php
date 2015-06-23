<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Omega VFP theme.
 */

function omega_vfp_breadcrumb($variables) {
  $sep = ' &raquo; ';
  if (count($variables['breadcrumb']) > 0) {
    return implode($sep, $variables['breadcrumb']);
  }
}