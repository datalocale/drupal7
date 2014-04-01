
 <?php $args= $view->args;
foreach ($rows as $count => $row): 
foreach ($row as $field => $content):
//echo $fields[$field]."<br>";
switch($fields[$field]){
	case 'field-rubrique-bp':
		$name = $content;
	break;
	case 'field-rubrique-bp-1':
		$value = $content;
	break;

	
}
endforeach;?>
<?php
$arr[$value][]=$name;
?>

<?php endforeach;
//print_r($arr);
foreach($arr as $value=>$ar)
$items[]=l( $ar[0]." ( ".count($ar)." ) ","bonnes-pratiques",array('query' => array('field_rubrique_bp_value' => $ar[0],'field_typebp_tid' => $args[0])));
print theme("item_list",array('items' => $items));?>