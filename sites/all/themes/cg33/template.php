<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function cg33_process_region(&$vars) {
	//echo 'VARS: '.$vars['elements']['#region'].'<br />';
	if (in_array($vars['elements']['#region'], array('user_first','contentbottom'))) {
	$theme = alpha_get_theme();
	//echo '<pre>';print_r($theme->page);echo '</pre>';
	switch ($vars['elements']['#region']){

	  case 'user_first':
		$vars['main_menu'] = $theme->page['main_menu'];
		$vars['site_name'] = $theme->page['site_name'];
		$vars['logo'] = $theme->page['logo'];
		$vars['logo_img'] = $vars['logo'] ? '<img src="' . $vars['logo'] . '" alt="' . check_plain($vars['site_name']) . '" id="logo" />' : '';
		$vars['linked_logo_img'] = $vars['logo'] ? l($vars['logo_img'], '<front>', array('attributes' => array('rel' => 'home', 'title' => check_plain($vars['site_name'])), 'html' => TRUE)) : '';
		break;
	   case 'contentbottom':
        $vars['title_prefix'] = $theme->page['title_prefix'];
        $vars['title'] = $theme->page['title'];
        $vars['title_suffix'] = $theme->page['title_suffix'];
        $vars['tabs'] = $theme->page['tabs'];
        $vars['action_links'] = $theme->page['action_links'];
        $vars['title_hidden'] = $theme->page['title_hidden'];
        $vars['feed_icons'] = $theme->page['feed_icons'];
        break;
	}
  }
}

function cg33_preprocess_node(&$variables) {

unset($variables['content']['links']['statistics']['#links']['statistics_counter']['title']);
 


  // For note nodes, disable comments in the node template.
 /* if ($variables['type'] == 'ckan_package') {
    $variables['comment'] = 0;
  }*/
}

function cg33_css_alter(&$css) {
    foreach ($css as $key => $value) {
        if (preg_match('/^ie::(\S*)/', $key)) {
            unset($css[$key]);
        } else {
            $css[$key]['browsers']['IE'] = TRUE;
        }
    }
}