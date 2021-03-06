/*
* Copyright (C) 2014 Cloudius Systems, Ltd.
*
* This work is open source software, licensed under the terms of the
* BSD license as described in the LICENSE f in the top-level directory.
*
*  This is an Auto-Generated-code  
*  Changes you do in this file will be erased on next code generation
*/

#include "click_plugin.json.hh"
#include "json/json_path.hh"
#include "json/api_docs.hh"

namespace httpserver {

namespace json {

void click_plugin_json_init_path(const std::string& description)
{
register_api("click_plugin", description);
    /**
     * Click Version
     */
    path_description::add_path("/click_plugin/version",GET,"click_version")
    ;
    /**
     * Running
     */
    path_description::add_path("/click_plugin/running",GET,"click_is_running")
    ;
    /**
     * Start Click
     */
    path_description::add_path("/click_plugin/start",POST,"click_start")
    ;
    /**
     * Stop Click
     */
    path_description::add_path("/click_plugin/stop",POST,"click_stop")
    ;
    /**
     * Returns File Content
     */
    path_description::add_path("/click_plugin/read_file",GET,"click_read_file")
    ;
    /**
     * Replace File Content or Create File
     */
    path_description::add_path("/click_plugin/write_file",POST,"click_write_file")
      ->pushmandatory_param("path")
      ->pushmandatory_param("content")
    ;
    /**
     * Return VNF IDs
     */
    path_description::add_path("/click_plugin/vnf_identification",GET,"click_vnf_id")
    ;
    /**
     * Usage metrics from Click
     */
    path_description::add_path("/click_plugin/metrics",GET,"click_metrics")
    ;
    /**
     * Returns Click Execution Log
     */
    path_description::add_path("/click_plugin/log",GET,"click_log")
    ;
}
}
}
