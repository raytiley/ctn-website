<?php
/**
 * @file
 * ctn_front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctn_front_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ctn_front_page_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ctn_front_page_image_default_styles() {
  $styles = array();

  // Exported image style: front-page-large.
  $styles['front-page-large'] = array(
    'name' => 'front-page-large',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '360',
          'height' => '240',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: front_page_banner.
  $styles['front_page_banner'] = array(
    'name' => 'front_page_banner',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '1500',
          'height' => '550',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: front_page_medium.
  $styles['front_page_medium'] = array(
    'name' => 'front_page_medium',
    'effects' => array(
      2 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '180',
          'height' => '120',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
