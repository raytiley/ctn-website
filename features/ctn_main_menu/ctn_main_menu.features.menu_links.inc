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

  // Exported menu link: main-menu:about/staff
  $menu_links['main-menu:about/staff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/staff',
    'router_path' => 'about/staff',
    'link_title' => 'Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/8717',
  );
  // Exported menu link: main-menu:node/8717
  $menu_links['main-menu:node/8717'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8717',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 3,
  );
  // Exported menu link: main-menu:node/8719
  $menu_links['main-menu:node/8719'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8719',
    'router_path' => 'node/%',
    'link_title' => 'Coverage Area',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/8717',
  );
  // Exported menu link: main-menu:node/8720
  $menu_links['main-menu:node/8720'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8720',
    'router_path' => 'node/%',
    'link_title' => 'Location and Hours',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/8717',
  );
  // Exported menu link: main-menu:node/8721
  $menu_links['main-menu:node/8721'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8721',
    'router_path' => 'node/%',
    'link_title' => 'Sponsorship Guidelines',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/8717',
  );
  // Exported menu link: main-menu:node/8722
  $menu_links['main-menu:node/8722'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8722',
    'router_path' => 'node/%',
    'link_title' => 'Volunteering',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'parent_path' => 'node/8717',
  );
  // Exported menu link: main-menu:portland-city-council
  $menu_links['main-menu:portland-city-council'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portland-city-council',
    'router_path' => 'portland-city-council',
    'link_title' => 'City Council',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
  );
  // Exported menu link: management:admin/show-queue
  $menu_links['management:admin/show-queue'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/show-queue',
    'router_path' => 'admin/show-queue',
    'link_title' => 'Show Queue',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('City Council');
  t('Coverage Area');
  t('Location and Hours');
  t('Show Queue');
  t('Sponsorship Guidelines');
  t('Staff');
  t('Volunteering');


  return $menu_links;
}
