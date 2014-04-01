<?php 
global $base_path;
?><article<?php print $attributes; ?>>
  <?php if ($display_submitted): ?>
  <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
     // print render($content);?>
	  <div class="imddate">
	  <div class="part"><?=render($content['field_gimage']);?></div>
	  <div class="part">
	   <?php if ( $title): ?>
    <h2 <?php print $title_attributes; ?>><?php print $title ?></h2>
  <?php endif; ?>
	  </div>

	  </div>
<div class="donnees">
<?=render($content['body']);?>
</div></div>
  
  <div class="clearfix">  
  </div>
</article>