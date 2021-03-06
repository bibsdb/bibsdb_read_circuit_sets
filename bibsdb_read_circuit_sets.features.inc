<?php
/**
 * @file
 * bibsdb_read_circuit_sets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_read_circuit_sets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bibsdb_read_circuit_sets_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bibsdb_read_circuit_sets_image_default_styles() {
  $styles = array();

  // Exported image style: bibsdb_rcs.
  $styles['bibsdb_rcs'] = array(
    'name' => 'bibsdb_rcs',
    'label' => 'bibsdb_rcs',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 140,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bibsdb_read_circuit_sets_node_info() {
  $items = array(
    'read_circuit_set' => array(
      'name' => t('Read Circuit Set'),
      'base' => 'node_content',
      'description' => t('A title bought as read circuit set.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
