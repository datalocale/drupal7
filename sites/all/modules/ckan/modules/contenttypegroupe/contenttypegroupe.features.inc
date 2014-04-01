<?php
/**
 * @file
 * contenttypegroupe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contenttypegroupe_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function contenttypegroupe_node_info() {
  $items = array(
    'groupe' => array(
      'name' => t('groupe'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
