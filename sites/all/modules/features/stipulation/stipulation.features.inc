<?php
/**
 * @file
 * stipulation.features.inc
 */

/**
 * Implements hook_node_info().
 */
function stipulation_node_info() {
  $items = array(
    'stipulation_status' => array(
      'name' => t('Stipulation Status'),
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
