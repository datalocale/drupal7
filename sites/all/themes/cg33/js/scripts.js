jQuery(document).ready(function($) {
	if($('.page-datavizs .view-datavizs').length > 0){
		//$('.page-datavizs .view-datavizs .views-row').toggleClass('show');
		$('.page-datavizs .view-datavizs .views-row').hover(function(){
		  //alert("tessst");
				var theBody = $(this).children('.views-field-body');
				var txt_height = theBody.height()
				
				theBody.animate({bottom: '-'+txt_height+'px'}, 100, function() {
					$(this).stop().animate({bottom: 0});
					$(this).parent().toggleClass('show');
				});
				
				$(this).children('.views-field-title-1').animate({bottom: 0}, 100, function() {
					$(this).stop().animate({bottom: '-'+txt_height+'px'});
				});
				
			},
		function(){
				var theBody = $(this).children('.views-field-body');
				var txt_height = theBody.height()
				theBody.animate({bottom: 0}, 'fast', function() {
					$(this).stop().animate({bottom: '-'+txt_height+'px'});
					$(this).parent().toggleClass('show');
				});
				$(this).children('.views-field-title-1').animate({bottom: '-'+txt_height+'px'}, 100, function() {
					$(this).stop().animate({bottom: 0});
				});
		});
	}
});