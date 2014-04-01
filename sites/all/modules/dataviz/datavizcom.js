      (function(){
      
        // Append a close trigger for each block
        jQuery('.menud .content').append('<span class="close">x</span>');     
        // Show window
        function showContent(elem){
            hideContent();
            elem.find('.content').addClass('expanded');
            elem.addClass('cover'); 
        }
        // Reset all
        function hideContent(){
          jQuery('.menud .content').removeClass('expanded');
            jQuery('.menud li').removeClass('cover');     
        }
        
        // When a li is clicked, show its content window and position it above all
        jQuery('.menud li').click(function() {
            showContent(jQuery(this));
        });     
        // When tabbing, show its content window using ENTER key
        jQuery('.menud li').keypress(function(e) {
            if (e.keyCode == 13) { 
                showContent(jQuery(this));
            }
        });

        // When right upper close element is clicked  - reset all
        jQuery('.menud .close').click(function(e) {
            e.stopPropagation();
            hideContent();
        });     
        // Also, when ESC key is pressed - reset all
        jQuery(document).keyup(function(e) {
            if (e.keyCode == 27) { 
              hideContent();
            }
        });
        
      })();

// next and previous 
function controls(rel){
	var prev=jQuery('.ws_thumbs a[rel="'+rel+'"]').parent().prev().prev().children("a");
	var next=jQuery('.ws_thumbs a[rel="'+rel+'"]').parent().next().next().children("a");
    var prevrel=prev.attr("rel");
    var nextrel=next.attr("rel");
	//alert(rel);
	if(rel!=1)jQuery('.ws_prev').show();
	if(nextrel=='')jQuery('.ws_next').hide();else jQuery('.ws_next').show();
	if(prev.length == 0)jQuery('.ws_prev').hide();
	if(next.length == 0)jQuery('.ws_next').hide();
	//alert("next"+nextrel);
	//alert("prev"+prevrel);
	jQuery('.ws_next').html(nextrel);jQuery('.ws_next').attr("href","#"+nextrel);
	jQuery('.ws_prev').html(prevrel);jQuery('.ws_prev').attr("href","#"+prevrel);
}
/// on page start get data from the first departement///
function runtimeline() {
 jQuery("#contentdataviz").html('');
  //alert("ddddd");
	//timeline///
		jQuery('#slider').livequery(function(){
		  jQuery(this).FlowSlider({  controllers: ["Drag"] ,
		    startPosition: 0.0,
            position: 0.0,}); 
		  var firstelement=jQuery('#slider .item a').first().attr("rel");
		  jQuery('.ws_thumbs a[rel="'+firstelement+'"] area').trigger('click');
		  jQuery('.ws_next').attr("href","#"+firstelement);
		 // jQuery('.ws_thumbs a[rel="'+firstelement+'"] area').trigger('mouseover');
		});
	
	//jQuery("#slider").FlowSlider(); 
	jQuery('.ws_prev').livequery(function(){jQuery(this).hide();});
	
	
		
}
///
jQuery(document).ready(function() {
	////////////////////sliding pour les tabs /////////////////////////////////////////////////////////////
	startSlideContent();
	//Start the function, if you are on a server, you can use just the code inside the function
	function startSlideContent() {
	//Start the SlideContent here
	jQuery('#navs').slideContent({
	duration     : 300,
	ajaxContent  : [''],             // Array of JQuery Selector
	linkAllow    : ['.sliderlink'],           // Array JQuery Selector (default : 'a')
	linkExcept   : ['.noSlide','.active','ul.noslidemenu li a'], // Array of JQuery Selector
	padding      : 25
	});

	}


	/// tooltip/////
	jQuery('.ws_thumbs a[title]').livequery(function(){
	  jQuery(this).each(function(){
	jQuery(this).qtip({
		position:{ corner: { target: 'topCenter', tooltip: 'bottomMiddle'}, 
	    adjust: { x: 40, y: 0 } 
	   },
	   style: {
	      name: 'red',
	      padding: '7px 13px',
	      width: {
	         max: 210,
	         min: 0
	      },
	      tip: true
	   }
	});});
	});
	
	
	 
    jQuery('#dep-links').localScroll({// Only the links inside that jquery object will be affected
      lazy: true, // This is the KEY setting here, makes the links work even after an Ajax load.
      target: '#slider', // The element that gets scrolled
      axis:'x', // Horizontal scrolling
      duration:500,
      onBefore:function( e, subsec, $cont ){//'this' is the clicked link
          if( this.blur )
              this.blur(); // Remove the awful outline
      }
  });
	
});

