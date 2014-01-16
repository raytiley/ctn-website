<?php
/**
 * @file
 * ctn_tv_schedule.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctn_tv_schedule_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ctn_channel_2_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Channel 2 Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nothing is scheduled for this day.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['id'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['table'] = 'field_data_cablecast_channel_reference';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['field'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['label'] = 'Channel';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['id'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['table'] = 'field_data_cablecast_show_reference';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['field'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['required'] = TRUE;
  /* Field: Content: Start Time */
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['id'] = 'cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['field'] = 'cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['label'] = '';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Start Time (cablecast_schedule_start_time) */
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['id'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['field'] = 'cablecast_schedule_start_time_value';
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
    'cablecast_schedule_item' => 'cablecast_schedule_item',
  );
  /* Filter criterion: Content: Start Time (cablecast_schedule_start_time) */
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['id'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['field'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['operator_id'] = 'cablecast_schedule_start_time_value_op';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['operator'] = 'cablecast_schedule_start_time_value_op';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['identifier'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['default_date'] = 'today';
  /* Filter criterion: Content: Channel ID (cablecast_channel_id) */
  $handler->display->display_options['filters']['cablecast_channel_id_value']['id'] = 'cablecast_channel_id_value';
  $handler->display->display_options['filters']['cablecast_channel_id_value']['table'] = 'field_data_cablecast_channel_id';
  $handler->display->display_options['filters']['cablecast_channel_id_value']['field'] = 'cablecast_channel_id_value';
  $handler->display->display_options['filters']['cablecast_channel_id_value']['value']['value'] = '2';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Pick Date';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'cablecast_channel_name_value' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Channel Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'watch/channel-2';
  $export['ctn_channel_2_schedule'] = $view;

  $view = new view();
  $view->name = 'ctn_channel_5_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Channel 5 Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nothing is scheduled for this day.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['id'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['table'] = 'field_data_cablecast_channel_reference';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['field'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['label'] = 'Channel';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['id'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['table'] = 'field_data_cablecast_show_reference';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['field'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['required'] = TRUE;
  /* Field: Content: Start Time */
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['id'] = 'cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['field'] = 'cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['label'] = '';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Start Time (cablecast_schedule_start_time) */
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['id'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['field'] = 'cablecast_schedule_start_time_value';
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
    'cablecast_schedule_item' => 'cablecast_schedule_item',
  );
  /* Filter criterion: Content: Start Time (cablecast_schedule_start_time) */
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['id'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['field'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['operator_id'] = 'cablecast_schedule_start_time_value_op';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['operator'] = 'cablecast_schedule_start_time_value_op';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['identifier'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['default_date'] = 'today';
  /* Filter criterion: Content: Channel ID (cablecast_channel_id) */
  $handler->display->display_options['filters']['cablecast_channel_id_value']['id'] = 'cablecast_channel_id_value';
  $handler->display->display_options['filters']['cablecast_channel_id_value']['table'] = 'field_data_cablecast_channel_id';
  $handler->display->display_options['filters']['cablecast_channel_id_value']['field'] = 'cablecast_channel_id_value';
  $handler->display->display_options['filters']['cablecast_channel_id_value']['value']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Pick Date';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'cablecast_channel_name_value' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Channel Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'watch/channel-5';
  $export['ctn_channel_5_schedule'] = $view;

  $view = new view();
  $view->name = 'schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nothing is scheduled for this day.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['id'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['table'] = 'field_data_cablecast_channel_reference';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['field'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['label'] = 'Channel';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['id'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['table'] = 'field_data_cablecast_show_reference';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['field'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['required'] = TRUE;
  /* Field: Content: Start Time */
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['id'] = 'cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['field'] = 'cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['label'] = '';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Start Time (cablecast_schedule_start_time) */
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['id'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['sorts']['cablecast_schedule_start_time_value']['field'] = 'cablecast_schedule_start_time_value';
  /* Contextual filter: Content: Channel Name (cablecast_channel_name) */
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['id'] = 'cablecast_channel_name_value';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['table'] = 'field_data_cablecast_channel_name';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['field'] = 'cablecast_channel_name_value';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['relationship'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['cablecast_channel_name_value']['limit'] = '0';
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
    'cablecast_schedule_item' => 'cablecast_schedule_item',
  );
  /* Filter criterion: Content: Start Time (cablecast_schedule_start_time) */
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['id'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['field'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['operator_id'] = 'cablecast_schedule_start_time_value_op';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['operator'] = 'cablecast_schedule_start_time_value_op';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['identifier'] = 'cablecast_schedule_start_time_value';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['default_date'] = 'today';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Pick Date';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'cablecast_channel_name_value' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Channel Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['schedule'] = $view;

  return $export;
}
