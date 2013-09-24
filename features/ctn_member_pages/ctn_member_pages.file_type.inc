<?php
/**
 * @file
 * ctn_member_pages.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function ctn_member_pages_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'ctn_member_video';
  $file_type->label = 'CTN Member Video';
  $file_type->description = 'Allows attaching a video for a member page.';
  $file_type->mimetypes = array(
    0 => 'video/*',
  );
  $export['ctn_member_video'] = $file_type;

  return $export;
}
