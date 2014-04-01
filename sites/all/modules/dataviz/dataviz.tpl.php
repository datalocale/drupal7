<div id="navs">
<?php
$title=getdepartmenettitle(1);
$items[]='<a href="javascript:;" class=" depnavs" rel="moyenne"  >'.t("Moyenne nationale").'</a>';
$items[]='<a href="javascript:;" class="active depnavs" rel="1" >'.t("Valeurs du departement").' :'.$title.' </a>';

echo  theme('item_list',array('items' => $items));?>
<div class="tauxfinal class1"><?php echo t('Indice de gouvernance')?> : <span class="rouge"><?php echo gettauxdegouvernance(1);?>%</span></div>
<div class="tauxfinal classmoyenne"><?php echo t('Indice de gouvernance')?> : <span class="rouge"><?php echo gettauxdegouvernance('moyenne');?>%</span></div>
<br clear="all" />
</div>
<div class="desc"><?php echo variable_get('datavizcalcul_description');?></div>
<a class="sliderlink" href="#"></a>
<div id="contentdataviz">
</div>
<div id="bonhommes">
</div>
<br clear="all"/>