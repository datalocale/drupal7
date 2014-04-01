<?php  global $base_path;?>
<div id="contentanimationright">

	<div class="circleBigright" id="right">
		<img src="<?php echo $base_path;?>sites/all/themes/cg33/images/wide/handhome.png"
			 border="0" usemap="#Map3">
			<h2 class="titreanimation"><?php echo t("Usages");?></h2>
		<map name="Map3">
		  <area id="right" shape="poly" coords="59,12,43,23,27,40,15,58,15,56,7,76,2,93,2,122,6,141,16,164,30,183,50,198,68,210,91,217,118,225,148,233,176,239,196,247,194,246,217,257,242,256,248,243,243,226,221,212,201,202,175,195,162,186,329,185,341,175,343,164,332,150,207,147,207,139,362,140,361,142,372,136,379,122,372,104,358,99,213,100,213,88,337,89,351,80,353,67,348,55,337,50,329,49,196,50,201,49,197,42,286,41,294,31,293,16,284,7,270,6,210,4,84,4"
		   href="<?php echo $base_path;?>/usages">

		</map>
	</div>

	<div style="opacity: 0;" id="circle_right" class="circle">
		<ul class="animation">
			<li class="firstlinkright"><?php echo l(t("Idées"),"idees",array('attributes' => array('title' => t("idées : partagez vos idées"))));?>
			</li>
			<li class="secondlinkright"><?php echo l(t("Docs"),"node/17023",array('attributes' => array('title' => t("doc : tutoriels et documentation"))));?>
			</li>
			<li class="thirdlinkright"><?php echo l(t("Applications"),"applications",array('attributes' => array('title' => t("applications : voir la liste des applications"))));?>
			 </li>
		</ul>
	</div>

	<div style="clear: both;"></div>
</div>
<div style="clear: both;"></div>

<div id="contentanimationrightnarrow">

	<div class="circleBigrightnarrow" id="rightnarrow">
			<h2 class="titreanimationnarrow"><?php echo l(t("Usages"),"usages");?></h2>
	</div>
	<div  id="circle_rightnarrow" >
		<ul class="animation">
			<li class="firstlinkright"><?php echo l(t("Idées"),"idees",array('attributes' => array('title' => t("idées : partagez vos idées"))));?>
			</li>
			<li class="secondlinkright"><?php echo l(t("Docs"),"node/17023",array('attributes' => array('title' => t("doc : tutoriels et documentation"))));?>
			</li>
			<li class="thirdlinkright"><?php echo l(t("Applications"),"applications",array('attributes' => array('title' => t("applications : voir la liste des applications"))));?>
			 </li>
		</ul>
	</div>

	<div style="clear: both;"></div>
</div>
<div style="clear: both;"></div>
