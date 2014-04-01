<div id="content"><div id="contentdatavizouter"><div id="contentdataviz"><script language="javascript">
updateGraph();
 var svg = d3.select("#contentdataviz").append("svg").attr("width", 900).attr("height", 600).attr("transform", "translate(450, 300)");
      var pi = Math.PI;
var filename="sites/all/modules/dataviz/datap1.json";

 d3.json(filename,
function(data){
var r=50;
var arc = d3.svg.arc()
.innerRadius(r)
.outerRadius(function(d) { 
return (r + d.value); })
.startAngle(function(d) { return ((d.time - 1) * 51.4 * pi / 180); })
.endAngle(function(d) { return (d.time * 51.4 * pi / 180 ); });

var arcOver = d3.svg.arc()
.innerRadius(r+10)
.outerRadius(function(d) { 
return (r + d.value)+10; 
}).startAngle(function(d) { return ((d.time - 1) * 51.4 * pi / 180); })
.endAngle(function(d) { return (d.time * 51.4 * pi / 180 ); });


var g = svg.selectAll(".arc")
.data(data)
.enter().append("g")
.attr("class", "arc").attr("transform", "translate(450, 300)")
.on("mouseover", function(d) {
d3.select(this).select("path").transition()
.duration(100)
.attr("d", arcOver);
})
.on("mouseout", function(d) {
d3.select(this).select("path").transition()
.duration(100)
.attr("d", arc);
 });

var path = g.append("path")
.attr("d", arc)
.style("fill", function(d) { return d.color; }).transition().duration(3050).attrTween("d", arcTween);

g.selectAll("path").transition().duration(1000).attrTween("d", tweenIn);

g.append("text")
      .attr("transform", function(d) { return "translate(" + arc.centroid(d) + ")"; })
      .attr("dy", ".35em")
      .style("text-anchor", "middle")
	  .style("fill","white")
      .text(function(d) { return d.label; });
	  

function selectArcs() {
      d3.selectAll("g.arc > path")
          .each(arcTween);
}


// "Unfold" pie sectors by tweening its start/end angles
// from 0 into their final calculated values
function tweenIn(data) {
  var interpolation = d3.interpolate({startAngle: 0, endAngle: 0}, data);
  this._current = interpolation(0);
  return function(t) {
      return arc(interpolation(t));
  };
}
function arcTween(a) {
	  var i = d3.interpolate(this._current, a);
	  this._current = i(0);
	  return function(t) {
	    return arc(i(t));
	  };
	}	  
	  
});




</script>

</div></div>

