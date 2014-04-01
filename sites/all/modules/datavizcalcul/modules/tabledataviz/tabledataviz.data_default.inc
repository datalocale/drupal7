<?php
/**
 * @file
 * tabledataviz.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function tabledataviz_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'calcul datavisualisation';
  $data_table->name = 'dataviz_calcul';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'id_formule' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'valeur_formule' => array(
        'type' => 'float',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'valeurs_personnages' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'id_departement' => array(
        'type' => 'varchar',
        'length' => 255,
      ),
    ),
    'name' => 'dataviz_calcul',
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'id' => array(
        'label' => 'Id',
      ),
      'id_departement' => array(
        'label' => 'Id de la departement',
      ),
      'id_formule' => array(
        'label' => 'Id formule',
      ),
      'valeur_formule' => array(
        'label' => 'Valeur formule',
      ),
      'valeurs_personnages' => array(
        'label' => 'Valeurs personnages',
      ),
      'valeur_indice_gouvernance' => array(
        'label' => 'Valeur indice de gouvernance',
      ),
    ),
  );
  $export['dataviz_calcul'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Indice de gouvernance';
  $data_table->name = 'dataviz_indice_gouvernance';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'valeur' => array(
        'type' => 'float',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'id_departement' => array(
        'type' => 'varchar',
        'length' => 255,
      ),
    ),
    'name' => 'dataviz_indice_gouvernance',
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'id' => array(
        'label' => 'ID',
      ),
      'id_departement' => array(
        'label' => 'Id de la departement',
      ),
      'valeur' => array(
        'label' => 'Valeur',
      ),
    ),
  );
  $export['dataviz_indice_gouvernance'] = $data_table;

  return $export;
}
