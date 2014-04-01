

jQuery(document).ready(function($) {
	if($('.animation').length > 0){
		$('.animation').addClass('clearfix');
	}
	 $('div[class^="circleBig"]').hover(function(){
   		$(this).next('.circle').css('z-index', '10'); 
   		$(this).next('.circle').css('float', 'left');
   	//	$(this).next('div.circle').children('.animation').css('width', '320px');
   	  });
    // Search for A elements wrapped with an element that has the class
	         // "more-help-link" within the given context. Also, make sure this A e
	         // does not have the CSS class "modalframe-more-help-processed".
	        $('a.btn-success').addClass('modalframe-more-help-processed').click(function() {
	           // When the A element is clicked, the URL of the same link will be o
	         overlay.open({
	             url: $(this).attr('href'),
	            width: 800,
	             height: 600
	           });
	
	           // Return false so that we cancel the default link behavior.
	           return false;
	         });


$("ul.tweets-pulled-listing ").cycle();
                
                /* when page loads animate the about section by default */
                //move($('#about'),2000,2);

                $('.circleBigright area').mouseover(
                function(){
					 var $this = $(this);
					 if(!$this.hasClass("in")){
						$('.animation').css('width', 'auto');
						move($this,800,1);
						remove("left",800,1);
						remove("center",800,1);
						$(".descanimationleft").show();
						$(".descanimationright").hide();
						$(".descanimationcenter").show();
					}
                }
            );
                $('.circleBigleft area').mouseover(
                        function(){
						$('.animation').css('width', 'auto');
                         var $this = $(this);
                         if(!$this.hasClass("in")){
                            move($this,800,1);
                            remove("right",800,1);
                            remove("center",800,1);
                            $(".descanimationleft").hide();
                            $(".descanimationright").show();
                            $(".descanimationcenter").show();

                        }
                        }
                    );
                $('.circleBig area').mouseover(
                        function(){
						$('.animation').css('width', 'auto');
                         var $this = $(this);
                         if(!$this.hasClass("in")){
                            move($this,800,1);
                            remove("left",800,1);
                            remove("right",800,1);
                            $(".descanimationleft").show();
                            $(".descanimationright").show();
                            $(".descanimationcenter").hide();

                        }
                        }
                    );
			    $('#zone-content-home').mouseleave(
                function(){
                	   remove("left",800,1);
                       remove("right",800,1);
                       remove("center",800,1);
                       $(".descanimationleft").show();
                       $(".descanimationright").show();
                       $(".descanimationcenter").show();

              
                        }
            );
			
			function remove(id,speed,turns){
			   //  var id = $elem.attr('id');
			     
                    var $circle = $('#circle_'+id);
                    var idc='#contentanimation'+id;
                  //  alert(idc);
                    $(idc +" area").removeClass("in");
			             $(idc+' .circle').each(function(i){
                        var $theCircle = $(this);
                        if($theCircle.css('opacity')==1)
                            $theCircle.stop()
                        .animate({
                            path : new $.path.arc({
                                center	: [150,120],
                                radius	: 257,
                                start	: -5,
                                end     : -110,
                                dir	: -1
                            }),
                            opacity: '0'
                        },1500);
                        else
                            $theCircle.stop()
                        .animate({opacity: '0'},200);
                    });}

                /*
                function to animate / show one circle.
                speed is the time it takes to show the circle
                turns is the turns the circle gives around the big circle
                 */
                function move($elem,speed,turns){
                    var id = $elem.attr('id');
                    var $circle = $('#circle_'+id);
                    var idc='#contentanimation'+id;
                    $(idc +" area").addClass("in");
					//alert($circle);

                    /* if hover the same one nothing happens */
                    if($circle.css('opacity')==1)
                        return;

                    /* change the image */
                  //  $('#image_'+id).stop(true,true).fadeIn(650).siblings().not(this).fadeOut(650);

                    /*
                    if there's a circle already, then let's remove it:
                    either animate it in a circular movement or just fading out, depending on the current position of it
                     */
       

                    /* make the circle appear in a circular movement */
                    var end = -5 - 360 * (turns-1);
                    $circle.stop()
                    .animate({
						 path : new $.path.arc({
                            center	: [150,120],
                            radius	: 257,
                            start	: 100,
                            end		: end,
                            dir		: -1
                        }),
                        opacity: '1'
						}, speed, function() {
						$('.animation').css('width', '320px');
					});
                }
            });