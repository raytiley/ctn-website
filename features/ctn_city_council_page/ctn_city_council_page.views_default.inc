<?php
/**
 * @file
 * ctn_city_council_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctn_city_council_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'city_council';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Counil';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portland City Council Meetings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'cablecast_show_event_date' => 'cablecast_show_event_date',
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
    'cablecast_show_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['cablecast_show_event_date']['id'] = 'cablecast_show_event_date';
  $handler->display->display_options['fields']['cablecast_show_event_date']['table'] = 'field_data_cablecast_show_event_date';
  $handler->display->display_options['fields']['cablecast_show_event_date']['field'] = 'cablecast_show_event_date';
  $handler->display->display_options['fields']['cablecast_show_event_date']['label'] = 'Aired On';
  $handler->display->display_options['fields']['cablecast_show_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Event Date (cablecast_show_event_date) */
  $handler->display->display_options['sorts']['cablecast_show_event_date_value']['id'] = 'cablecast_show_event_date_value';
  $handler->display->display_options['sorts']['cablecast_show_event_date_value']['table'] = 'field_data_cablecast_show_event_date';
  $handler->display->display_options['sorts']['cablecast_show_event_date_value']['field'] = 'cablecast_show_event_date_value';
  $handler->display->display_options['sorts']['cablecast_show_event_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Project (cablecast_project_reference) */
  $handler->display->display_options['filters']['cablecast_project_reference_target_id']['id'] = 'cablecast_project_reference_target_id';
  $handler->display->display_options['filters']['cablecast_project_reference_target_id']['table'] = 'field_data_cablecast_project_reference';
  $handler->display->display_options['filters']['cablecast_project_reference_target_id']['field'] = 'cablecast_project_reference_target_id';
  $handler->display->display_options['filters']['cablecast_project_reference_target_id']['value'] = array(
    23436 => '23436',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'portland-city-council';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'City Council';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['city_council'] = $view;

  return $export;
}