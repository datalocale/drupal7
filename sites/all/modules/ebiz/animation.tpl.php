<?php  global $base_path;?>
<div id="contentanimationcenter">

	<div class="circleBig">
		<img
			src="<?php echo $base_path;?>sites/all/themes/cg33/images/wide/homecentre.png"
			border="0" usemap="#Map">
			<h2 class="titreanimation"><?php echo t("Data");?></h2>
		<map name="Map">
			  <area id="center" shape="circle" coords="151,151,149"  href="<?php echo $base_path;?>donnees">

		</map>
	</div>
	<div style='opacity: 0;' id="circle_center" class="circle">
		<ul class="animation">
			<li class="firstlink"><?php echo l(t("Thématiques"),"thematiques",array('attributes' => array('title' => t("thématiques : voir la liste des thématiques de données"))));?>
			</li>
			<li class="secondlink"><?php echo l(t("Données"),"searchpackages",array('attributes' => array('title' => t("données : voir les jeux de données"))));?>
			</li>
			<li class="thirdlink"><?php echo l(t("Diffuseurs"),"groupes",array('attributes' => array('title' => t("diffuseurs : voir la liste des diffuseurs de données"))));?></li>
		</ul>
<br clear="all"/>
	</div>

	<div style="clear: both;"></div>
</div>
<div style="clear: both;"></div>

<div id="contentanimationcenternarrow">

	<div class="circleBignarrow">
			<h2 class="titreanimationnarrow"><?php echo l(t("Data"),"donnees");?></h2>
		
	</div>

	<div  id="circle_centernarrow" class="circlenarrow">
		<ul class="animation">
			<li class="firstlink"><?php echo l(t("Thématiques"),"thematiques",array('attributes' => array('title' => t("thématiques : voir la liste des thématiques de données"))));?>
			</li>
			<li class="secondlink"><?php echo l(t("Données"),"searchpackages",array('attributes' => array('title' => t("données : voir les jeux de données"))));?>
			</li>
			<li class="thirdlink"><?php echo l(t("Diffuseurs"),"groupes",array('attributes' => array('title' => t("diffuseurs : voir la liste des diffuseurs de données"))));?></li>
		</ul>
<br clear="all"/>
	</div>

	<div style="clear: both;"></div>
</div>
<div style="clear: both;"></div>

