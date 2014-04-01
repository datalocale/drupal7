<?php  global $base_path;?>
<div id="contentanimationleft">

	<div class="circleBigleft" id="left">
		<img
			src="<?php echo $base_path;?>sites/all/themes/cg33/images/wide/homeleft.png"
			border="0" usemap="#Map2">
		<h2 class="titreanimation">
		<?php echo t("Sources");?>
		</h2>
		<map name="Map2">
			<area id="left" shape="circle" coords="147,146,147"
				href="<?php echo $base_path;?>/sources">

		</map>
	</div>
	<div style="opacity: 0;" id="circle_left" class="circle">
		<ul class="animation">
			<li class="firstlinkleft"><?php echo  l(t("References"),"references",array('attributes' => array('title' => t("références: voir la liste des données de référence"))));?>
			</li>
			<li class="secondlinkleft"><?php echo l(t("Codes sources"),"codessources",array('attributes' => array('title' => t("code source : voir la liste des codes source du projet datalocale"))));?>
			</li>
			<li class="thirdlinkleft"><?php echo l(t("Audit"),"bonnespratiques",array('attributes' => array('title' => t("Audit : voir la liste des bonnes pratiques et leur application"))));?>
			</li>
		</ul>
	</div>

	<div style="clear: both;"></div>
</div>
<div style="clear: both;"></div>

<div id="contentanimationleftnarrow">

	<div class="circleBigleftnarrow" id="left">
		<h2 class="titreanimationnarrow">
		<?php echo l(t("Sources"),"sources");?>
		</h2>

	</div>

	<div id="circle_leftnarrow">
		<ul class="animation">
			<li class="firstlinkleft"><?php echo  l(t("References"),"references",array('attributes' => array('title' => t("références: voir la liste des données de référence"))));?>
			</li>
			<li class="secondlinkleft"><?php echo l(t("Codes sources"),"codessources",array('attributes' => array('title' => t("code source : voir la liste des codes source du projet datalocale"))));?>
			</li>
			<li class="thirdlinkleft"><?php echo l(t("Audit"),"bonnespratiques",array('attributes' => array('title' => t("Audit : voir la liste des bonnes pratiques et leur application"))));?>
			</li>
		</ul>
	</div>

	<div style="clear: both;"></div>
</div>
<div style="clear: both;"></div>
