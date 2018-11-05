#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
class BlockComponent {
public:
	BlockComponent() {
		px = py = 0;
		block_c = Colours::lightgrey;
	}
	BlockComponent(int x, int y) {
		px = x;
		py = y;
	}
	BlockComponent(int x, int y, Colour c) {
		px = x;
		py = y;
		block_c = c;
	}
	void repose(int x, int y) {
		px = x;
		py = y;
	}
	inline void set_color(Colour c) { block_c = c; }
	void paint(Graphics &g) {
		g.setColour(block_c);
		Path p;
		p.addRectangle(px, py, 30, 60);
		g.fillPath(p);
	}
private:
	int px, py;
	Colour block_c;
};