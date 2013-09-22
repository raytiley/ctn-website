<?php
/**
 * @file
 * ctn_about_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctn_about_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
