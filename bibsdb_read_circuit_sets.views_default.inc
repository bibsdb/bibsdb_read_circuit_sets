<?php
/**
 * @file
 * bibsdb_read_circuit_sets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bibsdb_read_circuit_sets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bibsdb_rcs_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bibsdb Read Circuit Set Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'rcs-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'content-blocks--wrapper';
  $handler->display->display_options['style_options']['column_classes'] = '';
  $handler->display->display_options['style_options']['first_column_classes'] = '';
  $handler->display->display_options['style_options']['last_column_classes'] = '';
  $handler->display->display_options['style_options']['row_classes'] = 'content-blocks--inner  content-blocks--three';
  $handler->display->display_options['style_options']['first_row_classes'] = '';
  $handler->display->display_options['style_options']['last_row_classes'] = 'last';
  $handler->display->display_options['style_options']['default_classes'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Read Circuit Set Author Last Name */
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_lastname']['id'] = 'field_bibsdb_rcs_author_lastname';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_lastname']['table'] = 'field_data_field_bibsdb_rcs_author_lastname';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_lastname']['field'] = 'field_bibsdb_rcs_author_lastname';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_lastname']['element_label_colon'] = FALSE;
  /* Field: Content: Read Circuit Set Author First Name */
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['id'] = 'field_bibsdb_rcs_author_firsname';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['table'] = 'field_data_field_bibsdb_rcs_author_firsname';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['field'] = 'field_bibsdb_rcs_author_firsname';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['alter']['text'] = '[field_bibsdb_rcs_author_lastname], [field_bibsdb_rcs_author_firsname] ';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_author_firsname']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Read Circuit Set Image */
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['id'] = 'field_bibsdb_rcs_image';
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['table'] = 'field_data_field_bibsdb_rcs_image';
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['field'] = 'field_bibsdb_rcs_image';
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['element_class'] = 'rcs-image';
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_bibsdb_rcs_image']['settings'] = array(
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'bibsdb_rcs',
      'breakpoint_2' => '500',
      'style_2' => 'bibsdb_rcs',
      'max_style' => 'bibsdb_rcs',
      'fallback_style' => 'bibsdb_rcs',
    ),
  );
  /* Field: Content: Read Circuit Set Description */
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['id'] = 'field_bibsdb_rcs_description';
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['table'] = 'field_data_field_bibsdb_rcs_description';
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['field'] = 'field_bibsdb_rcs_description';
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['alter']['text'] = '[field_bibsdb_rcs_image][field_bibsdb_rcs_description]';
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_description']['element_default_classes'] = FALSE;
  /* Field: Content: Read Circuit Set Page Count */
  $handler->display->display_options['fields']['field_bibsdb_rcs_page_count']['id'] = 'field_bibsdb_rcs_page_count';
  $handler->display->display_options['fields']['field_bibsdb_rcs_page_count']['table'] = 'field_data_field_bibsdb_rcs_page_count';
  $handler->display->display_options['fields']['field_bibsdb_rcs_page_count']['field'] = 'field_bibsdb_rcs_page_count';
  $handler->display->display_options['fields']['field_bibsdb_rcs_page_count']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_rcs_page_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_page_count']['element_label_colon'] = FALSE;
  /* Field: Content: Read Circuit Set Publisher */
  $handler->display->display_options['fields']['field_bibsdb_rcs_publisher']['id'] = 'field_bibsdb_rcs_publisher';
  $handler->display->display_options['fields']['field_bibsdb_rcs_publisher']['table'] = 'field_data_field_bibsdb_rcs_publisher';
  $handler->display->display_options['fields']['field_bibsdb_rcs_publisher']['field'] = 'field_bibsdb_rcs_publisher';
  $handler->display->display_options['fields']['field_bibsdb_rcs_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_rcs_publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_publisher']['element_label_colon'] = FALSE;
  /* Field: Content: Read Circuit Set Year */
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['id'] = 'field_bibsdb_rcs_year';
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['table'] = 'field_data_field_bibsdb_rcs_year';
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['field'] = 'field_bibsdb_rcs_year';
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['alter']['text'] = '[field_bibsdb_rcs_publisher] [field_bibsdb_rcs_year]. [field_bibsdb_rcs_page_count] sider.';
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_rcs_year']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Read Circuit Set Author Last Name (field_bibsdb_rcs_author_lastname) */
  $handler->display->display_options['sorts']['field_bibsdb_rcs_author_lastname_value']['id'] = 'field_bibsdb_rcs_author_lastname_value';
  $handler->display->display_options['sorts']['field_bibsdb_rcs_author_lastname_value']['table'] = 'field_data_field_bibsdb_rcs_author_lastname';
  $handler->display->display_options['sorts']['field_bibsdb_rcs_author_lastname_value']['field'] = 'field_bibsdb_rcs_author_lastname_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'read_circuit_set' => 'read_circuit_set',
  );

  /* Display: Read Circuit Set Grid */
  $handler = $view->new_display('panel_pane', 'Read Circuit Set Grid', 'panel_pane_1');
  $translatables['bibsdb_rcs_grid'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_bibsdb_rcs_author_lastname], [field_bibsdb_rcs_author_firsname] '),
    t('[field_bibsdb_rcs_image][field_bibsdb_rcs_description]'),
    t('[field_bibsdb_rcs_publisher] [field_bibsdb_rcs_year]. [field_bibsdb_rcs_page_count] sider.'),
    t('Read Circuit Set Grid'),
    t('View panes'),
  );
  $export['bibsdb_rcs_grid'] = $view;

  return $export;
}
