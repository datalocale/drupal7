<div class="part1donnee">
<h2><?php echo t('Navigation par thematique');?></h2>
<select onchange="window.location.href=this.options
    [this.selectedIndex].value">
    <option value=''><?php echo t('Category');?></option>
 <?php
foreach ($rows as $count => $row): 
foreach ($row as $field => $content):
echo $fields[$field]."<br>";
switch($fields[$field]){
	case 'name':
		$terme = $content;
	break;
	case 'tid':
		$tid = $content;
	break;
	
}
endforeach;?>
<option value="<?php echo getpath('searchpackages/?f[0]=im_field_concept:'.$tid);?>"><?php echo $terme;?></option>

<?php endforeach;?>
</select>
<?php 
$block = module_invoke('block', 'block_view', 9);
print $block['content'];
?>
</div>
<div class="part2donnee">
<h2><?php echo t('List of dataset');?></h2>
<?php 
$block = module_invoke('block', 'block_view', 10);
print $block['content'];
?></div>
<br clear="all"/>