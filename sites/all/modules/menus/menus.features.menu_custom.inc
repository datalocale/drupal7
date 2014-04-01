<?php
/**
 * @file
 * menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menu principal',
    'description' => 'Le <em>menu Principal</em> est fréquemment utilisé pour afficher les sections importantes du site, souvent dans la barre de navigation de haut de page.',
  );
  // Exported menu: menu-menu-footer
  $menus['menu-menu-footer'] = array(
    'menu_name' => 'menu-menu-footer',
    'title' => 'Menu footer',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Le <em>menu Principal</em> est fréquemment utilisé pour afficher les sections importantes du site, souvent dans la barre de navigation de haut de page.');
  t('Menu footer');
  t('Menu principal');


  return $menus;
}
