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
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_ctn_show_banner_image']['settings'] = array(
    'image_style' => 'front_page_banner',
    'image_link' => '',
  );
  /* Field: Content: CG Title */
  $handler->display->display_options['fields']['cablecast_show_cg_title']['id'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['table'] = 'field_data_cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['field'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
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
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'field_data_cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  /* Field: Content: Show ID */
  $handler->display->display_options['fields']['cablecast_show_id']['id'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['table'] = 'field_data_cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['field'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_id']['alter']['text'] = '<div style="background-image:url([field_ctn_show_banner_image])">
<div class="container">
<div class="carousel-caption">
<h1>[cablecast_show_cg_title]</h1>
<p class="lead">
[cablecast_show_comments]
</p>
<a href="[path]" class="btn btn-large btn-primary">Watch Now</a>
</div>
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
  $view->name = 'ctn_show_queue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Show Queue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Show Queue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Show ID */
  $handler->display->display_options['fields']['cablecast_show_id']['id'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['table'] = 'field_data_cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['field'] = 'cablecast_show_id';
  $handler->display->display_options['fields']['cablecast_show_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Show Title */
  $handler->display->display_options['fields']['cablecast_show_title']['id'] = 'cablecast_show_title';
  $handler->display->display_options['fields']['cablecast_show_title']['table'] = 'field_data_cablecast_show_title';
  $handler->display->display_options['fields']['cablecast_show_title']['field'] = 'cablecast_show_title';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Show ID (cablecast_show_id) */
  $handler->display->display_options['sorts']['cablecast_show_id_value']['id'] = 'cablecast_show_id_value';
  $handler->display->display_options['sorts']['cablecast_show_id_value']['table'] = 'field_data_cablecast_show_id';
  $handler->display->display_options['sorts']['cablecast_show_id_value']['field'] = 'cablecast_show_id_value';
  $handler->display->display_options['sorts']['cablecast_show_id_value']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Content: ctn_show_banner_image (field_ctn_show_banner_image:fid) */
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['id'] = 'field_ctn_show_banner_image_fid';
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['table'] = 'field_data_field_ctn_show_banner_image';
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['field'] = 'field_ctn_show_banner_image_fid';
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_ctn_show_banner_image_fid']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cablecast_show' => 'cablecast_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/show-queue';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Show Queue';
  $handler->display->display_options['menu']['name'] = 'management';
  $export['ctn_show_queue'] = $view;

  $view = new view();
  $view->name = 'front_page_adventure';
  $view->description = '';
  $view->tag = 'ctn-front-page, four-by-one';
  $view->base_table = 'node';
  $view->human_name = 'Front Page - Adventure';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Adventure';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Adventure';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'span3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'thumbnails';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'field_data_cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_default_classes'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'front-page-large',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: CG Title */
  $handler->display->display_options['fields']['cablecast_show_cg_title']['id'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['table'] = 'field_data_cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['field'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Sports */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['ui_name'] = 'Sports';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = 'Sports';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Nature */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Nature';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'Nature';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Travel and Adventure */
  $handler->display->display_options['arguments']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['arguments']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_2']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_2']['ui_name'] = 'Travel and Adventure';
  $handler->display->display_options['arguments']['tid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['default_argument_options']['argument'] = 'Travel & Adventure';
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['reduce_duplicates'] = TRUE;
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
  /* Filter criterion: Content: Thumbnail (cablecast_show_thumbnail:fid) */
  $handler->display->display_options['filters']['cablecast_show_thumbnail_fid']['id'] = 'cablecast_show_thumbnail_fid';
  $handler->display->display_options['filters']['cablecast_show_thumbnail_fid']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['filters']['cablecast_show_thumbnail_fid']['field'] = 'cablecast_show_thumbnail_fid';
  $handler->display->display_options['filters']['cablecast_show_thumbnail_fid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'shows/adventure';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All In Adventure';
  $handler->display->display_options['link_url'] = 'shows/adventure';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title Header';
  $handler->display->display_options['header']['area']['content'] = '<h3>Adventure</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $export['front_page_adventure'] = $view;

  $view = new view();
  $view->name = 'front_page_entertainment';
  $view->description = '';
  $view->tag = 'ctn-front-page, four-by-one';
  $view->base_table = 'node';
  $view->human_name = 'Front Page - Entertainment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Entertainment';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All Entertainment';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'front-page-large',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'field_data_cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  /* Field: Content: CG Title */
  $handler->display->display_options['fields']['cablecast_show_cg_title']['id'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['table'] = 'field_data_cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['field'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Arts and Entertainment */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Arts and Entertainment';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'Arts & Entertainment';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Variety */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['ui_name'] = 'Variety';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = 'Variety';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Music */
  $handler->display->display_options['arguments']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['arguments']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_2']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_2']['ui_name'] = 'Music';
  $handler->display->display_options['arguments']['tid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['default_argument_options']['argument'] = 'Music';
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Scifi / Horror */
  $handler->display->display_options['arguments']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['arguments']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_3']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_3']['ui_name'] = 'Scifi / Horror';
  $handler->display->display_options['arguments']['tid_3']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_3']['default_argument_options']['argument'] = 'Scifi / Horror';
  $handler->display->display_options['arguments']['tid_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_3']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_3']['reduce_duplicates'] = TRUE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All Entertainment';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'shows/entertainment';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All In Entertainment';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'shows/entertainment';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Entertainment</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $export['front_page_entertainment'] = $view;

  $view = new view();
  $view->name = 'front_page_family';
  $view->description = '';
  $view->tag = 'ctn-front-page, four-by-one';
  $view->base_table = 'node';
  $view->human_name = 'Front Page - Family';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Family';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'thumbnails';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'front-page-large',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'field_data_cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  /* Field: Content: CG Title */
  $handler->display->display_options['fields']['cablecast_show_cg_title']['id'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['table'] = 'field_data_cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['field'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Lifestyle */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Lifestyle';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'Lifestyle';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Children */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['ui_name'] = 'Children';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = 'Children\'s';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = TRUE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="row-fluid"><div class="pull-right span6" style="text-align: right">Some of our family programming is provided by: <a href="http://www.boatangel.com">Boat Angel</a></div></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'shows/family';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All In Family';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'shows/family';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Family</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $export['front_page_family'] = $view;

  $view = new view();
  $view->name = 'front_page_information';
  $view->description = '';
  $view->tag = 'ctn-front-page, four-by-one';
  $view->base_table = 'node';
  $view->human_name = 'Front Page - Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Information';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All In Information';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'thumbnails';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'front-page-large',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'field_data_cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  /* Field: Content: CG Title */
  $handler->display->display_options['fields']['cablecast_show_cg_title']['id'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['table'] = 'field_data_cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['field'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Public Affairs */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Public Affairs';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'Public Affairs';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Business */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['ui_name'] = 'Business';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = 'Business';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Science and Technology */
  $handler->display->display_options['arguments']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['arguments']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_2']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_2']['ui_name'] = 'Science and Technology';
  $handler->display->display_options['arguments']['tid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['default_argument_options']['argument'] = 'Science & Technology';
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['reduce_duplicates'] = TRUE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'shows/information';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'shows/information';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Information</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $export['front_page_information'] = $view;

  $view = new view();
  $view->name = 'front_page_knowledge';
  $view->description = '';
  $view->tag = 'ctn-front-page, four-by-one';
  $view->base_table = 'node';
  $view->human_name = 'Front Page - Knowledge';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Knowledge';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All Front Page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'thumbnails';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'field_data_cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'front-page-large',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'field_data_cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  /* Field: Content: CG Title */
  $handler->display->display_options['fields']['cablecast_show_cg_title']['id'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['table'] = 'field_data_cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['field'] = 'cablecast_show_cg_title';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_cg_title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: History */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'History';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'History';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Contextual filter: Special Interest */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['ui_name'] = 'Special Interest';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = 'Special Interest';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = TRUE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'shows/knowledge';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All In Knowledge';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'shows/knowledge';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Knowledge</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $export['front_page_knowledge'] = $view;

  return $export;
}
