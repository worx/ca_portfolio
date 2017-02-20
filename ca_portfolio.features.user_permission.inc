<?php
/**
 * @file
 * ca_portfolio.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_portfolio_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ca_portfolio content'.
  $permissions['create ca_portfolio content'] = array(
    'name' => 'create ca_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'portfolio admin' => 'portfolio admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ca_portfolio content'.
  $permissions['delete any ca_portfolio content'] = array(
    'name' => 'delete any ca_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'portfolio admin' => 'portfolio admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ca_portfolio content'.
  $permissions['delete own ca_portfolio content'] = array(
    'name' => 'delete own ca_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'portfolio admin' => 'portfolio admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ca_portfolio content'.
  $permissions['edit any ca_portfolio content'] = array(
    'name' => 'edit any ca_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'portfolio admin' => 'portfolio admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ca_portfolio content'.
  $permissions['edit own ca_portfolio content'] = array(
    'name' => 'edit own ca_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'portfolio admin' => 'portfolio admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
