<?php
/**
 * @file
 * contenttypebonnepratique.features.inc
 */

/**
 * Implements hook_node_info().
 */
function contenttypebonnepratique_node_info() {
  $items = array(
    'bonnepratique' => array(
      'name' => t('Bonne pratique'),
      'base' => 'node_content',
      'description' => t('Une bonne pratique pour mettre en place de l\'Open Data.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
