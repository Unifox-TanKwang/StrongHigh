#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
class RectComponent {
public:
	RectComponent() {
		px = py = wid = hgt = 0;
		rect_c = Colours::olive;
	}
	RectComponent(int x, int y, int w, int h, Colours c) {
		px = x;
		py = y;
		wid = w;
		hgt = h;
		rect_c = c;
	}
	void resized(int x, int y, int w, int h) {
		px = x;
		py = y;
		wid = w;
		hgt = h;
	}
	inline void set_color(Colour c) { rect_c = c; }
	void paint(Graphics &g) {
		g.setColour(rect_c);
		Path p;
		p.addRectangle(px, py, wid, hgt);
		g.fillPath(p);
	}
private:
	int px, py, wid, hgt;
	Colour rect_c;
};