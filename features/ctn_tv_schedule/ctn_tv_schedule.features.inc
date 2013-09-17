<?php
/**
 * @file
 * ctn_tv_schedule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctn_tv_schedule_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ctn_tv_schedule_views_api() {
  return array("version" => "3.0");
}