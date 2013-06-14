<?php
/**
 * @file
 * ca_portfolio.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_portfolio_user_default_roles() {
  $roles = array();

  // Exported role: portfolio admin.
  $roles['portfolio admin'] = array(
    'name' => 'portfolio admin',
    'weight' => 6,
    'machine_name' => 'portfolio_admin',
  );

  return $roles;
}
