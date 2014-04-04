<?php print $doctype;global $base_path; echo arg(0); ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <?php if(arg(0)=="datavisualisation"){?>
  <script src="<?php echo $base_path;?>sites/all/modules/dataviz/dataviz.js"></script>
  <?php  }?>
  <![endif]-->
  <!--[if IE]> <link href="<?php echo $base_path;?>sites/all/themes/cg33/css/fontie.css" rel="stylesheet" type="text/css"> <![endif]-->
 <link rel="stylesheet" media="only screen and (max-width: 739px)" href="<?php echo $base_path;?>sites/all/themes/cg33/css/mobile.css" />
  <!--[if !IE]><!--><link rel="stylesheet" type="text/css" href="<?php echo $base_path;?>sites/all/themes/cg33/css/fontnotie.css" /><!--<![endif]-->
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
    <!--[if !IE]><!-->
       <script src="<?php echo $base_path;?>sites/all/modules/dataviz/d3.v3.min.js"></script>
    <script src="<?php echo $base_path;?>sites/all/modules/dataviz/pie.js"></script>
    <script src="<?php echo $base_path;?>sites/all/modules/dataviz/tablemobile.js"></script>
    <!--<![endif]-->
   <!--[if IE 9]>
   <script src="<?php echo $base_path;?>sites/all/modules/dataviz/d3.v3.min.js"></script>
   <script src="<?php echo $base_path;?>sites/all/modules/dataviz/pie.js"></script>
   <script src="<?php echo $base_path;?>sites/all/modules/dataviz/tablemobile.js"></script>
   <![endif]-->
</body>
</html>