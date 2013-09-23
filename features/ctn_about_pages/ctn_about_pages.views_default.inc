<?php
/**
 * @file
 * ctn_about_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctn_about_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ctn_about_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_ctn_user_phone']['id'] = 'field_ctn_user_phone';
  $handler->display->display_options['fields']['field_ctn_user_phone']['table'] = 'field_data_field_ctn_user_phone';
  $handler->display->display_options['fields']['field_ctn_user_phone']['field'] = 'field_ctn_user_phone';
  $handler->display->display_options['fields']['field_ctn_user_phone']['label'] = '';
  $handler->display->display_options['fields']['field_ctn_user_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ctn_user_phone']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_ctn_user_display_name']['id'] = 'field_ctn_user_display_name';
  $handler->display->display_options['fields']['field_ctn_user_display_name']['table'] = 'field_data_field_ctn_user_display_name';
  $handler->display->display_options['fields']['field_ctn_user_display_name']['field'] = 'field_ctn_user_display_name';
  $handler->display->display_options['fields']['field_ctn_user_display_name']['label'] = '';
  $handler->display->display_options['fields']['field_ctn_user_display_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ctn_user_display_name']['element_label_colon'] = FALSE;
  /* Field: User: Bio */
  $handler->display->display_options['fields']['field_ctn_user_bio']['id'] = 'field_ctn_user_bio';
  $handler->display->display_options['fields']['field_ctn_user_bio']['table'] = 'field_data_field_ctn_user_bio';
  $handler->display->display_options['fields']['field_ctn_user_bio']['field'] = 'field_ctn_user_bio';
  $handler->display->display_options['fields']['field_ctn_user_bio']['label'] = '';
  $handler->display->display_options['fields']['field_ctn_user_bio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ctn_user_bio']['alter']['text'] = '<div class="thumbnail pull-left ctn-staff-profile-picture">
[picture]
</div>
<div>
<p>
<h4>[field_ctn_user_display_name]</h4>
[field_ctn_user_bio]
</p>
<p>
<strong>Phone: </strong>[field_ctn_user_phone]<br />
<strong>Email: </strong><a href="mailto:[mail]">[mail]</a>
</div>
';
  $handler->display->display_options['fields']['field_ctn_user_bio']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'about/staff';
  $export['ctn_about_staff'] = $view;

  return $export;
}
