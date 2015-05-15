<?php
/**
 * @file
 * deal_management.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function deal_management_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function deal_management_node_info() {
  $items = array(
    'deal_management' => array(
      'name' => t('Deal Management'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
