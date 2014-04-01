<?php
/**
 * @file
 * contenttypeapplication.features.inc
 */

/**
 * Implements hook_node_info().
 */
function contenttypeapplication_node_info() {
  $items = array(
    'application' => array(
      'name' => t('application'),
      'base' => 'node_content',
      'description' => t('Une application'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
