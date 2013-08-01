<?php
/**
 * @file
 * ufal_tools.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ufal_tools_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ufal_tools_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ufal_tools_node_info() {
  $items = array(
    'tools_spider' => array(
      'name' => t('Tools spider'),
      'base' => 'node_content',
      'description' => t('feed importer script'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ufal_tool' => array(
      'name' => t('Tool'),
      'base' => 'node_content',
      'description' => t('Tools developed within the UFAL\'s research projects'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ufal_tool_page' => array(
      'name' => t('Tool subpage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
