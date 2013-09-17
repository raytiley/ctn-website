<?php
/**
 * @file
 * ctn_city_council_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ctn_city_council_page_menu_default_menu_links() {
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
  // Translatables
  // Included for use with string extractors like potx.
  t('City Council');


  return $menu_links;
}
