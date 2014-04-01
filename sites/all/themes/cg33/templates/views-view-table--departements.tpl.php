<?php  global $base_path;$i=1;?>
<div id="slider" class="slider-horizontal ws_thumbs">
<?php
foreach ($rows as $count => $row):
foreach ($row as $field => $content):
//echo $fields[$field]."<br>";
switch($fields[$field]){
	case 'field-imagemap':
		$map = $content;
	break;
	case 'field-departementid':
		$departementid = $content;
	break;
	case 'title':
		$title = $content;
	break;
	case 'uri':
		$imagedep = $content;
	break;

}
endforeach;
if($i==2)$textnext=$departementid;
?>
<div class="item item-<?php echo $i;?> imagemap">
<a href="#" id="<?php echo $departementid;?>" rel="<?php echo $departementid;?>" class="thumb" title="<?php echo strip_tags($title);?>">
<img src="<?php echo file_create_url($imagedep);?>" usemap="#map<?php echo $departementid;?>" class="jq_maphilight"/>
<map name="map<?php echo $departementid;?>">
<?php  echo  preg_replace('!^<p>(.*?)</p>$!i', '$1', $map);?></map>
</a></div>
<div class="item item-<?php echo $i+1;?>">
<img  class="sepslider" src="<?php  echo $base_path;?>sites/all/modules/dataviz/images/sepdep.png" />
</div>
<?php $i=$i+2;endforeach;?>
<br clear="all" /></div>
<div id="dep-links"><a class="ws_prev" ></a><a class="ws_next"></a></div>