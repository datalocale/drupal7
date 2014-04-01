jQuery(document).ready(function() { 

	
		var tableCount = 0;
		jQuery('table.pietable').livequery(function(){
			if(!jQuery(this).hasClass('footable')){
				var totalCol = jQuery(this).find('th').length;
			
				var counter =0;
				jQuery(this).addClass('footable table_'+tableCount);
				jQuery(this).find('th').each(function(){
					if(counter == 1) jQuery(this).attr('data-class', 'expand');
					else if(counter>1) jQuery(this).attr('data-hide', 'all');
					counter++;
				});
			}
		});
		jQuery('table.pietable').livequery(function(){jQuery(this).footable();});
		
		
	   var tableCount = 0;
	        jQuery('#forum-0').livequery(function(){
	            if(!jQuery(this).hasClass('footable')){
	                var totalCol = jQuery(this).find('th').length;
	            
	                var counter =0;
	                jQuery(this).addClass('footable table_'+tableCount);
	                jQuery(this).find('th').each(function(){
	                    if(counter == 1) jQuery(this).attr('data-class', 'expand');
	                    else if(counter>1) jQuery(this).attr('data-hide', 'phone');
	                    counter++;
	                });
	            }
	        });
	        jQuery('#forum-0').livequery(function(){jQuery(this).footable();});
	});
