<?php
//print_r($node);
global $base_root;
$fullpath=$base_root . request_uri();
global $base_path;
?><article<?php print $attributes; ?>>


  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
     // print render($content);
      if(arg(0)=="searchpackages"){?>
        <?php if ($display_submitted): ?>
  <footer class="submitted"><em><span><?=t('Added on');?> :</span>  <?=format_date($node->created,"short");?> , <span><?=t('Updated on');?>: </span>
	   <?=format_date($node->changed,"short");?></em></footer>
  <?php endif; ?>
        <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif;
print render($content);
      }else {?>
	  <div class="imddate">
	  <div class="part">
	  <?=render($content['field_image']);?>
	   <?php if ( $title): ?>
    <h2<?php print $title_attributes; ?>><?php print $title ?></h2>
  <?php endif; ?>
	  <ul class="souspart"><li><span><?=t('Addition');?> :</span>  <?=date('d-m-Y',$node->created);?></li><li><span><?=t('Updated');?>: </span>
	   <?=date('d-m-Y',$node->changed);?></li></ul>
	  </div>
	  <div class="part"><h3> <?php echo l(t('See the modifcations'),"revisions/".$node->nid);?></h3>

<ul id="sharing_btns">
			<li>
				<a href="http://twitter.com/share?url=<?php echo $fullpath;?>&amp;text=%20@datalocale">
				<img width="20" height="20"  src="<?php  echo $base_path;?>/sites/all/themes/cg33/images/tw.png" class="twitter">
				</a>
			</li>
			<li>
				<a href="http://www.facebook.com/sharer.php?u=<?php echo $fullpath;?>&amp;t= @datalocale">
				<img width="20" height="20"  src="<?php  echo $base_path;?>/sites/all/themes/cg33/images/fb.png" class="facebook">
				</a>
			</li>
			<li>
				<a href="https://plus.google.com/share?url=<?php echo $fullpath;?>">
				<img width="20" height="20" src="<?php  echo $base_path;?>/sites/all/themes/cg33/images/gp.png" class="google">
				</a>
			</li>
			<li>
			<?php $pt=$base_path."misc/feed.png"; echo l("<img src='".$pt."' />","node/".arg(1)."/feed", $options = array('html' => TRUE));?>
			</li>
		</ul>

	   <?php  //echo render($content['field_addthisdataset']);?>
	  </div>
	  </div>
	<h3 class="meta"><?php echo t('General metadata')?></h3>
<div class="donnees">
 <?=render($content['field_id']);?>
 <?=render($content['body']);?>
 <?=render($content['field_concept']);?>
 <?=render($content['field_tags']);?>
 <?=render($content['field_couverturetemporelle']);?>
 <? //=render($content['field_spatialnom']);?>
  </div>
  <?php  }?>
  </div>
  <div class="clearfix">
   </div>
</article>
