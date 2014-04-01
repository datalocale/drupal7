//Globals
var pi = Math.PI;
var width =520,
height = 375,
margin = 50;
var r=90;
var rpercentage=40;
var textOffset = 5;
var textOffset2 = 15;
var rr = 100;
// Pie layout will use the "val" property of each data object entry
var   pieChart = d3.layout.pie().sort(null).value(function(d){return 52;});
var arc = d3.svg.arc()
.innerRadius(r-40)
.outerRadius(function(d) { return (r + (d.data.val/2)); })
.startAngle(function(d){ return d.startAngle; })
.endAngle(function(d){ return d.endAngle; });
(function($) {
$('body').bind('responsivelayout', function(e, d) {
if($(this).hasClass("responsive-layout-wide")|| $(this).hasClass("responsive-layout-normal")|| $(this).hasClass("responsive-layout-narrow")) {
jQuery("#contentdataviz").html('');

function updateGraph(iddep){
 
d3.select(".piecontent").remove();
d3.json('sites/all/modules/dataviz/dataviz.json', function (json) { var currData = json[iddep];
if(jQuery("#contentdataviz").html()==''){
var svg = d3.select(" #contentdataviz").append("svg").attr("width", width).attr("height", height).attr("transform", "translate(0, 0)").attr("class", "piecontent");
  defs = svg.append("svg:defs"),
  // The pie sectors container
  arcGroup = svg.append("svg:g")
  .attr("class", "arcGroup")
  .attr("transform", "translate(" + (width / 2) + "," + (height / 2) + ")");
  //// fin pour le pieee ////////////////////////
var numSectors = 7;
// Create a sector for each entry in the enter selection
var paths = arcGroup.selectAll("path")
.data(pieChart(currData)).attr("d", arc);
paths.enter().append("svg:path").attr("class", "sector").attr("id", function(d) { return d.data.id; }).attr("rel",iddep);
paths.attr("fill", function(d) { return d.data.color; }).transition().duration(1000).attrTween("d", tweenIn);
var label_group = svg.append("svg:g")
.attr("class", "label_group")
.attr("transform", "translate(" + (width / 2) + "," + (height / 2) + ")");
paths.on("mouseover", function(d){
  d3.selectAll('.activesector:not(#'+d.data.id+')').transition().duration(150).attr("transform", "translate(0,0)");
// Mouseover effect if no transition has started
// Calculate angle bisector
var ang = d.startAngle + (d.endAngle - d.startAngle)/2;
// Transformate to SVG space
ang = (ang - (Math.PI / 2) ) * -1;
// Calculate a 10% radius displacement
var x = Math.cos(ang) * r * 0.2;
var y = Math.sin(ang) * r * -0.2;
d3.selectAll('.activeval').transition().duration(250).attr("class","arcLabelinternal").attr("fill","white").attr("font-size","14px").attr("font-weight","normal")
.attr("transform", function(d) {
  var ang = d.startAngle + (d.endAngle - d.startAngle)/2;
//Transformate to SVG space
ang = (ang - (Math.PI / 2) ) * -1;
  var xv = Math.cos(ang) * r *0.8;
var yv = Math.sin(ang) * r * -0.8;return "translate(" + xv + ","+yv+")";})
d3.select('#val'+d.data.id).transition().duration(250).attr("fill","red").attr("font-size","16px").attr("font-weight","bold").attr("transform", "translate(0,0)");
d3.select(this).transition().duration(250).attr("cursor","hand").attr("transform", "translate("+x+","+y+")");
  })
.on("mouseout", function(d){
//Mouseover effect if no transition has started
//Calculate angle bisector
var ang = d.startAngle + (d.endAngle - d.startAngle)/2;
//Transformate to SVG space
ang = (ang - (Math.PI / 2) ) * -1;
//Calculate a 10% radius displacement
var x = Math.cos(ang) * r *0.8;
var y = Math.sin(ang) * r * -0.8;
// Mouseout effect if no transition has started
d3.select("#val"+d.data.id+":not(.activeval)").transition().duration(250).attr("fill","white").attr("font-size","14px").attr("font-weight","normal").attr("transform","translate("+x+","+y+")");
  d3.selectAll('.sector:not(.activesector)').transition().duration(150).attr("transform", "translate(0,0)");
})
.on("click", function(d){
  var ang = d.startAngle + (d.endAngle - d.startAngle)/2;
//Transformate to SVG space
ang = (ang - (Math.PI / 2) ) * -1;
//Calculate a 10% radius displacement
var x = Math.cos(ang) * r *0.8;
var y = Math.sin(ang) * r * -0.8;
d3.selectAll('.activeval').transition().duration(250).attr("fill","white").attr("font-size","14px").attr("font-weight","normal").attr("transform","translate("+x+","+y+")");
// Mouseout effect if no transition has started
  d3.select('#val'+d.data.id).transition().duration(250).attr("class","arcLabelinternal activeval");
});
///////////end mouse actions//////////////
// draw line of labels
lines = label_group.selectAll("line").data(pieChart(currData));
lines.enter().append("svg:line")
.attr("x1", 0)
.attr("x2", 0)
.attr("y1", function(d) { return -(r + (d.value/2))-3; })
.attr("y2", function(d) { return -(r + (d.value/2))-10; }) //modify 10 to make the line shorter
.attr("stroke", "black")
.attr("transform", function(d) {return "rotate(" + (d.startAngle) * (180/Math.PI) + ")";})
.transition()
.duration(1000)
.attr("transform", function(d) {return "rotate("+ (d.startAngle+d.endAngle)/2 * (180/Math.PI) + ")";});
lines.exit().remove();
//// end draw lines///////////////////////////////
//draw labels//////////
nameLabels = label_group.selectAll("text.units").data(pieChart(currData))
.attr("dy", function(d){
  if ((d.startAngle+d.endAngle)/2 > Math.PI/2 && (d.startAngle+d.endAngle)/2 < Math.PI*1.5 ) {
    return 17;
  } else {
    return 5;
  }})
.attr("text-anchor", function(d){
  if ((d.startAngle+d.endAngle)/2 < Math.PI ) {
    return "beginning";
  } else {
    return "end";
  }
  });
var text=nameLabels.enter().append("svg:text")
.attr("class", "externallabel")
.attr("fill", "#8d8d8d")
.attr("font-size", "11px")
.attr("width",100)
.attr("transform", function(d) {return "translate(" + Math.cos(((d.startAngle+d.endAngle - Math.PI)/2)) * (r+ (d.value/2)+textOffset) + "," + Math.sin((d.startAngle+d.endAngle - Math.PI)/2) * (r + (d.value/2)+textOffset) + ")";})
//r+ (d.value/2)+textOffset outer radius +textoffset
.attr("dy", function(d){
  if ((d.startAngle+d.endAngle)/2 > Math.PI/2 && (d.startAngle+d.endAngle)/2 < Math.PI*1.5 ) {
    return 17;
  } else {
    return 5;
  }})
.attr("text-anchor", function(d){
  if ((d.startAngle+d.endAngle)/2 < Math.PI ) {
    return "beginning";
  } else {
    return "end";
  }
});
/// namelabels//////////////////////

nameLabels.enter().append("foreignObject")
.attr("width", 140)
.attr("height", 50)
.append("xhtml:text")
.attr("class", "externallabel")
.attr("font-size", "11px")
.attr("transform", function(d) {return "translate(" + Math.cos(((d.startAngle+d.endAngle - Math.PI)/2)) * (r+ (d.value/2)+300) + "," + Math.sin((d.startAngle+d.endAngle - Math.PI)/2) * (r + (d.value/2)-300) + ")";})
//r+ (d.value/2)+textOffset outer radius +textoffset

.html(function(d,i){
  return '<div class="labelpie">'+d.data.cat+'</div>';
});
nameLabels.transition().duration(1000).attrTween("transform", textTween);

/////////////end draw labels////////////////////////////////

//draw internal labels percentages
var  valueLabels = label_group.selectAll("text.value").data(pieChart(currData)).enter().append("svg:text")
.attr("class", "arcLabelinternal")
.attr("fill", "white")
.attr("transform", function(d) {return "translate(" + arc.centroid(d) + ")"; })
.attr("id", function(d) { return "val"+d.data.id; })
.attr("text-anchor", "middle").text(function(d, i) {var percentage =d.data.val;
return percentage+ "%";
});
valueLabels.on("mouseover", function(d){

d3.selectAll('.activeval').transition().duration(250).attr("class","arcLabelinternal").attr("fill","white").attr("font-size","14px").attr("font-weight","normal")
.attr("transform", function(d) {
  var ang = d.startAngle + (d.endAngle - d.startAngle)/2;
//Transformate to SVG space
ang = (ang - (Math.PI / 2) ) * -1;
 var xv = Math.cos(ang) * r *0.8;
var yv = Math.sin(ang) * r * -0.8;return "translate(" + xv + ","+yv+")";})
d3.select('#val'+d.data.id).transition().duration(250).attr("fill","red").attr("transform", "translate(0,0)");
  })
.on("mouseout", function(d){
//Mouseover effect if no transition has started
//Calculate angle bisector
var ang = d.startAngle + (d.endAngle - d.startAngle)/2;
//Transformate to SVG space
ang = (ang - (Math.PI / 2) ) * -1;
//Calculate a 10% radius displacement
var x = Math.cos(ang) * r *0.8;
var y = Math.sin(ang) * r * -0.8;
// Mouseout effect if no transition has started
d3.select("#val"+d.data.id+":not(.activeval)").transition().duration(250).attr("fill","white").attr("font-size","14px").attr("font-weight","normal").attr("transform","translate("+x+","+y+")");
});
valueLabels.transition().duration(1000).attrTween("transform", valueTween);

jQuery('#bonhommes').html('');}
});

}//end update graph function

// "Unfold" pie sectors by tweening its start/end angles
// from 0 into their final calculated values
function tweenIn(data) {
  var interpolation = d3.interpolate({startAngle: 0, endAngle: 0}, data);
  this._current = interpolation(0);
  return function(t) {
   return arc(interpolation(t));
  };
}

//tweentext
function textTween(d, i) {
  var a = (d.startAngle  - Math.PI)/2;
  // var a = 0; /// if teh animation must be in the other direction
  var b= ((d.endAngle+d.startAngle)  - Math.PI)/2;
  var fn = d3.interpolateNumber(a, b);
  return function(t) {
  var val = fn(t);
  var x;
 if( Math.cos(val) * (r + (d.value/2))>0)
x= Math.cos(val) * (r + (d.value/2));
else x= Math.cos(val) * (r + (d.value/2))-(9*textOffset2);

      return "translate(" +x+ "," + Math.sin(val) * (r + (d.value/2)+textOffset2+textOffset+textOffset) + ")";
    };
}

//tween value
function valueTween(d, i) {
  var a = (d.startAngle  - Math.PI)/2;
    var b= ((d.endAngle+d.startAngle)  - Math.PI)/2;

    var fn = d3.interpolateNumber(a, b);
    return function(t) {
      var val = fn(t);
      return "translate(" + Math.cos(val) * (rpercentage+ (d.value/2)+textOffset) + "," + Math.sin(val) * ( rpercentage+(d.value/2)+textOffset) + ")";
    };
}

//tween line
function lineTween(d, i) {
var a = (d.startAngle  - Math.PI)/2;
    var b= ((d.endAngle+d.startAngle)  - Math.PI)/2;

    var fn = d3.interpolateNumber(a, b);
    return function(t) {
      var val = fn(t);
      return "rotate(" + (d.startAngle+d.endAngle)/2 * (180/Math.PI) + ")";
	  };
}


//tween numbers
function updatenumbers(iddiv,val){
	var start_val = 0.00,
    duration = 1000,
    end_val = [val];
	//alert(iddiv);
var qSVG = d3.select(iddiv).append("svg").attr("width", 130).attr("height", 32);

qSVG.selectAll(".txt")
    .data(end_val)
    .enter()
    .append("text")
    .text(start_val)
    .attr("class", "txt")
    .attr("x", 10)
    .attr("fill","#e84837")
    .attr("y", function(d, i) {
        return 30 + i * 30
    })
    .transition()
    .duration(duration)
        .tween("text", function(d) {
            var i = d3.interpolate(this.textContent, d),
                prec = (d + "").split("."),
                round = (prec.length > 1) ? Math.pow(10, prec[1].length) : 1;

            return function(t) {
                this.textContent = (Math.round(i(t) * round) / round).toFixed(2)+' %';
            };
        });


}

/// on page start get data from the first departement///


jQuery(document).ready(function() {
	jQuery('.www_FlowSlider_com-branding').livequery(function(){jQuery(this).remove();});
		jQuery('.ws_next,.ws_prev').live("click", function(e){
		var rel =jQuery(this).text();
		jQuery('.ws_thumbs a[rel="'+rel+'"] area').trigger('click');
	});

	jQuery('.ws_thumbs area').live("click", function(e){
		var rel =jQuery(this).parent().parent().attr('rel');
		//alert(rel);

	/*	jQuery('#slider').unbind('scroll', handler);

	    //scrolls to the selected section
		jQuery('#slider').scrollTo('.www_FlowSlider_com-wrap-2 .item a:eq(' + rel + ')', 800, {
	        axis: 'x',
	        onAfter: function() {
	          jQuery('#slider').bind('scroll', handler);
	        }
	    });*/
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
    controls(rel);
});


	//tabs above the pie
jQuery('.depnavs').live("click", function(e){
       rel=jQuery(this).attr("rel");
      var classtaux=".tauxfinal.class"+rel;
       updateGraph(rel);
		jQuery(this).parent().siblings().each(function(){
			jQuery(this).children('a').removeClass("active");
			rels=jQuery(this).children('a').attr("rel");
			var classtauxs=".tauxfinal.class"+rels;
			jQuery(classtauxs).hide();
		});

		jQuery(this).addClass("active");
		jQuery(classtaux).show();



});


//bonhommes////
jQuery('.sector').live("click", function(){
  jQuery(this).attr("class","sector activesector");

	var id=jQuery(this).attr("id");
	var rel=jQuery(this).attr("rel");
	jQuery("#bonhommes").prepend('<div id="preloader" ><div id="status" >&nbsp;</div></div>');
		jQuery("#bonhommes").load("bonhommes/"+id+"/"+rel,function() {
			jQuery("#status").fadeOut(); // will first fade out the loading animation
			jQuery("#preloader").delay(350).fadeOut("slow");
		jQuery(".perso .overlayt").each(function(){
		var r=jQuery(this).attr("rel");
		jQuery(this).stop().animate({right:parseFloat(-r)+"%"},{queue:false,duration:1000} );
		var iddiv="#"+jQuery(this).parent().parent().parent().find('.percentage').attr('id');
		updatenumbers(iddiv,parseFloat(r));
		});});
	});


runtimeline();



});
 }


});

})(jQuery);