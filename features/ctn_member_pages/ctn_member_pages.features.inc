<?php
/**
 * @file
 * ctn_member_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctn_member_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ctn_member_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ctn_member_pages_node_info() {
  $items = array(
    'ctn_member' => array(
      'name' => t('CTN Member'),
      'base' => 'node_content',
      'description' => t('A member of CTN'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
