<?php

function ctn_front_page_block_drush_command() {
	$items = array();

	 // The 'make-me-a-sandwich' command
  $items['ctn-front-test'] = array(
    'description' => "Tests the CTN Front Page code",
    'examples' => array(
      'drush ctn-front-page' => 'Profit!',
    ),
    'aliases' => array('ctnfp'),
    'callback' => 'drush_ctn_front_page_block_test'
  );

  return $items;
}

function drush_ctn_front_page_block_test() {
	ctn_front_page_block_test();
}