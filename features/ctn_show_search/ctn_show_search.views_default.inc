<?php
/**
 * @file
 * ctn_show_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctn_show_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ctn_show_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_ctn_show_search';
  $view->human_name = 'Show Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Show Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'search-result';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'We couldn\'t find anything with your search terms. Please try again.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ctn_show_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Thumbnail */
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['id'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['table'] = 'search_api_index_ctn_show_search';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['field'] = 'cablecast_show_thumbnail';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_class'] = 'pull-left';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cablecast_show_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: Comments */
  $handler->display->display_options['fields']['cablecast_show_comments']['id'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['table'] = 'search_api_index_ctn_show_search';
  $handler->display->display_options['fields']['cablecast_show_comments']['field'] = 'cablecast_show_comments';
  $handler->display->display_options['fields']['cablecast_show_comments']['label'] = '';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['text'] = '<div class="media">
<div class="search-thumbnail">
[cablecast_show_thumbnail] 
</div>
<div class="media-body">
<h4 class="media-heading">[title]</h4>
<div class="search-description">
[cablecast_show_comments]
</div>
</div>
</div>';
  $handler->display->display_options['fields']['cablecast_show_comments']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['cablecast_show_comments']['element_label_colon'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_ctn_show_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  /* Sort criterion: Indexed Node: Show ID */
  $handler->display->display_options['sorts']['cablecast_show_id']['id'] = 'cablecast_show_id';
  $handler->display->display_options['sorts']['cablecast_show_id']['table'] = 'search_api_index_ctn_show_search';
  $handler->display->display_options['sorts']['cablecast_show_id']['field'] = 'cablecast_show_id';
  $handler->display->display_options['sorts']['cablecast_show_id']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_ctn_show_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'query';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'cablecast_show_cg_title' => 'cablecast_show_cg_title',
    'cablecast_show_comments' => 'cablecast_show_comments',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'show-search';
  $export['ctn_show_search'] = $view;

  return $export;
}
