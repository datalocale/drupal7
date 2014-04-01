<?php global $user;global $base_path;?>
<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
<div class="blockuser" >
<?php if($user->uid<>0) echo  t('Welcome ').l($user->name,"user")." | ".l(t('Logout'),"user/logout");
else{?>
<ul>
<li class="inscrire"><?php echo l(t("Register"),"http://catalogue.datalocale.fr/user/register");?>
<li class="login"><?php echo l(t("Login"),"user/login");?></li></ul>
<?php  } ?>
</div>
<?php

    	$src3 = $base_path.'sites/all/themes/cg33/images/girondequadri.jpg';
    $img3 = '<img src="'.$src3.'" />';
    $path3 =  "http://www.gironde.fr";
   // $items[]=l($img,$path, array('attributes' => array('class' =>'link-image'),'html' => true));
     $items[]=l($img3,$path3, array('attributes' => array('class' =>'link-image'),'html' => true));
?>
<div class="logos"><?php  echo theme('item_list',array('items' => $items));?></div>
<?php
$block = module_invoke('search', 'block_view', 'form');
print render($block); ?>
</div>
</div>