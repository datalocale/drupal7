<div id="content"><div id="navs">
<?php
//print_r($pienavs);
$title=getdepartmenettitle($pienavs['id']);
$items[]='<a href="javascript:;" class=" depnavs" rel="moyenne" >'.t("Moyenne nationale").'</a>';
$items[]='<a href="javascript:;" class="active depnavs" rel="'.$pienavs['id'].'" >'.t("Valeur du departement").' '.$title.'</a>';

echo  theme('item_list',array('items' => $items));?>
<div class="tauxfinal class<?php echo $pienavs['id'];?>"><?php echo t('Indice de gouvernance')?> : <span class="rouge"><?php echo gettauxdegouvernance($pienavs['id']);?>%</span></div>
<div class="tauxfinal classmoyenne"><?php echo t('Indice de gouvernance')?> : <span class="rouge"><?php echo gettauxdegouvernance('moyenne');?>%</span></div>

</div></div>

