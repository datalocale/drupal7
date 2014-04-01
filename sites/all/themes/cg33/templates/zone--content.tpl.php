<? if(!$is_front){?>
<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>
  <div<?php print $content_attributes; ?>>
 <?php
	$breadcrumb = array('breadcrumb' => drupal_get_breadcrumb());
?>

	<?php if (isset($breadcrumb)): ?>
	<div class="<?php print $classes; ?>" <?php print $attributes; ?>>
	  <? print theme('breadcrumb', $breadcrumb); ?>
	</div>
	<?php endif;
	//BREADCRUMB --------- ?>


    <?php if ($messages): ?>
      <div id="messages" class="grid-<?php print $columns; ?>"><?php print $messages; ?></div>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>
<? }?>
<script>
(function($) {
	$(document).ready(function(){
		if($('#region-sidebar-second').length > 0) $('#zone-content').addClass('withright');
	});
})(jQuery);
</script>