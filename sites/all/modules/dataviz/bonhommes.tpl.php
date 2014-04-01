
<?php  global $base_path;
//print_r($arr);
$valeurs=unserialize(getbonhommes($arr['id'],$arr['iddep']));
$arrlabels=unserialize(variable_get('datavizcalcul_label_personage'));
$titrearr=unserialize(variable_get('datavizcalcul_labels'));

?>
<h3><?php echo $titrearr[$arr['id']];?></h3>
<ul>
<?php foreach($valeurs as $k=>$v){
$var = number_format($v,2);
$var = number_format($var,2); //echo $var;
$nomimg=$k.".png";
$nomimgcolored=$k."_colored.png";
?><li class="perso">
<div id="taux1" class="taux">
	<div id="tauxcontainer" >
		<div class="frame">
			<img src="<?php echo $base_path?>/sites/all/modules/dataviz/images/<?php echo $nomimg;?>"/>
		</div>
		<div id="tauxoverlay"  rel ="<?php echo $var;?>" class="overlayt" >
			<div id="tauxblock">&nbsp;</div>
			<div id="tauxedge">&nbsp;</div>
		</div>
		<img class="loadpic" src="<?php echo $base_path?>/sites/all/modules/dataviz/images/<?php echo $nomimgcolored;?>"/>
	</div>
</div>
<div class="percentageouter"><div class="percentage" id="per<?php echo $k;?>"></div>
<div class="description"><?php echo $arrlabels[$k];?></div></div>

</li>

<?php  }?>

</ul>