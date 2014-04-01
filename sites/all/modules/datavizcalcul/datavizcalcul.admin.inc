<?php
/**
 * Implements settings form
 */
function datavizcalcul_admin_settings_form($form_state) {

	$form['urlfile1'] = array(
    '#title' => t('Taux de participation aux élections présidentielles 2007 '),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_pat_elec_pres_2007','2013-01-14-164721DVZ_IG_1-1_Presidentielles_2007.csv' ),
    '#required' => TRUE,

	);
	$form['urlfile2'] = array(
    '#title' => t('Taux de participation aux élections présidentielles 2012'),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_pat_elec_pres_2012','2013-01-14-164722DVZ_IG_1-2_Presidentielles2012.csv'),
    '#required' => TRUE,

	);
	$form['urlfile3'] = array(
    '#title' => t('Taux de participation aux élections cantonales 2008'),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_pat_elec_cant_2008','2013-01-14-164745DVZ_IG_1-3_Cantonales_2008.csv'),
    '#required' => TRUE,

	);
	$form['urlfile4'] = array(
    '#title' => t('Taux de participation aux élections cantonales 2011'),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_pat_elec_cant_2011','DVZ_IG_1-4_Cantonales2011.csv'),
    '#required' => TRUE,

	);
	$form['urlfile5'] = array(
    '#title' => t('Taux de participation aux élections municipales 2008'),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_pat_elec_mun_2008','2013-01-14-164757DVZ_IG_1-5_Municipales2008.csv'),
    '#required' => TRUE,

	);
	$form['urlfile6'] = array(
    '#title' => t('Taux de participation aux élections légilstaives 2007'),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_pat_elec_leg_2007','2013-01-14-164751DVZ_IG_1-6_Legislatives2007.csv'),
    '#required' => TRUE,

	);
	$form['urlfile7'] = array(
    '#title' => t('Taux de participation aux élections légilstaives 2012'),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_pat_elec_leg_2012','2013-01-14-164752DVZ_IG_1-7_Legislatives2012.csv'),
    '#required' => TRUE,

	);
	$form['urlfile8'] = array(
    '#title' => t("Taux d'inscription sur les listes électorales"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_inscript_electo','2013-01-14-164719DVZ_IG_1-8_InscriptionsListes.csv'),
    '#required' => TRUE,

	);
	$form['urlfile9'] = array(
    '#title' => t("Nombre de référendum d'initiative locale pour 100 000 habitants"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_particip_init_publ','2013-01-14-164727DVZ_IG_1-9_Referendum.csv'),
    '#required' => TRUE,

	);
	$form['urlfile10'] = array(
    '#title' => t("Nombre de création d'associations pour 100 habitants"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_nb_creat_asso_100','DVZ_IG_2-1_Assos.csv'),
    '#required' => TRUE,

	);
	$form['urlfile11'] = array(
    '#title' => t("Nombre de juniors associations pour 100 habitants de moins de 18 ans"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_nb_jun_ass_100','2013-01-14-164740DVZ_IG_2-2_JuniorAssos.csv'),
    '#required' => TRUE,

	);
	$form['urlfile12'] = array(
    '#title' => t("Taux des donateurs imposables déclarant un don aux associations"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_don_impo_decl_don_assoc','2013-01-14-164801DVZ_IG_2-3_Don.csv'),
    '#required' => TRUE,

	);
	$form['urlfile13'] = array(
    '#title' => t("Taux de participation aux élections prud'homales"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_taux_part_elect_prud','2013-01-14-164726DVZ_IG_2-4_PrudHom.csv'),
    '#required' => TRUE,

	);
	$form['urlfile14'] = array(
    '#title' => t("Nombre de saisine de la HALDE pour 10 000 habitants par département"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_nb_saisi_hald','2013-01-14-164714DVZ_IG_2-5_SaisinesHALDE.csv'),
    '#required' => TRUE,

	);
	$form['urlfile15'] = array(
    '#title' => t("Part de femmes parmi les élus (Maires et Conseillers généraux)"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_pat_femm_elu','2013-01-14-164716DVZ_IG_2-7_Parite.csv'),
    '#required' => TRUE,

	);
	$form['urlfile16'] = array(
    '#title' => t("Ecart a la parité dans l'attribution des vice-présidences départementales"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_ecar_pari_att','2013-01-14-164805DVZ_IG_2-6_EluesFemmes.csv'),
    '#required' => TRUE,

	);
	$form['urlfile17'] = array(
    '#title' => t("Budget moyen des conseils Instances et de développement"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_bud_moy_cons_dev','2013-01-14-164748DVZ_IG_3-1_BudgetCD.csv'),
    '#required' => TRUE,

	);
	$form['urlfile18'] = array(
    '#title' => t(" Nombre de salariés pour 10 membres des conseils de développement du département"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_nb_sal_10_mem','2013-01-14-164749DVZ_IG_2-1_Assos.csv'),
    '#required' => TRUE,

	);
	$form['urlfile19'] = array(
    '#title' => t("Part des collectivités engagées dans un Agenda 21 reconnu "),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_coll_eng_Agend','2013-01-14-164759DVZ_IG_4-1_A21.csv'),
    '#required' => TRUE,

	);
	$form['urlfile20'] = array(
    '#title' => t("Part de la population couverte par un A21 'de proximité' (hors département et région)"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_pop_couv_a21','2013-01-14-164718DVZ_IG_4-2_PopA21.csv'),
    '#required' => TRUE,

	);
	$form['urlfile21'] = array(
    '#title' => t(" Existence explicite de vice présidence ou de délégations Développement Durable et Démocratie Locale ou citoyenneté et engagement des collectivités dans une démarche AFAQ 26000"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_exist_explic_vice_pres','2013-01-14-164737DVZ_IG_4-3_VPDDRSO.csv'),
    '#required' => TRUE,

	);
	$form['urlfile22'] = array(
    '#title' => t("Coopération intercommunale : part des dépenses mutualisées a l'échelon intercommunal"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_coop_inter_part_dep','2013-01-14-164724DVZ_IG_4-4_DepensesMutualise.csv'),
    '#required' => TRUE,

	);
	$form['urlfile23'] = array(
    '#title' => t("Part de la population départementale couverte par un Schéma de Cohérence Territoriale (SCOT)"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_pop_dep_couv','2013-01-14-164732DVZ_IG_4-5_SCOT.csv'),
    '#required' => TRUE,

	);
	$form['urlfile24'] = array(
    '#title' => t("Part des SCOT du territoire participant a une démarche interSCOT"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_scott_terr_part','2013-01-14-164738DVZ_IG_4-6_InterSCOT.csv'),
    '#required' => TRUE,

	);
	$form['urlfile25'] = array(
    '#title' => t(" Part des collectivités engagées dans une démarche qualité"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_coll_eng_dem_qual','2013-01-14-164743DVZ_IG_5-1_Certif.csv'),
    '#required' => TRUE,

	);
	$form['urlfile26'] = array(
    '#title' => t("Moyenne départementale des notes obtenues sur le baromètre des 'villes accessibles' (accessibilité et handicap)"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_moy_dep_note_obt','2013-01-14-164735DVZ_IG_5-2_VillesAccessibles.csv'),
    '#required' => TRUE,

	);

	$form['urlfile27'] = array(
    '#title' => t("Niveaux d'animation communautaire"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_niv_anim_commu_fac','2013-01-14-164729DVZ_IG_5-4_ReseauxSOCIAUX.csv'),
    '#required' => TRUE,

	);
	$form['urlfile28'] = array(
    '#title' => t("Classement 'Villes Internet'"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_class_vill_intern','2013-01-14-164734DVZ_IG_5-3_Villes_Internet.csv'),
    '#required' => TRUE,

	);
	$form['urlfile29'] = array(
    '#title' => t("Part des collectivités engagées dans un open data"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_coll_eng_open_data','2013-01-14-164800DVZ_IG_5-5_OpenData.csv'),
    '#required' => TRUE,

	);
	$form['urlfile30'] = array(
    '#title' => t("Part des délibérations de la collectivité accessibles sur le portail internet"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_delib_coll_acce_port_int','2013-01-14-164754DVZ_IG_5-6_Delibs.csv'),
    '#required' => TRUE,

	);
	$form['urlfile31'] = array(
    '#title' => t("Part des marchés des collectivités intégrant le mot clé 'concertation' "),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_mar_coll','2013-01-14-164755DVZ_IG_5-7_MarchesConcertation.csv'),
    '#required' => TRUE,

	);

	$form['urlfile32'] = array(
    '#title' => t("Poids de l'économie sociale dans les emplois salariés du territoire"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_poids_econ_soc_empl','2013-01-14-164808DVZ_IG_6-1_ESS.csv'),
    '#required' => TRUE,

	);
	$form['urlfile33'] = array(
    '#title' => t("Part des écoles labellisées 'Eco-école'"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_ecol_lab','2013-01-14-164803DVZ_IG_7-1_EcoEcoles.csv'),
    '#required' => TRUE,

	);
	$form['urlfile34'] = array(
    '#title' => t("Part des établissements scolaires en Agenda21"),
    '#type' => 'textfield',
    '#default_value' => variable_get('datavizcalcul_part_etab_scol_ag21','2013-01-14-164741DVZ_IG_7-2_A21Scolaires.csv'),
    '#required' => TRUE,

	);


	$form['#submit'][] = 'datavizcalcul_admin_settings_form_submit';
	return system_settings_form($form);
}

/**
 * Implements _form_validate().
 */
function datavizcalcul_admin_settings_form_validate($form, &$form_state) {

}
/**
 * Implements _form_submit().
 */
function datavizcalcul_admin_settings_form_submit($form, &$form_state) {

	$urlfile1=$form_state['values']['urlfile1'];
	variable_set('datavizcalcul_taux_pat_elec_pres_2007', $urlfile1);

	$urlfile2=$form_state['values']['urlfile2'];
	variable_set('datavizcalcul_taux_pat_elec_pres_2012', $urlfile2);

	$urlfile3=$form_state['values']['urlfile3'];
	variable_set('datavizcalcul_taux_pat_elec_cant_2008', $urlfile3);

	$urlfile4=$form_state['values']['urlfile4'];
	variable_set('datavizcalcul_taux_pat_elec_cant_2011', $urlfile4);

	$urlfile5=$form_state['values']['urlfile5'];
	variable_set('datavizcalcul_taux_pat_elec_mun_2008', $urlfile5);

	$urlfile6=$form_state['values']['urlfile6'];
	variable_set('datavizcalcul_taux_pat_elec_leg_2007', $urlfile6);

	$urlfile7=$form_state['values']['urlfile7'];
	variable_set('datavizcalcul_taux_pat_elec_leg_2012', $urlfile7);

	$urlfile8=$form_state['values']['urlfile8'];
	variable_set('datavizcalcul_inscript_electo', $urlfile8);

	$urlfile9=$form_state['values']['urlfile9'];
	variable_set('datavizcalcul_particip_init_publ', $urlfile9);

	$urlfile10=$form_state['values']['urlfile10'];
	variable_set('datavizcalcul_nb_creat_asso_100', $urlfile10);

	$urlfile11=$form_state['values']['urlfile11'];
	variable_set('datavizcalcul_nb_jun_ass_100', $urlfile11);

	$urlfile12=$form_state['values']['urlfile12'];
	variable_set('datavizcalcul_taux_don_impo_decl_don_assoc', $urlfile12);

	$urlfile13=$form_state['values']['urlfile13'];
	variable_set('datavizcalcul_taux_part_elect_prud', $urlfile13);

	$urlfile14=$form_state['values']['urlfile14'];
	variable_set('datavizcalcul_nb_saisi_hald', $urlfile14);

	$urlfile15=$form_state['values']['urlfile15'];
	variable_set('datavizcalcul_pat_femm_elu', $urlfile15);

	$urlfile16=$form_state['values']['urlfile16'];
	variable_set('datavizcalcul_ecar_pari_att', $urlfile16);

	$urlfile17=$form_state['values']['urlfile17'];
	variable_set('datavizcalcul_bud_moy_cons_dev', $urlfile17);

	$urlfile18=$form_state['values']['urlfile18'];
	variable_set('datavizcalcul_nb_sal_10_mem', $urlfile18);


	$urlfile19=$form_state['values']['urlfile19'];
	variable_set('datavizcalcul_part_coll_eng_Agend', $urlfile19);

	$urlfile20=$form_state['values']['urlfile20'];
	variable_set('datavizcalcul_part_pop_couv_a21', $urlfile20);

	$urlfile21=$form_state['values']['urlfile21'];
	variable_set('datavizcalcul_exist_explic_vice_pres', $urlfile21);

	$urlfile22=$form_state['values']['urlfile22'];
	variable_set('datavizcalcul_coop_inter_part_dep', $urlfile22);
	$urlfile23=$form_state['values']['urlfile23'];
	variable_set('datavizcalcul_part_pop_dep_couv', $urlfile23);

	$urlfile24=$form_state['values']['urlfile24'];
	variable_set('datavizcalcul_part_scott_terr_part', $urlfile24);

	$urlfile25=$form_state['values']['urlfile25'];
	variable_set('datavizcalcul_part_coll_eng_dem_qual', $urlfile25);


	$urlfile26=$form_state['values']['urlfile26'];
	variable_set('datavizcalcul_moy_dep_note_obt', $urlfile26);

	$urlfile27=$form_state['values']['urlfile27'];
	variable_set('datavizcalcul_niv_anim_commu_fac', $urlfile27);

	$urlfile28=$form_state['values']['urlfile28'];
	variable_set('datavizcalcul_class_vill_intern', $urlfile28);

	$urlfile29=$form_state['values']['urlfile29'];
	variable_set('datavizcalcul_part_coll_eng_open_data', $urlfile29);

	$urlfile30=$form_state['values']['urlfile30'];
	variable_set('datavizcalcul_part_delib_coll_acce_port_int', $urlfile30);

	$urlfile31=$form_state['values']['urlfile31'];
	variable_set('datavizcalcul_part_mar_coll', $urlfile31);

	$urlfile32=$form_state['values']['urlfile32'];
	variable_set('datavizcalcul_poids_econ_soc_empl', $urlfile32);

	$urlfile33=$form_state['values']['urlfile33'];
	variable_set('datavizcalcul_part_ecol_lab', $urlfile33);

	$urlfile34=$form_state['values']['urlfile34'];
	variable_set('datavizcalcul_part_etab_scol_ag21', $urlfile34);

	drupal_set_message(t("Pour valider vos modification sur le chart merci de mettre a jour les calculs cliquant sur le lien").l(t('Update pie data'),'page_dataviz_calcul',array('query' => array('destination' => 'admin/config/system/datavizcalcul/fichiers'))));
}

function datavizcalcul_color_form($form_state) {
	$arrcouleur['demo_loc']='#88745b';
	$arrcouleur['sect_eco']='#ebd944';
	$arrcouleur['admin_serv']='#b3b3b3';
	$arrcouleur['cito_droi_civ']='#3cb9e6';
	$arrcouleur['inst_act_part']='#3db158';
	$arrcouleur['proj_ter']='#e84837';
	$arrcouleur['mis_cap_pers']='#d1d1d1';
$arrcouleurs=unserialize(variable_get('datavizcalcul_colors',serialize($arrcouleur)));

	$arrlabel['demo_loc']=t("Démocratie locale");
	$arrlabel['sect_eco']=t("Secteur Economique");
	$arrlabel['admin_serv']=t("Administration et services");
	$arrlabel['cito_droi_civ']=t("Citoyenneté et droits civiquese");
	$arrlabel['inst_act_part']=t("Instances et actions participatives des collectivités");
	$arrlabel['proj_ter']=t("Projet territorial");
	$arrlabel['mis_cap_pers']=t("Mise en capacité des personnes");
	$arrlabels=unserialize(variable_get('datavizcalcul_labels',serialize($arrlabel)));



	$form['couleur1'] = array(
    '#title' => t('Couleur Democratie locale'),
    '#type' => 'textfield',
    '#default_value' => $arrcouleurs['demo_loc'],
    '#required' => TRUE,

	);
	$form['couleur2'] = array(
    '#title' => t('Couleur Citoyennete et droits civiques'),
    '#type' => 'textfield',
    '#default_value' => $arrcouleurs['cito_droi_civ'],
    '#required' => TRUE,

	);
	$form['couleur3'] = array(
    '#title' => t('Couleur Couleur Instances actions participatives'),
    '#type' => 'textfield',
    '#default_value' => $arrcouleurs['inst_act_part'],
    '#required' => TRUE,

	);
		$form['couleur4'] = array(
    '#title' => t('Couleur Projet territorial'),
    '#type' => 'textfield',
    '#default_value' => $arrcouleurs['proj_ter'],
    '#required' => TRUE,

	);
		$form['couleur5'] = array(
    '#title' => t('Couleur Administration et services'),
    '#type' => 'textfield',
    '#default_value' => $arrcouleur['admin_serv'],
    '#required' => TRUE,

	);
		$form['couleur6'] = array(
    '#title' => t('Couleur Secteur eco'),
    '#type' => 'textfield',
    '#default_value' => $arrcouleur['sect_eco'],
    '#required' => TRUE,

	);
		$form['couleur7'] = array(
    '#title' => t('Couleur Mise en capacite des personnes'),
    '#type' => 'textfield',
    '#default_value' => $arrcouleur['mis_cap_pers'],
    '#required' => TRUE,

	);

	$form['label1'] = array(
    '#title' => t('Label Democratie locale'),
    '#type' => 'textfield',
    '#default_value' => $arrlabels['demo_loc'],
    '#required' => TRUE,

	);
	$form['label2'] = array(
    '#title' => t('Label Citoyennete et droits civiques'),
    '#type' => 'textfield',
    '#default_value' => $arrlabels['cito_droi_civ'],
    '#required' => TRUE,

	);
	$form['label3'] = array(
    '#title' => t('Label Instances actions participatives'),
    '#type' => 'textfield',
    '#default_value' => $arrlabels['inst_act_part'],
    '#required' => TRUE,

	);
		$form['label4'] = array(
    '#title' => t('Label Projet territorial'),
    '#type' => 'textfield',
    '#default_value' => $arrlabels['proj_ter'],
    '#required' => TRUE,

	);
		$form['label5'] = array(
    '#title' => t('Label Administration et services'),
    '#type' => 'textfield',
    '#default_value' => $arrlabels['admin_serv'],
    '#required' => TRUE,

	);
		$form['label6'] = array(
    '#title' => t('Label Secteur eco'),
    '#type' => 'textfield',
    '#default_value' => $arrlabels['sect_eco'],
    '#required' => TRUE,

	);
		$form['label7'] = array(
    '#title' => t('Label Mise en capacite des personnes'),
    '#type' => 'textfield',
    '#default_value' => $arrlabels['mis_cap_pers'],
    '#required' => TRUE,

	);



	$form['#submit'][] = 'datavizcalcul_color_form_submit';
	return system_settings_form($form);
}

function datavizcalcul_color_form_submit($form, &$form_state) {

	$arrcouleur['demo_loc']=$form_state['values']['couleur1'];
	$arrcouleur['sect_eco']=$form_state['values']['couleur6'];
	$arrcouleur['admin_serv']=$form_state['values']['couleur5'];
	$arrcouleur['cito_droi_civ']=$form_state['values']['couleur2'];
	$arrcouleur['inst_act_part']=$form_state['values']['couleur3'];
	$arrcouleur['proj_ter']=$form_state['values']['couleur4'];
	$arrcouleur['mis_cap_pers']=$form_state['values']['couleur7'];
	variable_set('datavizcalcul_colors', serialize($arrcouleur));

	$arrlabels['demo_loc']=$form_state['values']['label1'];
	$arrlabels['sect_eco']=$form_state['values']['label6'];
	$arrlabels['admin_serv']=$form_state['values']['label5'];
	$arrlabels['cito_droi_civ']=$form_state['values']['label2'];
	$arrlabels['inst_act_part']=$form_state['values']['label3'];
	$arrlabels['proj_ter']=$form_state['values']['label4'];
	$arrlabels['mis_cap_pers']=$form_state['values']['label7'];
	variable_set('datavizcalcul_labels', serialize($arrlabels));

drupal_set_message(t("Pour valider vos modification sur le chart merci de mettre a jour les calculs cliquant sur le lien").l(t('Update pie data'),'page_dataviz_calcul',array('query' => array('destination' => 'admin/config/system/datavizcalcul/colorsandlabels'))));

}

function datavizcalcul_labelpersonnages_form($form_state){

	$arrlabelpersonnage['part_elec']=t("Participation aux élections");
	$arrlabelpersonnage['insc_elect']=t("Inscription électorale");
	$arrlabelpersonnage['part_init_pub']=t("Participation d'initiative publique");
	$arrlabelpersonnage['eng_loc']=t("Engagement local");
	$arrlabelpersonnage['synd']=t("Syndicats");
	$arrlabelpersonnage['resp_droi_lutte']=t("Respect des droits et lutte contre les discriminations");
	$arrlabelpersonnage['par']=t("Parité");
	$arrlabelpersonnage['cons_dev']=t("Conseil de développement");
	$arrlabelpersonnage['agend_21']=t("Agenda 21");
	$arrlabelpersonnage['del_pol']=t("Délégation politique");
	$arrlabelpersonnage['renf_coop_sol_terr']=t("Renforcer la coopération et la solidarité entre territoires");
	$arrlabelpersonnage['dem_qual_serv']=t("Démarche qualité des services");
	$arrlabelpersonnage['serv_acc']=t("Services et accessibilité");
	$arrlabelpersonnage['int_coll']=t("Internet et collectivités");
	$arrlabelpersonnage['acc_inf_donn']=t("Accès aux informations et aux données");
	$arrlabelpersonnage['mar_pub']=t("Marchés publics");
	$arrlabelpersonnage['eco_soc_sol']=t("Economie Sociale et Solidaire");
	$arrlabelpersonnage['edu_dev_dur']=t("Education au Développement Durable");
	$arrlabelpersonnages=unserialize(variable_get('datavizcalcul_label_personage',serialize($arrlabelpersonnage)));

	$form['demo_loc'] = array(
  '#type' => 'fieldset',
  '#title' => t('Démocratie locale'),
  '#weight' => 5,
  '#collapsible' => TRUE,
  '#collapsed' => FALSE,
);

	$form['demo_loc']['labelp1'] = array(
    '#title' => t("Label de Participation aux élections (1er tour)"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['part_elec'],
    '#required' => TRUE,

	);

	$form['demo_loc']['labelp2'] = array(
    '#title' => t("Label de Inscription électorale"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['insc_elect'],
    '#required' => TRUE,

	);

	$form['demo_loc']['labelp3'] = array(
    '#title' => t("Label de Participation d'initiative publique"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['part_init_pub'],
    '#required' => TRUE,

	);

	$form['cito_droi_civ'] = array(
  '#type' => 'fieldset',
  '#title' => t('Citoyenneté et droits civiques'),
  '#weight' => 5,
  '#collapsible' => TRUE,
  '#collapsed' => FALSE,
);

	$form['cito_droi_civ']['labelp4'] = array(
    '#title' => t("Label de Engagement local"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['eng_loc'],
    '#required' => TRUE,

	);

	$form['cito_droi_civ']['labelp5'] = array(
    '#title' => t("Label de Syndicats"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['synd'],
    '#required' => TRUE,

	);

	$form['cito_droi_civ']['labelp6'] = array(
    '#title' => t("Label de Respect des droits et lutte contre les discriminations"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['resp_droi_lutte'],
    '#required' => TRUE,

	);

	$form['cito_droi_civ']['labelp7'] = array(
    '#title' => t("Label de Parité"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['par'],
    '#required' => TRUE,

	);



		$form['inst_act_part'] = array(
  '#type' => 'fieldset',
  '#title' => t('Instances et actions participatives des collectivités'),
  '#weight' => 5,
  '#collapsible' => TRUE,
  '#collapsed' => FALSE,
);

	$form['inst_act_part']['labelp8'] = array(
    '#title' => t("Label de Conseil de développement"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['cons_dev'],
    '#required' => TRUE,

	);


		$form['proj_ter'] = array(
  '#type' => 'fieldset',
  '#title' => t('Projet territorial '),
  '#weight' => 5,
  '#collapsible' => TRUE,
  '#collapsed' => FALSE,
);


	$form['proj_ter']['labelp9'] = array(
    '#title' => t("Label de Agenda 21"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['agend_21'],
    '#required' => TRUE,

	);

	$form['proj_ter']['labelp10'] = array(
    '#title' => t("Label de Délégation politique"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['del_pol'],
    '#required' => TRUE,

	);

		$form['proj_ter']['labelp11'] = array(
    '#title' => t("Label de Renforcer la coopération et la solidarité entre territoires"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['renf_coop_sol_terr'],
    '#required' => TRUE,

	);






		$form['admin_serv'] = array(
  '#type' => 'fieldset',
  '#title' => t('Administration et services'),
  '#weight' => 5,
  '#collapsible' => TRUE,
  '#collapsed' => FALSE,
);
	$form['admin_serv']['labelp12'] = array(
    '#title' => t("Label de Démarche qualité des services"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['dem_qual_serv'],
    '#required' => TRUE,

	);
	$form['admin_serv']['labelp13'] = array(
    '#title' => t("Label de Services et accessibilité "),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['serv_acc'],
    '#required' => TRUE,

	);
	$form['admin_serv']['labelp14'] = array(
    '#title' => t("Label de Internet et collectivités"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['int_coll'],
    '#required' => TRUE,

	);
	$form['admin_serv']['labelp15'] = array(
    '#title' => t("Label de Accès aux informations et aux données"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['acc_inf_donn'],
    '#required' => TRUE,

	);
	$form['admin_serv']['labelp16'] = array(
    '#title' => t("Label de Marchés publics"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['mar_pub'],
    '#required' => TRUE,

	);

	$form['sect_eco'] = array(
  '#type' => 'fieldset',
  '#title' => t('Secteur Economique'),
  '#weight' => 5,
  '#collapsible' => TRUE,
  '#collapsed' => FALSE,
);

$form['sect_eco']['labelp17'] = array(
    '#title' => t("Label de Economie Sociale et Solidaire"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['eco_soc_sol'],
    '#required' => TRUE,

	);


$form['mis_cap_pers'] = array(
  '#type' => 'fieldset',
  '#title' => t('Mise en capacité des personnes'),
  '#weight' => 5,
  '#collapsible' => TRUE,
  '#collapsed' => FALSE,
);


	$form['mis_cap_pers']['labelp18'] = array(
    '#title' => t("Label de Education au Développement Durable"),
    '#type' => 'textfield',
	'#default_value'=>$arrlabelpersonnages['edu_dev_dur'],
    '#required' => TRUE,

	);

	$form['#submit'][] = 'datavizcalcul_labelpersonnages_form_submit';
	return system_settings_form($form);




	}



function datavizcalcul_labelpersonnages_form_submit($form, &$form_state) {
//print_r($form_state);

	$arrlabelpersonnage['part_elec']=$form_state['values']['labelp1'];
	$arrlabelpersonnage['insc_elect']=$form_state['values']['labelp2'];;
	$arrlabelpersonnage['part_init_pub']=$form_state['values']['labelp3'];
	$arrlabelpersonnage['eng_loc']=$form_state['values']['labelp4'];
	$arrlabelpersonnage['synd']=$form_state['values']['labelp5'];
	$arrlabelpersonnage['resp_droi_lutte']=$form_state['values']['labelp6'];
	$arrlabelpersonnage['par']=$form_state['values']['labelp7'];;
	$arrlabelpersonnage['cons_dev']=$form_state['values']['labelp8'];
	$arrlabelpersonnage['agend_21']=$form_state['values']['labelp9'];
	$arrlabelpersonnage['del_pol']=$form_state['values']['labelp10'];
	$arrlabelpersonnage['renf_coop_sol_terr']=$form_state['values']['labelp11'];
	$arrlabelpersonnage['dem_qual_serv']=$form_state['values']['labelp12'];
	$arrlabelpersonnage['serv_acc']=$form_state['values']['labelp13'];
	$arrlabelpersonnage['int_coll']=$form_state['values']['labelp14'];
	$arrlabelpersonnage['acc_inf_donn']=$form_state['values']['labelp15'];
	$arrlabelpersonnage['mar_pub']=$form_state['values']['labelp16'];
	$arrlabelpersonnage['eco_soc_sol']=$form_state['values']['labelp17'];
	$arrlabelpersonnage['edu_dev_dur']=$form_state['values']['labelp18'];

	variable_set('datavizcalcul_label_personage', serialize($arrlabelpersonnage));
drupal_set_message(t("Pour valider vos modification sur le chart merci de mettre a jour les calculs cliquant sur le lien").l(t('Update pie data'),'page_dataviz_calcul',array('query' => array('destination' => 'admin/config/system/datavizcalcul/labelpersonnages'))));


}



function datavizcalcul_description_form($form_state) {

	$form['description'] = array(
'#title' => t('Description'),
'#type' => 'textarea',
'#description' => t ('Add a description'),
'#default_value' => variable_get('datavizcalcul_description'),
);


$form['#submit'][] = 'datavizcalcul_description_form_submit';
	return system_settings_form($form);

}

function datavizcalcul_description_form_submit($form, &$form_state) {

	$description=$form_state['values']['description'];
	variable_set('datavizcalcul_description', $description);
drupal_set_message(t("Pour valider vos modification sur le chart merci de mettre a jour les calculs cliquant sur le lien").l(t('Update pie data'),'page_dataviz_calcul',array('query' => array('destination' => 'admin/config/system/datavizcalcul/descriptions'))));

}

