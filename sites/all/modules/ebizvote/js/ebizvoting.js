jQuery(document).ready(function () { 
    
  //  var texte = jQuery(".page-node-16043 #webform-component-step2");
 //   jQuery('.page-node-16043 #webform-component-step2').colorbox({inline:true, width:"80%",href:texte});
 
	
    jQuery("form#webform-client-form-16043>div>div>select ,form#webform-client-form-16882>div>div>select").each(function() {
        jQuery(this).selectToUISlider({
            sliderOptions: {
                stop: function(e,ui) {
                
               var object = jQuery(this).prev("select");
               
               var value = object.val();

               var len  = object.children('option').size();
            
               
   if (len == 2) {
                   
                   if (value==1) {
                       jQuery(this).children('.slideroverlay').css('display','none');
                   }  
                   if (value==2) {
                       jQuery(this).children('.slideroverlay').css('width','100%');
                       jQuery(this).children('.slideroverlay').css('background-color','green');
                       jQuery(this).children('.slideroverlay').css('display','block');         
                   }
                   
                    }
               
      
               else if (len > 2) {
                   len2 = len -1;
                   value2 = value - 1;
                   if (value==1) {
                       jQuery(this).children('.slideroverlay').css('display','none');
                   }  
                   else {
                       
                       if (len == 3) v2 =2;
                       else if (len == 4) v2 = 3;
                       else if (len == 5||len==6) v2 = 4;
                       else if (len > 50) v2 = len/2;
                       var width = (value2 / len2) * 100 + 0.5;
                       jQuery(this).children('.slideroverlay').css('display','block');
                       if (value<v2) backgroundcolor = "red";
                       else backgroundcolor = "green";
                       jQuery(this).children('.slideroverlay').css('width', width + '%');
                       jQuery(this).children('.slideroverlay').css('background-color', backgroundcolor);
                   }
                   
              
                   
                    }
               
               
              
                }
            }
          }); 
      
      
  
    });
    jQuery("div.ui-slider.ui-slider-horizontal").append("<span class='slideroverlay value0'></span>");
});  
   /*
    
jQuery("select#edit-submitted-je-me-sens-entendu-lorsque-je-donne-mon-avis-sur-les-decisions-publiques-qui-me-concernent").selectToUISlider({
  sliderOptions: {
   stop: function(e,ui) {
      var val = jQuery("select#edit-submitted-je-me-sens-entendu-lorsque-je-donne-mon-avis-sur-les-decisions-publiques-qui-me-concernent").val();

      if (val==1) { jQuery(".slideroverlay").css('display','none');} 
      if (val==2) { jQuery(".slideroverlay.value0").css('display','block');jQuery(".slideroverlay.value1").css('display','none');jQuery(".slideroverlay.value2").css('display','none');}
      if (val==3) { jQuery(".slideroverlay.value0").css('display','block');jQuery(".slideroverlay.value1").css('display','block');jQuery(".slideroverlay.value2").css('display','none');}
      if (val==4) {  jQuery(".slideroverlay.value0").css('display','block');jQuery(".slideroverlay.value1").css('display','block');jQuery(".slideroverlay.value2").css('display','block');}
    }
  }
}); 
  

*/  
