<?php
/**
 * @file
 * packageviews.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function packageviews_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'applicationsperpackage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Applicationsperpackage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenu: Jeux de données (field_jeux) */
  $handler->display->display_options['arguments']['field_jeux_nid']['id'] = 'field_jeux_nid';
  $handler->display->display_options['arguments']['field_jeux_nid']['table'] = 'field_data_field_jeux';
  $handler->display->display_options['arguments']['field_jeux_nid']['field'] = 'field_jeux_nid';
  $handler->display->display_options['arguments']['field_jeux_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_jeux_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_jeux_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_jeux_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_jeux_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_jeux_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_jeux_nid']['not'] = 0;
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
    'application' => 'application',
  );
  $translatables['applicationsperpackage'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Tous / Toutes'),
  );
  $export['applicationsperpackage'] = $view;

  $view = new view;
  $view->name = 'mappackage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'mappackage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'mappackage';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'geofield_formatter_map';
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu: Spatial */
  $handler->display->display_options['fields']['field_spatialextent']['id'] = 'field_spatialextent';
  $handler->display->display_options['fields']['field_spatialextent']['table'] = 'field_data_field_spatialextent';
  $handler->display->display_options['fields']['field_spatialextent']['field'] = 'field_spatialextent';
  $handler->display->display_options['fields']['field_spatialextent']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_spatialextent']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_spatialextent']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spatialextent']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_spatialextent']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_spatialextent']['settings'] = array(
    'map_preset' => 'geofield_formatter_map',
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_spatialextent']['field_api_classes'] = 0;
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenu: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'ckan_package' => 'ckan_package',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: couverture geographique autre */
  $handler->display->display_options['fields']['field_autreg']['id'] = 'field_autreg';
  $handler->display->display_options['fields']['field_autreg']['table'] = 'field_data_field_autreg';
  $handler->display->display_options['fields']['field_autreg']['field'] = 'field_autreg';
  $handler->display->display_options['fields']['field_autreg']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_autreg']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_autreg']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_autreg']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_autreg']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_autreg']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_autreg']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_autreg']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_autreg']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_autreg']['field_api_classes'] = 0;
  /* Champ: Contenu: Geographic granularity */
  $handler->display->display_options['fields']['field_geogranularity']['id'] = 'field_geogranularity';
  $handler->display->display_options['fields']['field_geogranularity']['table'] = 'field_data_field_geogranularity';
  $handler->display->display_options['fields']['field_geogranularity']['field'] = 'field_geogranularity';
  $handler->display->display_options['fields']['field_geogranularity']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geogranularity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geogranularity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geogranularity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geogranularity']['field_api_classes'] = 0;
  /* Champ: Contenu: spatial nom */
  $handler->display->display_options['fields']['field_spatialnom']['id'] = 'field_spatialnom';
  $handler->display->display_options['fields']['field_spatialnom']['table'] = 'field_data_field_spatialnom';
  $handler->display->display_options['fields']['field_spatialnom']['field'] = 'field_spatialnom';
  $handler->display->display_options['fields']['field_spatialnom']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_spatialnom']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_spatialnom']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spatialnom']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_spatialnom']['field_api_classes'] = 0;
  /* Champ: Contenu: Spatial url */
  $handler->display->display_options['fields']['field_spatialurl']['id'] = 'field_spatialurl';
  $handler->display->display_options['fields']['field_spatialurl']['table'] = 'field_data_field_spatialurl';
  $handler->display->display_options['fields']['field_spatialurl']['field'] = 'field_spatialurl';
  $handler->display->display_options['fields']['field_spatialurl']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_spatialurl']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_spatialurl']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spatialurl']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_spatialurl']['field_api_classes'] = 0;
  $translatables['mappackage'] = array(
    t('Master'),
    t('mappackage'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Spatial'),
    t('Tous / Toutes'),
    t('Block'),
    t('Bloc'),
    t('couverture geographique autre'),
    t('Geographic granularity'),
    t('spatial nom'),
    t('Spatial url'),
  );
  $export['mappackage'] = $view;

  $view = new view;
  $view->name = 'producteurblockrightpackage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'producteurblockrightpackage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'producteurblockrightpackage';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Contenu: Propriétaire (field_creator) */
  $handler->display->display_options['relationships']['field_creator_nid']['id'] = 'field_creator_nid';
  $handler->display->display_options['relationships']['field_creator_nid']['table'] = 'field_data_field_creator';
  $handler->display->display_options['relationships']['field_creator_nid']['field'] = 'field_creator_nid';
  $handler->display->display_options['relationships']['field_creator_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_creator_nid']['delta'] = '-1';
  /* Champ: Contenu: ressources */
  $handler->display->display_options['fields']['field_ressources']['id'] = 'field_ressources';
  $handler->display->display_options['fields']['field_ressources']['table'] = 'field_data_field_ressources';
  $handler->display->display_options['fields']['field_ressources']['field'] = 'field_ressources';
  $handler->display->display_options['fields']['field_ressources']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ressources']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ressources']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ressources']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ressources']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ressources']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ressources']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ressources']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ressources']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ressources']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ressources']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ressources']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ressources']['field_api_classes'] = 0;
  /* Champ: Contenu: size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenu: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'ckan_package' => 'ckan_package',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Email */
  $handler->display->display_options['fields']['field_gemail']['id'] = 'field_gemail';
  $handler->display->display_options['fields']['field_gemail']['table'] = 'field_data_field_gemail';
  $handler->display->display_options['fields']['field_gemail']['field'] = 'field_gemail';
  $handler->display->display_options['fields']['field_gemail']['relationship'] = 'field_creator_nid';
  $handler->display->display_options['fields']['field_gemail']['label'] = '';
  $handler->display->display_options['fields']['field_gemail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gemail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gemail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gemail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gemail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gemail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gemail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gemail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gemail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gemail']['field_api_classes'] = 0;
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_gimage']['id'] = 'field_gimage';
  $handler->display->display_options['fields']['field_gimage']['table'] = 'field_data_field_gimage';
  $handler->display->display_options['fields']['field_gimage']['field'] = 'field_gimage';
  $handler->display->display_options['fields']['field_gimage']['relationship'] = 'field_creator_nid';
  $handler->display->display_options['fields']['field_gimage']['label'] = '';
  $handler->display->display_options['fields']['field_gimage']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gimage']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gimage']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gimage']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gimage']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gimage']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gimage']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gimage']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gimage']['field_api_classes'] = 0;
  /* Champ: Contenu: Propriétaire */
  $handler->display->display_options['fields']['field_creator']['id'] = 'field_creator';
  $handler->display->display_options['fields']['field_creator']['table'] = 'field_data_field_creator';
  $handler->display->display_options['fields']['field_creator']['field'] = 'field_creator';
  $handler->display->display_options['fields']['field_creator']['label'] = '';
  $handler->display->display_options['fields']['field_creator']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_creator']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_creator']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_creator']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_creator']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_creator']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_creator']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_creator']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_creator']['field_api_classes'] = 0;

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenu: ressources (field_ressources) */
  $handler->display->display_options['relationships']['field_ressources_nid']['id'] = 'field_ressources_nid';
  $handler->display->display_options['relationships']['field_ressources_nid']['table'] = 'field_data_field_ressources';
  $handler->display->display_options['relationships']['field_ressources_nid']['field'] = 'field_ressources_nid';
  $handler->display->display_options['relationships']['field_ressources_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_ressources_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: ressources */
  $handler->display->display_options['fields']['field_ressources']['id'] = 'field_ressources';
  $handler->display->display_options['fields']['field_ressources']['table'] = 'field_data_field_ressources';
  $handler->display->display_options['fields']['field_ressources']['field'] = 'field_ressources';
  $handler->display->display_options['fields']['field_ressources']['label'] = '';
  $handler->display->display_options['fields']['field_ressources']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ressources']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ressources']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ressources']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ressources']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ressources']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ressources']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ressources']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ressources']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ressources']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ressources']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ressources']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ressources']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ressources']['field_api_classes'] = 0;
  /* Champ: Contenu: size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['relationship'] = 'field_ressources_nid';
  $handler->display->display_options['fields']['field_size']['label'] = '';
  $handler->display->display_options['fields']['field_size']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_size']['alter']['text'] = '[field_size-value] Kb';
  $handler->display->display_options['fields']['field_size']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_size']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_size']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_size']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_size']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_size']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_size']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_size']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_size']['field_api_classes'] = 0;

  /* Display: Bloc 2 */
  $handler = $view->new_display('block', 'Bloc 2', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: licence */
  $handler->display->display_options['fields']['field_ckanlicence']['id'] = 'field_ckanlicence';
  $handler->display->display_options['fields']['field_ckanlicence']['table'] = 'field_data_field_ckanlicence';
  $handler->display->display_options['fields']['field_ckanlicence']['field'] = 'field_ckanlicence';
  $handler->display->display_options['fields']['field_ckanlicence']['label'] = '&copy; Droit d\'utilisation';
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ckanlicence']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ckanlicence']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ckanlicence']['field_api_classes'] = 0;

  /* Display: Bloc 3 */
  $handler = $view->new_display('block', 'Bloc 3', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Champ: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['totalcount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['totalcount']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['totalcount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['totalcount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['totalcount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['totalcount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['totalcount']['format_plural'] = 0;
  $handler->display->display_options['fields']['totalcount']['suffix'] = ' Télechargements';
  /* Champ: Contenu: Nombre de commentaires */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 0;
  $handler->display->display_options['fields']['comment_count']['suffix'] = ' Commentaires';
  /* Champ: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$view = views_get_view(\'applicationsperpackage\');
 $view->set_display(\'default\');
$view->set_arguments(array( $row->nid ));
$view->execute();
echo sizeof($view->result)." ".t(\'Applications\');
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Champ: Contenu: score */
  $handler->display->display_options['fields']['field_scoref_1']['id'] = 'field_scoref_1';
  $handler->display->display_options['fields']['field_scoref_1']['table'] = 'field_data_field_scoref';
  $handler->display->display_options['fields']['field_scoref_1']['field'] = 'field_scoref';
  $handler->display->display_options['fields']['field_scoref_1']['label'] = '';
  $handler->display->display_options['fields']['field_scoref_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scoref_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_scoref_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_scoref_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_scoref_1']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_scoref_1']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_scoref_1']['field_api_classes'] = 0;
  $translatables['producteurblockrightpackage'] = array(
    t('Master'),
    t('producteurblockrightpackage'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_creator'),
    t('ressources'),
    t('size'),
    t('Tous / Toutes'),
    t('Block'),
    t('Bloc'),
    t('field_ressources'),
    t('[field_size-value] Kb'),
    t('Bloc 2'),
    t('&copy; Droit d\'utilisation'),
    t('Bloc 3'),
    t('.'),
    t(','),
    t(' Télechargements'),
    t(' Commentaires'),
  );
  $export['producteurblockrightpackage'] = $view;

  $view = new view;
  $view->name = 'revisions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Revisions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Révisions';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'log' => 'log',
    'title_1' => 'title_1',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'log' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
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
  /* Champ: Content revision: Titre */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node_revision'] = 0;
  /* Champ: Content revision: Log message */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['fields']['log']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['log']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['log']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['log']['alter']['external'] = 0;
  $handler->display->display_options['fields']['log']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['log']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['log']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['log']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['log']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['log']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['log']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['log']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['log']['alter']['html'] = 0;
  $handler->display->display_options['fields']['log']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['log']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['log']['hide_empty'] = 0;
  $handler->display->display_options['fields']['log']['empty_zero'] = 0;
  $handler->display->display_options['fields']['log']['hide_alter_empty'] = 1;
  /* Champ: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenu: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'ckan_package' => 'ckan_package',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'revisions';
  $translatables['revisions'] = array(
    t('Master'),
    t('Révisions'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Titre'),
    t('Log message'),
    t('Updated date'),
    t('Tous / Toutes'),
    t('Page'),
  );
  $export['revisions'] = $view;

  return $export;
}
