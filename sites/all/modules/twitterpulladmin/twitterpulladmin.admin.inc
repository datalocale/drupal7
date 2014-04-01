<?php

/**
 * @file
 * Administrative page callbacks for the twitterpulladmin module.
 */

/**
 * Implements hook_admin_settings() for module settings configuration.
 */
function twitterpulladmin_admin_settings_form($form_state) {
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
  );

  $form['twitterpulladmin_account'] = array(
    '#title' => t('Account twitter'),
    '#type' => 'textfield',
    '#default_value' => variable_get('twitterpulladmin_account'),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    
  );
    $form['twitterpulladmin_title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#default_value' => variable_get('twitterpulladmin_title'),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    
  );
  
    $form['twitterpulladmin_nb'] = array(
    '#title' => t('Number of tweets'),
    '#type' => 'textfield',
    '#default_value' => variable_get('twitterpulladmin_nb'),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    
  );
  return system_settings_form($form);
}

/**
 * Implements _form_validate().
 */
function twitterpulladmin_admin_settings_form_validate($form, &$form_state) {
}

function twitterpulladmin_admin_settings_form_submit($form, &$form_state) {
$ac=$form_state['values']['twitterpulladmin_account'];
variable_set('twitterpulladmin_account', $ac);
$nb=$form_state['values']['twitterpulladmin_nb'];
variable_set('twitterpulladmin_nb', $nb);
$tl=$form_state['values']['twitterpulladmin_title'];
variable_set('twitterpulladmin_title', $tl);
}