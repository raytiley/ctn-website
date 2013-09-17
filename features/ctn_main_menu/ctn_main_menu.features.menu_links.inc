<?php
/**
 * @file
 * ctn_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ctn_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:portland-city-council
  $menu_links['main-menu:portland-city-council'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portland-city-council',
    'router_path' => 'portland-city-council',
    'link_title' => 'City Council',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: management:admin/show-queue
  $menu_links['management:admin/show-queue'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/show-queue',
    'router_path' => 'admin/show-queue',
    'link_title' => 'Show Queue',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('City Council');
  t('Show Queue');


  return $menu_links;
}
