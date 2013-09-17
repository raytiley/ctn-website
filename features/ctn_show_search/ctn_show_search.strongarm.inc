<?php
/**
 * @file
 * ctn_show_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ctn_show_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_ctn_schedule_with_date';
  $strongarm->value = 'l, F j, Y - g:ia';
  $export['date_format_ctn_schedule_with_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long_date';
  $strongarm->value = 'F jS, Y';
  $export['date_format_long_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_time';
  $strongarm->value = 'g:i a';
  $export['date_format_time'] = $strongarm;

  return $export;
}
