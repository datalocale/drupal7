<?  function opquast_load_data_admin_settings_form($form_state) {
	$arrvoc=get_opquast_vocabularies();
	
	$form['opquasttax'] = array(
    '#type' => 'select',
    '#title' => t('List of vocabularies'),
    '#options' => $arrvoc,
    '#required' => TRUE,
	'#default_value' => variable_get('opquast_tagsvocab')

	);
$form['#submit'][] = 'opquast_load_data_admin_settings_form_submit';
	return system_settings_form($form);

}

function get_opquast_vocabularies(){
	$query = db_select('taxonomy_vocabulary',"l")->fields('l', array('vid','name'));
	$result = $query->execute();
	foreach($result as $r)$arrvoc[$r->vid]=$r->name;
	return $arrvoc;
}
function opquast_load_data_admin_settings_form_submit($form, &$form_state) {

	$tags=$form_state['values']['opquasttax'];
	variable_set('opquast_tagsvocab', $tags);
}