/*!
 * Flow Slider v1.6.0
 * jQuery content sliding plugin
 * http://FlowSlider.com/
 *
 * Copyright Flow Slider Inc., www.FlowSlider.com
 * 
 * LICENCE:
 * http://www.FlowSlider.com/license-html
 * If you use this plugin, you must keep this copyright notice at all times.
 */
var FlowSlider = function (n, t, i) {
    var j = "position",
        ht = "absolute",
        ct = '<div class="',
        it = "function",
        p = "px",
        l = 100,
        h = null,
        b = "mousemove",
        nt = "horizontal",
        g = "left",
        d = "height",
        tt = "width",
        o = this,
        f, s, st, a, rt;
    if ("string" == typeof n) return jQuery(n).FlowSlider(t);
    if ("object" == typeof n && n.FlowSlider) return n.FlowSlider;
    if ("array" == typeof n) return new FlowSlider.Array(n);
    var u = o,
        e = i(n),
        k, y, v, c, w, n = {
            size: tt,
            sizeC: d,
            edge: g,
            edgeEnd: "right",
            edgeC: "top",
            mouse: "pageX",
            fOuterSize: function (n, t) {
                if (void 0 === t) return n.outerWidth();
                n.outerWidth(t)
            },
            fSize: function (n, t) {
                if (void 0 === t) return n.width();
                n.width(t)
            },
            fSizeC: function (n, t) {
                if (void 0 === t) return n.height();
                n.height(t)
            }
        }, vt = {
            size: d,
            sizeC: tt,
            edge: "top",
            edgeEnd: "bottom",
            edgeC: g,
            mouse: "pageY",
            fOuterSize: function (n, t) {
                if (void 0 === t) return n.outerHeight();
                n.outerHeight(t)
            },
            fSize: function (n, t) {
                if (void 0 === t) return n.height();
                n.height(t)
            },
            fSizeC: function (n, t) {
                if (void 0 === t) return n.width();
                n.width(t)
            }
        }, et, ft, ut, ot, r = i.extend({}, window.FlowSlider.defaults, t);
    o.calcSize = function () {
        return this.wrapSize = u.props.fSize(y)
    }, o.getPosition = function () {
        return (r.marginStart - this.getOffset()) / (r.marginStart - (u.props.fSize(e) - this.calcSize() - r.marginEnd))
    }, o.position = function (n) {
        return 0 > n && (n = 0), 1 < n && (n = 1), this.offset(this.positionToOffset(n)), this
    }, o.positionToOffset = function (n) {
        return r.marginStart - n * (r.marginStart - (u.props.fSize(e) - this.calcSize() - r.marginEnd))
    }, o.getOffset = function () {
        return w.getOffset()
    }, o.offset = function (n) {
        return ut(n), this
    }, o.boundOffset = function (n) {
        return ot(n)
    };
    var m = function (n) {
        (r.moveIfSmaller || !(u.calcSize() <= u.props.fSize(e))) && w.offset(n)
    }, at = function (n) {
        if (n > r.marginStart) return r.marginStart;
        var t = u.props.fSize(e) - u.calcSize() - r.marginEnd;
        return n < t ? t : n
    }, yt = function (n) {
        var t = w.getOffset();
        half_size = u.calcSize() / 2, n > half_size && (n %= half_size);
        var i = t + half_size - n,
            t = Math.abs(t - n) < Math.abs(i) ? n : n - half_size,
            n = at(n);
        n != t && (w.shift(n > t ? half_size : -half_size), t += n > t ? half_size : -half_size), w.offset(t)
    }, pt = function (n) {
        return n
    };
    if (o.move = function (n) {
        return u.offset(u.getOffset() + n)
    }, o.moveBounded = function (n) {
        return u.offset(u.boundOffset(u.getOffset() + n))
    }, o.setupDOM = function () {
        if (v = y.children(), v.addClass(r.prefix + "-item"), e.css({
            overflow: "hidden",
            position: "relative"
        }), v.css({
            float: g
        }), (r.mode = nt) && !parseInt(e.css(d))) {
            for (var s = v.length, o = 0, t = 0, n, f = 0; f < s; f++) $item = i(v[f]), n = parseInt($item.css("margin-top")), isNaN(n) && (n = 0), t = n, n = parseInt($item.outerHeight()), isNaN(n) && (n = 0), t += n, n = parseInt($item.css("margin-bottom")), isNaN(n) && (n = 0), t += n, t > o && (o = t);
            e.css(d, o)
        }
        return nt == r.mode && u.props.fSize(k, 9999999), r.infinite ? (v.clone(!0).appendTo(y), ut = yt, ot = pt) : (ut = m, ot = at), this
    }, o.content = function () {
        return y
    }, o.set = function (n) {
        return i.extend(r, n), this.s = r, st(), this
    }, o.start = function () {
        for (var n = 0; n < c.length; n++) c[n].start();
        return this
    }, o.stop = function () {
        for (var n = 0; n < c.length; n++) c[n].stop();
        return this
    }, o._triggerOnStart = function () {
        e.trigger(r.eMoveStart, u)
    }, o._triggerOnMove = function () {
        e.trigger(r.eMove, u)
    }, o._triggerOnStop = function () {
        e.trigger(r.eMoveStop, u)
    }, f = {
        Hover: function (n, t, i) {
            var r = n.extend({}, f.Hover.defaults, i),
                u = !1,
                e = function (n) {
                    n = n[t.props.mouse] - r.el.offset()[t.props.edge], t.position((n - r.mouseStart) / (t.props.fSize(r.el) - r.mouseStart - r.mouseEnd)), u = !1
                };
            this.stop = function () {
                r.el.unbind(b, e), u = !1
            }, this.start = function () {
                u || (u = !0, r.el.bind(b, e))
            }, r.el = r.el ? n(r.el) : t.$mask
        }
    }, f.Hover.defaults = {
        el: h,
        mouseStart: 50,
        mouseEnd: 50
    }, f.HoverCenter = function (n, t, i) {
        var c = "mouseleave",
            r = n.extend({}, f.HoverCenter.defaults, i),
            s = 0,
            h = !1,
            o, u = !1,
            a = function () {
                t.moveBounded(s), e()
            }, v = function (n) {
                h = !1, n = n[t.props.mouse] - r.el.offset()[t.props.edge] - (Math.round(t.props.fSize(r.el) / 2) + r.center), s = r.moveFunction ? r.moveFunction(n) : n < -r.mouseStart || n > r.mouseEnd ? -r.coefficient * (n + (0 < n ? -r.mouseEnd : r.mouseStart)) : 0, u || (a(), o = setInterval(a, r.timeout), u = !0)
            }, l = function () {
                s = 0, u && (clearInterval(o), u = !1), e(), eventLeaveOn = !1
            }, e = function () {
                h || (r.el.one(b, v), h = !0)
            };
        this.stop = function () {
            r.el.unbind(b, v), r.el.unbind(c, l), u && (clearInterval(o), u = !1)
        }, this.start = function () {
            e();
            r.el.one(c, l)
        }, r.el = r.el ? n(r.el) : t.$mask
    }, f.HoverCenter.defaults = {
        el: h,
        timeout: 50,
        mouseStart: 150,
        mouseEnd: 150,
        center: 0,
        coefficient: .2,
        moveFunction: h
    }, f.Drag = function (n, t, i) {
        var r = n.extend({}, f.Drag.defaults, i),
            h, e = !1,
            u = 0,
            c = 0,
            o = !1,
            v = function (i) {
                r.prevent && i.preventDefault(), e = !0, h = i[t.props.mouse], u = 0, n(document).bind(r.eventMove, s);
                n(document).one(r.eventEnd, a);
                o = !1, t.$mask.trigger("flowSliderDragStart", t)
            }, s = function (n) {
                var n, f, i, o;
                n.preventDefault(), e && (c = u, u = (n[t.props.mouse] - h) * r.coefficient, n = t.getOffset() + u - c, f = t.boundOffset(n), n != f && (i = Math.abs(f - n), o = r.outFunction ? r.outFunction(i) : i * r.outCoefficient, u += f < n ? o - i : i - o), t.move(u - c), r.el[0].fsDragging = !0)
            }, a = function (i) {
                r.prevent && i.preventDefault(), t.$mask.unbind(r.eventMove, s), e = !1, t.moveBounded((i[t.props.mouse] - h) * r.coefficient - u), n(document).unbind(r.eventMove, s), l(), t.$mask.trigger("flowSliderDragEnd", t), setTimeout(function () {
                    r.el[0].fsDragging = !1
                }, r._delay)
            }, l = function () {
                o || (o = !0, r.el.one(r.eventStart, v))
            };
        this.stop = function () {
            e && (n(document).unbind(r.eventMove, s), n(document).unbind(r.eventEnd, a), t.offset(t.boundOffset(t.getOffset())), e = !1, r.el[0].fsDragging = !1), n(document).unbind(r.eventStart, v), o = !1
        }, this.start = function () {
            l()
        }, r.el = r.el ? n(r.el) : t.$mask
    }, f.Drag.defaults = {
        el: h,
        eventStart: "mousedown",
        eventMove: b,
        eventEnd: "mouseup",
        coefficient: 1,
        outCoefficient: .125,
        outFunction: h,
        _delay: 200,
        prevent: !1
    }, f.Touch = function (n, t, i) {
        var l = "touchstart",
            a = "touchend touchcancel",
            c = "touchmove",
            r = n.extend({}, f.Touch.defaults, i),
            y, u = 0,
            h = 0,
            e = !1,
            o = !1,
            p = function (i) {
                r.prevent && i.preventDefault(), e = !0, y = i.originalEvent.touches[0][t.props.mouse], u = 0, n(document).bind(c, s);
                n(document).one(a, w);
                o = !1, t.$mask.trigger("flowSliderTouchStart", t)
            }, s = function (n) {
                var n, f, i, o;
                n.preventDefault(), e && (h = u, u = (n.originalEvent.touches[0][t.props.mouse] - y) * r.coefficient, n = t.getOffset() + u - h, f = t.boundOffset(n), n != f && (i = Math.abs(f - n), o = r.outFunction ? r.outFunction(i) : i * r.outCoefficient, u += f < n ? o - i : i - o), t.move(u - h), r.el[0].fsDragging = !0)
            }, w = function (i) {
                r.prevent && i.preventDefault(), e = !1, n(document).unbind(r.eventMove, s), t.offset(t.boundOffset(t.getOffset())), v(), t.$mask.trigger("flowSliderTouchEnd", t), setTimeout(function () {
                    r.el[0].fsDragging = !1
                }, r._delay)
            }, v = function () {
                o || (o = !0, r.el.one(l, p))
            };
        this.stop = function () {
            e && (n(document).unbind(c, s), n(document).unbind(a, w), t.offset(t.boundOffset(t.getOffset())), e = !1, r.el[0].fsDragging = !1), n(document).unbind(l, p), o = !1
        }, this.start = function () {
            v()
        }, r.el = r.el ? n(r.el) : t.$mask
    }, f.Touch.defaults = {
        el: h,
        timeout: 50,
        coefficient: 1,
        outCoefficient: .125,
        outFunction: h,
        _delay: 200,
        prevent: !1
    }, f.Wheel = function (n, t, i) {
        var o = "mousewheel",
            r = n.extend({}, f.Wheel.defaults, i),
            e = !1,
            u = 0,
            h = function () {
                var n = +new Date;
                n >= u + r.timeout ? (t.offset(t.boundOffset(t.getOffset())), e = !1) : setTimeout(h, r.timeout - (n - u))
            }, s = function (n, i) {
                n.preventDefault(), r.normalize && (i = 0 < i ? 1 : -1);
                var f = i * r.speed;
                offset = t.getOffset() + f, bound = t.boundOffset(offset), offset != bound && (f = r.outFunction(i, Math.abs(bound - offset))), r.timeout ? (t.move(f), u = +new Date, !e && offset != bound && (setTimeout(h, r.timeout), e = !0)) : t.moveBounded(f)
            };
        this.stop = function () {
            t.$mask.unbind(o, s)
        }, this.start = function () {
            t.$mask.bind(o, s)
        }
    }, f.Wheel.defaults = {
        speed: 40,
        normalize: !1,
        timeout: 500,
        outFunction: function (n, t) {
            return l < t ? 0 : 300 * n / t
        }
    }, f.Key = function (n, t, i) {
        var r = n.extend({}, f.Key.defaults, i),
            e = n(r.target),
            u = function (n) {
                n.keyCode == r.keyFwd && t.moveBounded(-r.step), n.keyCode == r.keyRev && t.moveBounded(r.step)
            };
        this.stop = function () {
            e.unbind("keydown", u)
        }, this.start = function () {
            e.keydown(u)
        }
    }, f.Key.defaults = {
        target: document,
        step: l,
        keyFwd: 39,
        keyRev: 37
    }, f.Hash = function (n, t, i) {
        var u = n.extend({}, f.Hash.defaults, i),
            r = window.location.hash,
            e = function () {
                var n = t.getOffset();
                t.s.infinite && (n %= t.calcSize() / 2), window.location.hash = Math.round(-n / Math.abs(u.step)) + 1
            };
        this.stop = function () {}, this.start = function () {
            r && (r = parseInt(r.substr(1, r.length - 1)), isNaN(r) && (r = 1), t.offset(t.boundOffset(-u.step * (r - 1)))), t.$mask.bind("flowSliderMoveStop", e)
        }
    }, f.Hash.defaults = {
        step: l
    }, f.Timer = function (n, t, i) {
        var r = n.extend({}, f.Timer.defaults, i),
            e, o = function () {
                t.moveBounded(-r.step)
            }, u = function () {
                clearInterval(e)
            };
        this.stop = function () {
            u()
        }, this.start = function () {
            n(r.el).bind(r.eventStart, function () {
                if (e = setInterval(o, r.time), r.eventEnd) n(r.el).one(r.eventEnd, u)
            })
        }
    }, f.Timer.defaults = {
        eventStart: "ready",
        eventEnd: h,
        el: document,
        step: l,
        time: 3e3
    }, f.Event = function (n, t, i) {
        var r = n.extend({}, f.Event.defaults, i),
            u = function (n) {
                if (n.preventDefault(), r.rewind) {
                    var n = t.getOffset(),
                        i = t.boundOffset(n - r.step);
                    if (n == i) {
                        t.position(0 < -r.step ? 1 : 0);
                        return
                    }
                }
                t.moveBounded(-r.step)
            };
        this.stop = function () {
            r.el.unbind(r.event, u)
        }, this.start = function () {
            r.el.bind(r.event, u)
        }, r.el = r.el ? n(r.el) : t.$mask
    }, f.Event.defaults = {
        el: h,
        event: "click",
        step: l,
        rewind: !0
    }, s = {
        None: function (n, t) {
            var i;
            this.getOffset = function () {
                return i
            }, this.offset = function (n) {
                t._triggerOnStart(), i = n, t.$wrap.css(t.props.edge, i), t._triggerOnStop()
            }, this.shift = function () {}, (i = parseInt(t.$wrap.css(t.props.edge))) || (i = 0)
        },
        CSS: function (n, t, i) {
            var e = "transition-timing-function",
                n = n.extend({}, s.CSS.defaults, i),
                u = parseInt(t.$wrap.css(t.props.edge)),
                o = t.props.edge,
                c = t.$wrap[0].style,
                f = !0,
                i = "",
                h = function () {
                    f = !0, t._triggerOnStop()
                }, r;
            hookStopEvent = function () {
                t.$wrap.one("transitionend", h)
            }, this.getOffset = function () {
                return u
            }, this.offset = function (n) {
                u = n, c[o] = u + p, f && (f = !1, hookStopEvent(), t._triggerOnStart())
            }, (u = parseInt(t.$wrap.css(o))) || (u = 0), i = FlowSlider.Util.transitionPrefix(), !1 !== i && (r = {}, r[i + "transition-property"] = t.props.edge, n.transitionAlt && (r[i + e] = n.transitionAlt), r[i + "transition-duration"] = n.time + "ms", r[i + "transition-delay"] = n.delay + "ms", t.$wrap.css(r), t.$wrap.css(i + e, n.transition))
        }
    }, s.CSS.defaults = {
        delay: -20,
        time: 1e3,
        transitionAlt: "cubic-bezier(0.345, 1.0, 0.535, 0.795)",
        transition: "cubic-bezier(0.345, 1.650, 0.535, 0.795)"
    }, s.Elastic = function (n, t, i) {
        var o = n.extend({}, s.Elastic.defaults, i),
            r, u, l, f = !1,
            e = t.props.edge,
            a = t.$wrap[0].style,
            h, c, v = function () {
                h = (u - r) * o.elasticity, c = .5 > Math.abs(h), u != r && !c ? (r += h, a[e] = r + p, t._triggerOnMove()) : (o.snap && (a[e] = u + p), f && (clearInterval(l), f = !1, t._triggerOnStop()))
            };
        this.getOffset = function () {
            return u
        }, this.offset = function (n) {
            u = n, f || (l = setInterval(v, o.frequency), f = !0, t._triggerOnStart())
        }, this.shift = function (n) {
            r += n, u += n
        }, (r = parseInt(t.$wrap.css(e))) || (r = 0), u = r
    }, s.Elastic.defaults = {
        snap: !1,
        frequency: 25,
        elasticity: .25
    }, s.Accelerating = function (n, t, i) {
        var u = n.extend({}, s.Accelerating.defaults, i),
            e, o, a, h = !1,
            v = t.props.edge,
            w = t.$wrap[0].style,
            r = 0,
            c, l, f, y = function () {
                (f = o - e) ? (r = u.acc ? r + (0 < f ? u.acc : -u.acc) : u.speed, u.dec && (c = Math.abs(r) / u.dec, l = u.dec * c * (c + 1) / 2, l > Math.abs(f - r) && (r = (0 < f ? 1 : -1) * (-1 + Math.sqrt(u.dec * (u.dec + 8 * Math.abs(f)))) / 2)), u.overshoot || (0 > f && 0 < r && (r = -u.acc), 0 < f && 0 > r && (r = u.acc)), r > u.speed && (r = u.speed), r < -u.speed && (r = -u.speed), 0 < f && r > f && (r = f), 0 > f && r < f && (r = f), e += r, w[v] = e + p, t._triggerOnMove()) : (r = 0, h && (clearInterval(a), h = !1, t._triggerOnStop()))
            };
        this.getOffset = function () {
            return o
        }, this.offset = function (n) {
            o = n, h || (a = setInterval(y, u.frequency), h = !0, t._triggerOnStart())
        }, this.shift = function (n) {
            e += n, o += n
        }, (o = e = parseInt(t.$wrap.css(v))) || (e = 0)
    }, s.Accelerating.defaults = {
        frequency: 50,
        speed: 50,
        acc: 3,
        dec: 3,
        overshoot: !0
    }, s.jQuery = function (n, t, i) {
        var f = n.extend({}, s.jQuery.defaults, i),
            r, u = t.props.edge;
        this.getOffset = function () {
            return r
        }, this.offset = function (n) {
            r = n, n = {}, n[u] = r, t.$wrap.stop(!0).animate(n, f.time, f.easing, t._triggerOnStop), t._triggerOnStart()
        }, (r = parseInt(t.$wrap.css(u))) || (r = 0)
    }, s.jQuery.defaults = {
        time: 1e3,
        easing: "swing"
    }, s.Transition = function (n, t, i) {
        var u = n.extend({}, s.Transition.defaults, i),
            k, v = !1,
            h, f, r, d, y, a, o, l = 0,
            e, c, w = t.props.edge,
            b = t.$wrap[0].style,
            g = function () {
                o = +new Date, y != r && (l = l > o ? o + e + Math.abs(r - h) * u.timeCoefficient : o + Math.abs(r - h) * u.timeCoefficient - u.frequency / 2, a = o + u.delay, e = l - a, e > u.timeMax && (e = u.timeMax, l = a + e), e < u.timeMin && (e = u.timeMin, l = a + e), h = f, d = r - h), o >= l ? (f = r, b[w] = f + p, v && (clearInterval(k), v = !1, t._triggerOnStop())) : (c = (o - a) / e, 1 < c && (c = 1), 0 > c && (c = 0), f = h + d * u.transition(c), b[w] = f + p, y = r, t._triggerOnMove())
            };
        this.getOffset = function () {
            return r
        }, this.offset = function (n) {
            r = n, v || (k = setInterval(g, u.frequency), v = !0, t._triggerOnStart())
        }, this.shift = function (n) {
            f += n, r += n, h += n, y += n
        }, (f = parseInt(t.$wrap.css(t.props.edge))) || (f = 0), h = r = f
    }, s.Transition.defaults = {
        delay: -20,
        frequency: 20,
        timeMin: l,
        timeMax: 1500,
        timeCoefficient: 10,
        transition: FlowSlider.Transition.circ
    }, st = function () {
        r.detectTouchDevice && "ontouchstart" in document.documentElement && (r.controllers = ["Touch"], r.controllerOptions = [r.touchOptions]), c = [];
        for (var t, n = 0; n < r.controllers.length; n++) t = r.controllerOptions[n] ? r.controllerOptions[n] : r.controllerOptions[0], c[n] = new f[r.controllers[n]](i, u, t);
        r.detectCssTransition && "CSS" != r.animation && !1 !== FlowSlider.Util.transitionPrefix() && (r.animation = "CSS", r.animationOptions = r.cssAnimationOptions), w = new s[r.animation](i, u, r.animationOptions)
    }, FlowSlider.Global.sliders++, 
	it == typeof r.onMoveStop && e.bind(r.eMoveStop, r.onMoveStop),
	 it == typeof r.onMoveStart && e.bind(r.eMoveStart, r.onMoveStart),
	  it == typeof r.onMove && e.bind(r.eMove, r.onMove), o.props = nt == r.mode ? n : vt, t = r.prefix + "-wrap", e.wrapInner('<span class="' + t + '-2" style="display:inline-block;"/>'), e.wrapInner(ct + t + '-1" style="position:absolute;"/>'), k = i(e.children("." + t + "-1")[0]), y = i(k.children("." + t + "-2")[0]), "vertical" == r.mode && y.css(tt, "100%"), o.s = r, o.$mask = e, o.$wrap = k, e.addClass(r.prefix), o.setupDOM(), "" == location.host || "localhost" == location.host || location.host.match(/flowslider\.com/i) || (e.append('<a href="http://www.flowslider.com" title="Flow Slider plugin&mdash;slide your HTML!" target="_blank" class="' + r.prefix + '-branding"></a>'), a = e.children("a." + r.prefix + "-branding"), FlowSlider.Global.brandingCSS || (FlowSlider.Global.brandingCSS = !0, t = document.createElement("STYLE"), t.type = "text/css", n = "." + r.prefix + "-branding {background:url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAARCAYAAAAi5qlcAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAA2RpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDo0MTJEMUUwQ0IxMjlFMTExQTdENUE2NkI4MENGMEUyQSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDo3NjZGQ0EwNDQ3NkIxMUUxQjhBOUNEQUU5RTA3NzY4MiIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo3NjZGQ0EwMzQ3NkIxMUUxQjhBOUNEQUU5RTA3NzY4MiIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IFdpbmRvd3MiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpEMzRBQjk2MzZCNDdFMTExQThDOEFBQzQzREU4RDlCMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo0MTJEMUUwQ0IxMjlFMTExQTdENUE2NkI4MENGMEUyQSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PjyGfq4AAASpSURBVHja7FhdSBxXFD4z+6fRdsWEUrJUS1swJKhJaLp9iCJp4gaKPgqlWAxFQ8DkzSd91CehULRgkVKoSIkvBW0h2hSCW2Jt0aJv2pKiSZsmGrImJq7r7k7ud+OZ3J2dWVc67UPZA4c7c+69585837nnzFzNMAz6pxKNRo1QKERer5d0XZdaEHtJp9NSk8kk7ezskNcNpwDe7/fL1uPxFAjYg4BUKmVi5BoBUJ/PZ+6CgjgTgOjna1cIAOCIfCbivyZgcXGRampq/hXfKysrVFZWRsFg0LYPa6Ovvr4+bwK4BU5e7ev1KnF/Q+irOeYdE9omtMti3xTaOH9EN3M/6/LjNJ2LPqV7ceca8+vZEhpZ3aFPlhMZ9lKvRt+dLqZwuce0xWIx+bKqVFZWUlVVlbyOx+OugA0FmQC9sbGRpqenqb+/n/r6+uR6s7Oz5vjR0VHq7e2lnp4eamho2FfAsnoZ/M9PldoOvvjL5vei+eOLcOmVZDqrD5Om7OYx+E5+x1bi9HqJTjXlfjHGb/VL7/+4RcvnS6jcr5lRDkAADEd7a2ura5E+MDBAXV1dVFtbK8lWfWNNRDgIcFu8DD5eWsr8JNHJiDrmqtAzH89uBqz9u/NsEWbwnfwOnSyiG2tJavtpixz80pOkYRLAAvCnpl5w3t7ebl6PjIzIiEQUA7CxsTFqaWmRAOIaBDY1Nck+gK36QYRDJicn5XiQgOjn3QdlwRqDg4MZNlx3dHTQ+Pi4JArrIWgwjncXfFdXV2fuBo44BsHo/9CKJXbAOb6R/QBLnecgufy+94qHfrifov363djYkMAwOGr6ABkAF2kC/QAEAlB4zsTEhFQniUQitLCwIEmwrgmQmWSsg9TDAkKxztLSknwWEI8WvlAjQAr8ZKUjwn/ArpogvbD9aXxwaFW0p00bg6XMs5Ucfg8XEb12QKeb60nar1+8FACAqgJguC4gjTDwfM3jASQik+1mShQRC9ABWDgclnPthMnr7Oy0tfOOxHOycFDYFWpdexQjVn3oN2lUbDPCFhTtcbbJSWKcOs9Ocvl9t3ibNhJpWlx9QDn9Guksv5yC1PSRS7heAHSOaoBcV1eXMY5BYmI4dVhFTTt2dhRsfBDk+1Gge9bvkqq+3mn1/prQ80I9Dv1S7SSX38ghg67feki05rjuc7+pdN7FDLmdI5yjD4WUCQBAHLVcI6xFGKmiu7vb3El2ohJkjXKuJXgGpx2UVYS1tbs/i/Ydmz5Ux2+EfrWHj9+JXnrLany7KE5ztx9mDS72eaj5zRPUfnWetLW/HZ2+cVB8ARXl/z8BYIaHh2Uuxqdpc3OzjEY1l4MQpCKAq9p3j1MkeCAKYGIu8rhVQBDXE/XfAOO5DqAPPvL5N9ECbUPBXZBDlr5rQj8V+i0C2qkmCv3o5uVTdyoqKigQCJg/Yo+2EnTxyyj9FXuaMeHssRBdOnOUWj67LgLcPs+/XCw+TS/U0eGyA//bP+FEIkHb29ukuXEYNzc3Z4AAPg8qHEXkT4ArRxE4XIJTBr5AwN4EADPXzoKYAF5A0zSpBXE+DQVeUFdSEGRmZsbAgRy0QEBuAngXQJ8JMABn2v61okLcyAAAAABJRU5ErkJggg==);z-index:9999999 !important;padding:0 !important;display:block !important}", t.styleSheet ? t.styleSheet.cssText = n : t.appendChild(document.createTextNode(n)), i("head").append(t)), a.css({
    }).delay(5e3).animate({}, 1e3), a.mouseenter(function () {}), a.mouseleave(function () {})), r.externalContent) {
        for (t = !1, n = 0; n < r.controllers.length; n++) if ("Hover" == r.controllers[n] || "HoverCenter" == r.controllers[n]) {
            t = !0;
            break
        }
        t && (e.append(ct + r.prefix + '-overlay-1"/><div class="' + r.prefix + '-overlay-2"/>'), et = e.children("." + r.prefix + "-overlay-1"), ft = e.children("." + r.prefix + "-overlay-2"), et.css(j, ht).css(u.props.size, u.calcSize()).css(u.props.sizeC, u.props.fSizeC(e)).css(u.props.edge, 0).css(u.props.edgeC, 0), ft.css(j, ht).css(u.props.size, u.wrapSize).css(u.props.sizeC, u.props.fSizeC(e)).css(u.props.edgeEnd, 0).css(u.props.edgeC, 0), e.mousemove(function (n) {
            rt = n[u.props.mouse] - e.offset()[u.props.edge], et.css(u.props.size, rt - r.overlayPrecision), ft.css(u.props.size, u.props.fSize(e) - rt - r.overlayPrecision)
        }))
    }
    for (k.css(o.props.edge, o.positionToOffset(r.startPosition)), st(), o.position(r.position), n = 0; n < c.length; n++) c[n].start()
};
FlowSlider.defaults = {
    mode: "horizontal",
    infinite: !1,
    animation: "Elastic",
    animationOptions: {},
    controllers: ["Hover"],
    controllerOptions: [{}],
    marginStart: 25,
    marginEnd: 25,
    startPosition: 0,
    position: .5,
    externalContent: !1,
    overlayPrecision: 7,
    detectTouchDevice: !0,
    touchOptions: {},
    detectCssTransition: !1,
    cssAnimationOptions: {},
    moveIfSmaller: !1,
    onMoveStart: null,
    onMoveStop: null,
    onMove: null,
    prefix: "www_FlowSlider_com",
    eMoveStart: "flowSliderMoveStart",
    eMoveStop: "flowSliderMoveStop",
    eMove: "flowSliderMove"
}, FlowSlider.Global = {
    VERSION: "1.6.0",
    PACK: "Free",
    pinged: !1,
    sliders: 0
}, FlowSlider.Util = {
    transitionPrefix: function () {
        var n = FlowSlider.Global,
            r, t, i;
        if (void 0 === n.tPrefix) {
            n.tPrefix = !1, r = (document.body || document.documentElement).style, t = {
                transition: "",
                MozTransition: "-moz-",
                WebkitTransition: "-webkit-",
                MsTransition: "-ms-",
                OTransition: "-o-"
            };
            for (i in t) if (void 0 !== r[i]) {
                n.tPrefix = t[i];
                break
            }
        }
        return n.tPrefix
    },
    protocol: function () {
        return "https:" == document.location.protocol ? "https:" : "http:"
    }
}, FlowSlider.Array = function (n) {
    for (var i = "calcSize getPosition position positionToOffset getOffset offset boundOffset setupDOM content set start stop".split(" "), r = this, t = 0; t < i.length; t++)(function (t) {
        r[t] = function () {
            for (var u, i, f = 0; f < n.length; f++) if (u = n[f].FlowSlider, i = u[t].apply(u, arguments), void 0 !== i && i !== u) return i;
            return r
        }
    })(i[t]);
    return this
}, FlowSlider.Transition = {
    none: function () {
        return 1
    },
    linear: function (n) {
        return n
    },
    quadratic: function (n) {
        var t = n * n;
        return n * (-t * n + 4 * t - 6 * n + 4)
    },
    cubic: function (n) {
        return n * (4 * n * n - 9 * n + 6)
    },
    elastic: function (n) {
        var t = n * n;
        return n * (33 * t * t - 106 * t * n + 126 * t - 67 * n + 15)
    },
    circ: function (n) {
        return Math.sqrt(1 - (n -= 1) * n)
    },
    CubicBezier: function (n, t, i, r, u, f) {
        var v = u ? u : .001,
            y = f ? f : 5,
            e = 3 * n,
            o = 3 * (i - n) - e,
            p = 2 * o,
            c = 1 - e - o,
            a = 3 * c,
            s = 3 * t,
            h = 3 * (r - t) - s,
            l = 1 - s - h;
        this.transition = function (n) {
            for (var t = n, r = 0, i; r < y; r++) {
                if (i = t * (e + t * (o + t * c)) - n, Math.abs(i) < v) break;
                t -= i / (e + t * (p + t * a))
            }
            return t * (s + t * (h + t * l))
        }
    }
},
function (n) {
    n.fn.FlowSlider = function (t) {
        return FlowSlider.Array(this.each(function (i, r) {
            r.FlowSlider || (r.FlowSlider = new FlowSlider(r, t, n))
        }))
    }
}(jQuery);;