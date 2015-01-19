<?php
/**
 * @file
 * bibsdb_read_circuit_sets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibsdb_read_circuit_sets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create read_circuit_set content'.
  $permissions['create read_circuit_set content'] = array(
    'name' => 'create read_circuit_set content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any read_circuit_set content'.
  $permissions['delete any read_circuit_set content'] = array(
    'name' => 'delete any read_circuit_set content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own read_circuit_set content'.
  $permissions['delete own read_circuit_set content'] = array(
    'name' => 'delete own read_circuit_set content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any read_circuit_set content'.
  $permissions['edit any read_circuit_set content'] = array(
    'name' => 'edit any read_circuit_set content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own read_circuit_set content'.
  $permissions['edit own read_circuit_set content'] = array(
    'name' => 'edit own read_circuit_set content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
