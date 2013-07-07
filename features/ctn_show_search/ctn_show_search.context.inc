<?php
/**
 * @file
 * ctn_show_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ctn_show_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'show_search';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'show-search' => 'show-search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-ctn_show_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-ctn_show_search-page',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-8cOeWQz8rb19QmmzsHUP7YIzZ6T9cyph' => array(
          'module' => 'facetapi',
          'delta' => '8cOeWQz8rb19QmmzsHUP7YIzZ6T9cyph',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-t0yYdVGyyKu20oWvp1SGbm1qiBOYEd1t' => array(
          'module' => 'facetapi',
          'delta' => 't0yYdVGyyKu20oWvp1SGbm1qiBOYEd1t',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-xJN3FpJ177t1h7WydbRs49AcZHoZXfcj' => array(
          'module' => 'facetapi',
          'delta' => 'xJN3FpJ177t1h7WydbRs49AcZHoZXfcj',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['show_search'] = $context;

  return $export;
}
