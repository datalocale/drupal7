<?php
/**
 * @file
 * viewdepartements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function viewdepartements_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'departements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'departements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'departements';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_imagemap' => 'field_imagemap',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_imagemap' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Entête: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis vel ante ante. Ut id consequat erat. Maecenas ornare hendrerit euismod. Aliquam erat volutpat. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Pied de page: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div id="contentdataviz" ></div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'departements_queue' => 'departements_queue',
  );
  /* Champ: Contenu: Image map */
  $handler->display->display_options['fields']['field_imagemap']['id'] = 'field_imagemap';
  $handler->display->display_options['fields']['field_imagemap']['table'] = 'field_data_field_imagemap';
  $handler->display->display_options['fields']['field_imagemap']['field'] = 'field_imagemap';
  $handler->display->display_options['fields']['field_imagemap']['label'] = '';
  $handler->display->display_options['fields']['field_imagemap']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_imagemap']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_imagemap']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagemap']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_imagemap']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_imagemap']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_imagemap']['field_api_classes'] = 0;
  /* Champ: Contenu: departement id */
  $handler->display->display_options['fields']['field_departementid']['id'] = 'field_departementid';
  $handler->display->display_options['fields']['field_departementid']['table'] = 'field_data_field_departementid';
  $handler->display->display_options['fields']['field_departementid']['field'] = 'field_departementid';
  $handler->display->display_options['fields']['field_departementid']['label'] = '';
  $handler->display->display_options['fields']['field_departementid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_departementid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_departementid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_departementid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_departementid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_departementid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_departementid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_departementid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_departementid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_departementid']['field_api_classes'] = 0;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'departement' => 'departement',
  );
  /* Filter criterion: Contenu: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_region_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'region';
  $handler->display->display_options['filters']['field_region_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_region_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'departements';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $translatables['departements'] = array(
    t('Master'),
    t('departements'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis vel ante ante. Ut id consequat erat. Maecenas ornare hendrerit euismod. Aliquam erat volutpat. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. '),
    t('<div id="contentdataviz" ></div>'),
    t('queue'),
    t('Titre'),
    t('Page'),
    t('Bloc'),
  );
  $export['departements'] = $view;

  return $export;
}
