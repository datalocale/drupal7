<?php
/**
 * @file
 * ctdepartement.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ctdepartement_node_info() {
  $items = array(
    'departement' => array(
      'name' => t('departement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
