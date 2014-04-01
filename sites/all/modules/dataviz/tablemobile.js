(function($) {
$('body').bind('responsivelayout', function(e, d) {
///// if mobile footable
 if($(this).hasClass("responsive-layout-mobile")){
   d3.select(".piecontent").remove();
     //alert("bbbbbbbbbbb");
     function updateGraph(rel){
            jQuery.getJSON('sites/all/modules/dataviz/dataviz.json', function(data) {

                var itemss = [];
                itemss.push("<thead><tr><th>Thématiques </th><th>Valeur thématique</th><th>Valeurs sous thématiques</th></tr></thead>");
                jQuery.each(data, function(key, val) {
                    var items = [];

                    if(key==rel){
                jQuery.each(val, function(k, v) {
                    var t='<div class="soust">';
                    jQuery.each(v.vp, function(k2, v2) {

                         t+=k2 + ':' + v2 + '<br/>';
                        });
                    t+='</div>';
                    itemss.push('<tr id="' + key + '"><td id="' + v.cat + '">' + v.cat + '</td><td id="' + v.cat + '">' + v.val + '</td><td>'+t+'</td></tr>');

                    });

                    }

                });
                jQuery('#contentdataviz').html(jQuery('<table/>', {'class': 'pietable',html: itemss.join('')}));
                });



        }


jQuery(document).ready(function() {
jQuery('.ws_next,.ws_prev').remove();
jQuery('.www_FlowSlider_com-branding').livequery(function(){jQuery(this).remove();});
jQuery('.ws_thumbs area').live("click", function(e){
var rel =jQuery(this).parent().parent().attr('rel');
//jQuery('.ws_thumbs a[rel="'+rel+'"] area').trigger('hover');
jQuery('.sliderlink').attr("href","pienavs/"+rel);
updateGraph(rel);

///make map on
e.preventDefault();
var data = jQuery(this).mouseout().data('maphilight') || {};
jQuery(".ws_thumbs area").each(function(){
var d = jQuery(this).data('maphilight') || {};
 d.alwaysOn = false;
jQuery(this).data('maphilight', d).trigger('alwaysOn.maphilight');
});
data.alwaysOn = !data.alwaysOn;
jQuery(this).data('maphilight', data).trigger('alwaysOn.maphilight');
//////////////////end map on//////////
jQuery('.sliderlink').trigger('click');
});

//tabs above the pie
jQuery('.depnavs').live("click", function(e){
rel=jQuery(this).attr("rel");
var classtaux=".tauxfinal.class"+rel;
 updateGraphe(rel);
jQuery(this).parent().siblings().each(function(){
jQuery(this).children('a').removeClass("active");
rels=jQuery(this).children('a').attr("rel");
var classtauxs=".tauxfinal.class"+rels;
jQuery(classtauxs).hide();
});

jQuery(this).addClass("active");
jQuery(classtaux).show();
});
runtimeline();
});

}

//// fin mobile///
});

})(jQuery);
