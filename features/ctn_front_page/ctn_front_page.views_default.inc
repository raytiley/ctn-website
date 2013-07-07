<?php
/**
 * @file
 * ctn_front_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctn_front_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ctn_front_page_banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Banner';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: ctn_show_banner_image */
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['id'] = 'field_ctn_show_banner_image';
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['table'] = 'field_data_field_ctn_show_banner_image';
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['field'] = 'field_ctn_show_banner_image';
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['settings'] = array(
    'image_style' => 'front_page_banner',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = 'test';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'field_data_cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  /* Field: Content: Show ID */
  $handler->display->display_options['fields']['cablecast_show_id']['id'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['table'] = 'field_data_cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['field'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_id']['alter']['text'] = '[field_ctn_show_banner_image]
<div class="container">
<div class="carousel-caption">
<h1>[title]</h1>
<p class="lead">
[cablecast_show_comments]
</p>
<a href="[path]" class="btn btn-large btn-primary">Watch Now</a>
</div>
</div>';
  $handler->display->display_options['fields']['cablecast_show_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
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
    'cablecast_show' => 'cablecast_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: ctn_show_banner_image (field_ctn_show_banner_image:fid) */
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['id'] = 'field_ctn_show_banner_image_fid';
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['table'] = 'field_data_field_ctn_show_banner_image';
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['field'] = 'field_ctn_show_banner_image_fid';
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['operator'] = 'not empty';
  $export['ctn_front_page_banner'] = $view;

  $view = new view();
  $view->name = 'new_shows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Shows';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = 'test';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'field_data_cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  /* Field: Content: Show ID */
  $handler->display->display_options['fields']['cablecast_show_id']['id'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['table'] = 'field_data_cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['field'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_id']['alter']['text'] = '[cablecast_show_thumbnail]
<div class="container">
<div class="carousel-caption">
<h1>[title]</h1>
<p class="lead">
[cablecast_show_comments]
</p>
<a href="[path]" class="btn btn-large btn-primary">Watch Now</a>
</div>
</div>';
  $handler->display->display_options['fields']['cablecast_show_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
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
    'cablecast_show' => 'cablecast_show',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $export['new_shows'] = $view;

  $view = new view();
  $view->name = 'program_view_template';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Program View Template';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Thumbnail (cablecast_show_thumbnail:fid) */
  $handler->display->display_options['relationships']['cablecast_show_thumbnail_fid']['id'] = 'cablecast_show_thumbnail_fid';
  $handler->display->display_options['relationships']['cablecast_show_thumbnail_fid']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['relationships']['cablecast_show_thumbnail_fid']['field'] = 'cablecast_show_thumbnail_fid';
  $handler->display->display_options['relationships']['cablecast_show_thumbnail_fid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['cablecast_project_reference_target_id']['id'] = 'cablecast_project_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_project_reference_target_id']['table'] = 'field_data_cablecast_project_reference';
  $handler->display->display_options['relationships']['cablecast_project_reference_target_id']['field'] = 'cablecast_project_reference_target_id';
  $handler->display->display_options['relationships']['cablecast_project_reference_target_id']['required'] = TRUE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'front_page_medium',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Show ID */
  $handler->display->display_options['fields']['cablecast_show_id']['id'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['table'] = 'field_data_cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['field'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_id']['alter']['text'] = '<a class="thumbnail" href="[path]">
[cablecast_show_thumbnail]
<span class="play play-small"></span>
</a>';
  $handler->display->display_options['fields']['cablecast_show_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Sort criterion: Content: Event Date (cablecast_show_event_date) */
  $handler->display->display_options['sorts']['cablecast_show_event_date_value']['id'] = 'cablecast_show_event_date_value';
  $handler->display->display_options['sorts']['cablecast_show_event_date_value']['table'] = 'field_data_cablecast_show_event_date';
  $handler->display->display_options['sorts']['cablecast_show_event_date_value']['field'] = 'cablecast_show_event_date_value';
  $handler->display->display_options['sorts']['cablecast_show_event_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Project Name (cablecast_project_name) */
  $handler->display->display_options['arguments']['cablecast_project_name_value']['id'] = 'cablecast_project_name_value';
  $handler->display->display_options['arguments']['cablecast_project_name_value']['table'] = 'field_data_cablecast_project_name';
  $handler->display->display_options['arguments']['cablecast_project_name_value']['field'] = 'cablecast_project_name_value';
  $handler->display->display_options['arguments']['cablecast_project_name_value']['relationship'] = 'cablecast_project_reference_target_id';
  $handler->display->display_options['arguments']['cablecast_project_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['cablecast_project_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['cablecast_project_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['cablecast_project_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['cablecast_project_name_value']['limit'] = '0';
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
    'cablecast_show' => 'cablecast_show',
  );
  /* Filter criterion: Content: Thumbnail (cablecast_show_thumbnail:fid) */
  $handler->display->display_options['filters']['cablecast_show_thumbnail_fid']['id'] = 'cablecast_show_thumbnail_fid';
  $handler->display->display_options['filters']['cablecast_show_thumbnail_fid']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['filters']['cablecast_show_thumbnail_fid']['field'] = 'cablecast_show_thumbnail_fid';
  $handler->display->display_options['filters']['cablecast_show_thumbnail_fid']['operator'] = 'not empty';

  /* Display: First Result */
  $handler = $view->new_display('attachment', 'First Result', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['alter']['text'] = '<a class="thumbnail" href="[path]">
[cablecast_show_thumbnail]
<span class="play play-large">
</a>';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'front-page-large',
    'image_link' => '',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $export['program_view_template'] = $view;

  return $export;
}
