    <?php  global $base_path;?><div id="wowslider-container1">
<div style="overflow: hidden;" class="ws_thumbs">
<div style="top: 0px; left: 0px;"><?php
foreach ($rows as $count => $row): 
foreach ($row as $field => $content):
//echo $fields[$field]."<br>";
switch($fields[$field]){
	case 'field-imagemap':
		$map = $content;
	break;

		
}
endforeach;?>
<?php  echo  preg_replace('!^<p>(.*?)</p>$!i', '$1', $map);?>
<?php  echo  preg_replace('!^<p>(.*?)</p>$!i', '$1', $map);?>
<?php  echo  preg_replace('!^<p>(.*?)</p>$!i', '$1', $map);?>
<?php  echo  preg_replace('!^<p>(.*?)</p>$!i', '$1', $map);?>
<?php endforeach;?>
</div></div><br clear="all" /></div>
<br clear="all" /><br clear="all" /><br clear="all" /><br clear="all" />
<div id="navs">
<ul><li>test nav1</li><li>test nav2</li></ul>
Taux de tttttt
</div>

<div id="contentdataviz">
</div>

<ul><li>
<div id="taux1">
	<div id="tauxcontainer">
		<div class="frame">
			<img src="<?php echo $base_path?>/sites/all/modules/dataviz/images/gris2.png"/>
		</div>
		<div id="tauxoverlay">
			<div id="tauxblock">&nbsp;</div>
			<div id="tauxedge">&nbsp;</div>
		</div>
		<img class="loadpic" src="<?php echo $base_path?>/sites/all/modules/dataviz/images/vert.png"/>
	</div>
</div>
<div id="percentage"></div>
</li>
<li>
<div id="taux1">
	<div id="tauxcontainer">
		<div class="frame">
			<img src="<?php echo $base_path?>/sites/all/modules/dataviz/images/gris2.png"/>
		</div>
		<div id="tauxoverlay2">
			<div id="tauxblock">&nbsp;</div>
			<div id="tauxedge">&nbsp;</div>
		</div>
		<img class="loadpic" src="<?php echo $base_path?>/sites/all/modules/dataviz/images/vert.png"/>
	</div>
</div>
</li>


<li>
<div id="taux1">
	<div id="tauxcontainer">
		<div class="frame">
			<img src="<?php echo $base_path?>/sites/all/modules/dataviz/images/gris2.png"/>
		</div>
		<div id="tauxoverlay3">
			<div id="tauxblock">&nbsp;</div>
			<div id="tauxedge">&nbsp;</div>
		</div>
		<img class="loadpic" src="<?php echo $base_path?>/sites/all/modules/dataviz/images/vert.png"/>
	</div>
</div>
</li>

</ul>
<br clear="all"/>