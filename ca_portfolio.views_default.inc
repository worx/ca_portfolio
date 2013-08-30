<?php
/**
 * @file
 * ca_portfolio.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_portfolio_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_portfolio_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Portfolio Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'views_bulk_operations' => 'views_bulk_operations',
    'edit_node' => 'edit_node',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ca_portfolio' => 'ca_portfolio',
  );

  /* Display: CA Portfolio: Admin */
  $handler = $view->new_display('panel_pane', 'CA Portfolio: Admin', 'ca_portfolio_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Portfolio: Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_portfolio_admin'] = $view;

  $view = new view();
  $view->name = 'ca_portfolio_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Portfolio List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['id'] = 'field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['table'] = 'field_data_field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['field'] = 'field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['label'] = '';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['type'] = 'link_plain';
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['id'] = 'field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['table'] = 'field_data_field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['field'] = 'field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['path'] = '[field_ca_portfolio_p_website]';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['settings'] = array(
    'image_style' => 'crop_medium_square',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_ca_portfolio_p_website]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'ca_portfolio' => 'ca_portfolio',
  );

  /* Display: CA Portfolio: List Template One */
  $handler = $view->new_display('panel_pane', 'CA Portfolio: List Template One', 'ca_portfolio_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Portfolio: List Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ca_portfolio_list'] = $view;

  $view = new view();
  $view->name = 'ca_portfolio_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Portfolio Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['id'] = 'field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['table'] = 'field_data_field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['field'] = 'field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['label'] = '';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['type'] = 'link_plain';
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['id'] = 'field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['table'] = 'field_data_field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['field'] = 'field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['path'] = '[field_ca_portfolio_p_website]';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['settings'] = array(
    'image_style' => 'crop_medium_square',
    'image_link' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'ca_portfolio' => 'ca_portfolio',
  );

  /* Display: CA Portfolio: Node Template One */
  $handler = $view->new_display('panel_pane', 'CA Portfolio: Node Template One', 'ca_portfolio_node_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Portfolio: Node Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Portfolio: Node Template Two */
  $handler = $view->new_display('panel_pane', 'CA Portfolio: Node Template Two', 'ca_portfolio_node_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['id'] = 'field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['table'] = 'field_data_field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['field'] = 'field_ca_portfolio_p_website';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['label'] = '';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ca_portfolio_p_website']['type'] = 'link_plain';
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['id'] = 'field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['table'] = 'field_data_field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['field'] = 'field_ca_portfolio_p_screenshot';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['path'] = '[field_ca_portfolio_p_website]';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_portfolio_p_screenshot']['settings'] = array(
    'image_style' => 'crop_large_landscape',
    'image_link' => '',
  );
  $handler->display->display_options['pane_title'] = 'CA Portfolio: Node Template Two';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ca_portfolio_node'] = $view;

  return $export;
}
