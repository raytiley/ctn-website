<?php
/**
 * @file
 * ctn_show_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctn_show_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ctn_show_search_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function ctn_show_search_default_search_api_index() {
  $items = array();
  $items['ctn_show_search'] = entity_import('search_api_index', '{
    "name" : "Show Search",
    "machine_name" : "ctn_show_search",
    "description" : "Indexes Shows for Site Show Search.",
    "server" : "local_system",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "200",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "cablecast_show_id" : { "type" : "integer" },
        "cablecast_show_cg_title" : { "type" : "text" },
        "cablecast_show_comments" : { "type" : "text" },
        "cablecast_show_event_date" : { "type" : "date" },
        "cablecast_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "cablecast_project_reference" : { "type" : "integer", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "cablecast_show" : "cablecast_show" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "cablecast_show_cg_title" : true,
              "cablecast_show_comments" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "cablecast_show_cg_title" : true,
              "cablecast_show_comments" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "cablecast_show_cg_title" : true,
              "cablecast_show_comments" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "cablecast_show_cg_title" : true,
              "cablecast_show_comments" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function ctn_show_search_default_search_api_server() {
  $items = array();
  $items['local_system'] = entity_import('search_api_server', '{
    "name" : "Local System",
    "machine_name" : "local_system",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "ctn_show_search" : {
          "type" : {
            "table" : "search_api_db_ctn_show_search_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_ctn_show_search_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_ctn_show_search_field_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "cablecast_show_id" : {
            "table" : "search_api_db_ctn_show_search_cablecast_show_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "cablecast_show_cg_title" : {
            "table" : "search_api_db_ctn_show_search_cablecast_show_cg_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "cablecast_show_comments" : {
            "table" : "search_api_db_ctn_show_search_cablecast_show_comments",
            "type" : "text",
            "boost" : "1.0"
          },
          "cablecast_show_event_date" : {
            "table" : "search_api_db_ctn_show_search_cablecast_show_event_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "cablecast_category" : {
            "table" : "search_api_db_ctn_show_search_cablecast_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "cablecast_project_reference" : {
            "table" : "search_api_db_ctn_show_search_cablecast_project_reference",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_ctn_show_search_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
