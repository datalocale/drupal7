(function($){
    if(!$.PP){ $.PP = new Object(); };

    $.PP.SlideContent = function(el, options){

        var base = this;
        var ajaxData = false;
        base.animation = false;

        // Access to jQuery and DOM versions of element
        base.$el = $(el);
        base.el = el;

        // Add a reverse reference to the DOM object
        base.$el.data("PP.SlideContent", base);

        base.init = function(){
            base.options = $.extend({},$.PP.SlideContent.defaultOptions, options);

            // INIT
            var selectorOnly = 'a';
            if (base.options.linkAllow != false) {
                selectorOnly = base.array2string(base.options.linkAllow);
            }

            var selectorExclude = false;
            if (base.options.linkExcept != false) {
                selectorExclude = base.array2string(base.options.linkExcept);
            }

            $(selectorOnly).live("click",function(e) {
                if (base.animation) {
                    e.preventDefault();
                }

                if (!$(this).is(selectorExclude)) {
                    var executeSlide = false;
                    var domainURL = window.location.hostname;
                    var linkURL = $(this).attr('href');
                    var domainLinkURL;

                    if (linkURL.substring(0,4) == "http") {
                        domainLinkURL = linkURL.split('http://');
                        domainLinkURL = domainLinkURL[1].split('/');
                        domainLinkURL = domainLinkURL[0];

                        if (domainURL == domainLinkURL) executeSlide = true;
                    } else {
                        executeSlide = true;
                    }

                    if (executeSlide) {
                        e.preventDefault();
                        if (!base.animation) {
                            $.get($(this).attr('href'), function(data) {
                                base.ajaxData = data;
                                base.slideContent();
                                if (base.options.ajaxContent.length > 0) {
                                    base.ajaxContent(base.options.ajaxContent);
                                }
                            });
                        }
                    }
                }
                
                	 
            });
        };

        base.slideContent = function(){
            base.animation = true;

            var elementID = base.$el.attr('id');
            var currentContent = base.$el;
            var loadingContent = $("#"+elementID,base.ajaxData);

            var contentWidth = currentContent.width();
            var contentHeight = currentContent.innerHeight()+"px";

            currentContent.wrapInner('<div class="ppOverflow"></div>');
            $('.ppOverflow').css({
                'position'      : 'relative',
                'overflow'    : 'hidden',
                'height'        : contentHeight,
                'width'         : contentWidth+"px"
            });

            $('.ppOverflow').wrapInner('<div class="ppCurrent"></div>');
            $('.ppCurrent').css({
                'position'      : 'absolute',
                'left'          : '0px',
                'top'           : '0px',
                'width'         : contentWidth+"px"
            });

            $('.ppOverflow').append('<div class="ppLoading"></div>');
            $('.ppLoading').css({
                'position'      : 'absolute',
                'left'          : (contentWidth+base.options.padding)+"px",
                'top'           : '0px',
                'width'         : contentWidth+"px"
            });
            $('.ppLoading').html(loadingContent.html());

            $('.ppCurrent').animate({
                left : "-"+(contentWidth+base.options.padding)+"px"
            },base.options.duration,function() {
                $('.ppCurrent').remove();
                base.animation = false;
            });

            $('.ppLoading').animate({
                left: "0px"
            },base.options.duration,function() {
                currentContent.html($('.ppLoading').html());
                base.animation = false;
            });

            $('.ppOverflow').animate({
                height: $('.ppLoading').innerHeight()+"px"
            },base.options.duration);
        };

        base.ajaxContent = function(elements){
            for(i=0; i < elements.length; i++) {

                if (elements[i].substring(0,1) == '.') {
                    var oldHTML;
                    var newHTML;
                    var c = 0;
                    $(elements[i]).each(function() {
                        oldHTML = $(elements[i]);
                        newHTML = $(elements[i],base.ajaxData);
                        $(oldHTML[c]).html($(newHTML[c]).html());
                        c++;
                    });
                } else {
                    $(elements[i]).html(
                        $(elements[i],base.ajaxData).html()
                    );
                }
            }
        };

        base.array2string = function(myArray) {
            var string = '';
            if ($.isArray(myArray)) {
                $.each(myArray, function(index, value) {
                    if (string == '') string += value;
                    else string += ','+value;
                });
            }
            return string;
        }

        // Run INIT
        base.init();
    };

    $.PP.SlideContent.defaultOptions = {
        duration     : 500,    // Speed of the Slide
        ajaxContent  : false,   // Array of additionnal replace content (with ajax)
        linkAllow    : false,  // Link with action of slideContent (default: 'a')  | Array of JQuery Selector ['selectorA','selectorB','selectorC']
        linkExcept   : false,  // Link without action of slideContent              | Array of JQuery Selector ['selectorA','selectorB','selectorC']
        padding      : 0       // Space between the old content and the new content
    };

    $.fn.slideContent = function(options){
        return this.each(function(){
            (new $.PP.SlideContent(this, options));
        });
    };

})(jQuery); 
