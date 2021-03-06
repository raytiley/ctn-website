<?php
/**
 * @file
 * ctn_member_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctn_member_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ctn_member_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'CTN Member videos';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_mem_vid_ref_target_id']['id'] = 'field_mem_vid_ref_target_id';
  $handler->display->display_options['relationships']['field_mem_vid_ref_target_id']['table'] = 'field_data_field_mem_vid_ref';
  $handler->display->display_options['relationships']['field_mem_vid_ref_target_id']['field'] = 'field_mem_vid_ref_target_id';
  $handler->display->display_options['relationships']['field_mem_vid_ref_target_id']['label'] = 'Member';
  $handler->display->display_options['relationships']['field_mem_vid_ref_target_id']['required'] = TRUE;
  /* Field: File: Link */
  $handler->display->display_options['fields']['field_mem_vid_link']['id'] = 'field_mem_vid_link';
  $handler->display->display_options['fields']['field_mem_vid_link']['table'] = 'field_data_field_mem_vid_link';
  $handler->display->display_options['fields']['field_mem_vid_link']['field'] = 'field_mem_vid_link';
  $handler->display->display_options['fields']['field_mem_vid_link']['label'] = '';
  $handler->display->display_options['fields']['field_mem_vid_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mem_vid_link']['element_label_colon'] = FALSE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  /* Field: File: Description */
  $handler->display->display_options['fields']['field_mem_vid_desc']['id'] = 'field_mem_vid_desc';
  $handler->display->display_options['fields']['field_mem_vid_desc']['table'] = 'field_data_field_mem_vid_desc';
  $handler->display->display_options['fields']['field_mem_vid_desc']['field'] = 'field_mem_vid_desc';
  $handler->display->display_options['fields']['field_mem_vid_desc']['label'] = '';
  $handler->display->display_options['fields']['field_mem_vid_desc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mem_vid_desc']['alter']['text'] = '<div class="row-fluid">
<div class="span3">
[rendered]
</div>
<div class="span9">
<h3>[filename]</h3>
<p>
[field_mem_vid_desc]
</p>
<p>
<strong>More Info: </strong><a href="[field_mem_vid_link]">[field_mem_vid_link]</a>
</p>
</div>
<hr />';
  $handler->display->display_options['fields']['field_mem_vid_desc']['element_label_colon'] = FALSE;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_mem_vid_ref_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ctn_member_video' => 'ctn_member_video',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['ctn_member_videos'] = $view;

  $view = new view();
  $view->name = 'ctn_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CTN Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CTN Members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_ctn_member_logo']['id'] = 'field_ctn_member_logo';
  $handler->display->display_options['fields']['field_ctn_member_logo']['table'] = 'field_data_field_ctn_member_logo';
  $handler->display->display_options['fields']['field_ctn_member_logo']['field'] = 'field_ctn_member_logo';
  $handler->display->display_options['fields']['field_ctn_member_logo']['label'] = '';
  $handler->display->display_options['fields']['field_ctn_member_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ctn_member_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ctn_member_logo']['element_wrapper_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_ctn_member_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ctn_member_logo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_ctn_member_logo']['settings'] = array(
    'image_style' => 'medium',
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
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_ctn_member_desc']['id'] = 'field_ctn_member_desc';
  $handler->display->display_options['fields']['field_ctn_member_desc']['table'] = 'field_data_field_ctn_member_desc';
  $handler->display->display_options['fields']['field_ctn_member_desc']['field'] = 'field_ctn_member_desc';
  $handler->display->display_options['fields']['field_ctn_member_desc']['label'] = '';
  $handler->display->display_options['fields']['field_ctn_member_desc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ctn_member_desc']['alter']['text'] = '<div class="clearfix">
<a href="[path]"><img src="[field_ctn_member_logo]" class="thumbnail pull-left member-list-thumbnail"/></a>
<h3>[title]</h3>
<p>
[field_ctn_member_desc]
</p>
</div>
<hr>';
  $handler->display->display_options['fields']['field_ctn_member_desc']['element_label_colon'] = FALSE;
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
    'ctn_member' => 'ctn_member',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'membership/ctn-members';
  $export['ctn_members'] = $view;

  return $export;
}
