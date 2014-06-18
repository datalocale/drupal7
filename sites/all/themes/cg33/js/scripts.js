jQuery(document).ready(function($) {
	if($('.page-datavizs .view-datavizs').length > 0){
	
		$('.page-datavizs .view-datavizs .views-row:nth-child(3n+2)').addClass('centered');
		
		$('.page-datavizs .view-datavizs .views-row').hover(function(){
				var theBody = $(this).children('.views-field-nid');
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
				var theBody = $(this).children('.views-field-nid');
				var txt_height = theBody.height()
				theBody.animate({bottom: 0}, 'fast', function() {
					$(this).stop().animate({bottom: '-'+txt_height+'px'});
					$(this).parent().toggleClass('show');
				});
				$(this).children('.views-field-title-1').animate({bottom: '-'+txt_height+'px'}, 100, function() {
					$(this).stop().animate({bottom: 0});
				});
		});
		
		if($('#edit-combine').length >0){
			/*$('#edit-combine').attr('title', $('label[for="edit-combine"]').text()).labelify({text:'Rechercher'});*/
			$('input#edit-combine').val('Rechercher');
			$('input#edit-combine').focus(function(){
				if($('input#edit-combine').val() == 'Rechercher'){
					$('input#edit-combine').val('');
				}
			});
			$('input#edit-combine').blur(function(){
				if($('input#edit-combine').val() == ''){
					$('input#edit-combine').val('Rechercher');
				}else{
					$("#edit-submit-datavizs").click();
				}
			});
		}
		
	}
});