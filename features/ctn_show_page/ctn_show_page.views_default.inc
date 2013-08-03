<?php
/**
 * @file
 * ctn_show_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctn_show_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ctn_show_upcoming_runs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming Runs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Runs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'cablecast_schedule_start_time' => 'cablecast_schedule_start_time',
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
    'cablecast_schedule_start_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This doesn\'t have any upcoming airings. Drop us a line if you would like it aired again. programming@ctn5.org';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Show */
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['id'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['table'] = 'field_data_cablecast_show_reference';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['field'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['ui_name'] = 'Show';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['label'] = 'Show';
  $handler->display->display_options['relationships']['cablecast_show_reference_target_id']['required'] = TRUE;
  /* Relationship: Channel */
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['id'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['table'] = 'field_data_cablecast_channel_reference';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['field'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['ui_name'] = 'Channel';
  $handler->display->display_options['relationships']['cablecast_channel_reference_target_id']['label'] = 'Channel';
  /* Field: Content: Channel Name */
  $handler->display->display_options['fields']['cablecast_channel_name']['id'] = 'cablecast_channel_name';
  $handler->display->display_options['fields']['cablecast_channel_name']['table'] = 'field_data_cablecast_channel_name';
  $handler->display->display_options['fields']['cablecast_channel_name']['field'] = 'cablecast_channel_name';
  $handler->display->display_options['fields']['cablecast_channel_name']['relationship'] = 'cablecast_channel_reference_target_id';
  $handler->display->display_options['fields']['cablecast_channel_name']['label'] = '';
  $handler->display->display_options['fields']['cablecast_channel_name']['element_label_colon'] = FALSE;
  /* Field: Content: Start Time */
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['id'] = 'cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['table'] = 'field_data_cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['field'] = 'cablecast_schedule_start_time';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['label'] = '';
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_schedule_start_time']['settings'] = array(
    'format_type' => 'ctn_schedule_with_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'cablecast_show_reference_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'cablecast_show' => 'cablecast_show',
  );
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
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['operator'] = '>';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['cablecast_schedule_start_time_value']['default_date'] = 'today';
  $export['ctn_show_upcoming_runs'] = $view;

  return $export;
}
