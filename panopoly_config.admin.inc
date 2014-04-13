<?php

/**
 * @file
 * Admin page callbacks for the panopoly config module.
 */

/**
 * Configuration callback for Panopoly Config.
 */
function panopoly_config_form($form, &$form_state, $group_name = '') {
  $variable_group_name = _panopoly_config_get_variable_group_name($group_name);
  return drupal_get_form('variable_group_form', $variable_group_name);
}
