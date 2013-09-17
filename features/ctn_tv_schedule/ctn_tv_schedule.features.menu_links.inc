<?php
/**
 * @file
 * ctn_tv_schedule.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ctn_tv_schedule_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:schedule
  $menu_links['main-menu:schedule'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schedule',
    'router_path' => 'schedule',
    'link_title' => 'Schedule',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Schedule');


  return $menu_links;
}
