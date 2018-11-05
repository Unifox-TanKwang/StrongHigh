/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

class BlockComponent1 : public Component
{
public:
	BlockComponent1() : block_col(Colours::grey) {}
	BlockComponent1(int xpos, int ypos) : block_col(Colours::grey) {
		x = xpos;
		y = ypos;
	}
	void setPose(int xpos, int ypos) { x = xpos, y = ypos; }
	void paint(Graphics &g) {
		g.setColour(block_col);
		g.fillRect(x-w/2, y-h/2, w, h);
	}
	void resized() override {}
	void set_color(Colour c) { block_col = c; }
private:
	int x, y;
	const int w = 1000, h = 60;
	Colour block_col;
};

class BlockComponent2 : public Component
{
public:
	BlockComponent2() : block_col(Colours::darkgrey) {}
	BlockComponent2(int xpos, int ypos) : block_col(Colours::darkgrey) {
		x = xpos;
		y = ypos;
	}
	void setPose(int xpos, int ypos) { x = xpos, y = ypos; }
	void paint(Graphics &g) {
		g.setColour(block_col);
		g.fillRect(x - w / 2, y - h / 2, w, h);
	}
	void resized() override {}
	void set_color(Colour c) { block_col = c; }
private:
	int x, y;
	const int w = 900, h = 200;
	Colour block_col;
};

class BlockComponent3 : public Component
{
public:
	BlockComponent3() : block_col(Colours::darkgrey) {}
	BlockComponent3(int xpos, int ypos) : block_col(Colours::darkgrey) {
		x = xpos;
		y = ypos;
	}
	void setPose(int xpos, int ypos) { x = xpos, y = ypos; }
	void paint(Graphics &g) {
		g.setColour(block_col);
		g.fillRect(x - w / 2, y - h / 2, w, h);
	}
	void resized() override {}
	void set_color(Colour c) { block_col = c; }
private:
	int x, y;
	const int w = 150, h = 300;
	Colour block_col;
};

class BlockComponent4 : public Component
{
public:
	BlockComponent4() : block_col(Colours::grey) {}
	BlockComponent4(int xpos, int ypos) : block_col(Colours::grey) {
		x = xpos;
		y = ypos;
	}
	void setPose(int xpos, int ypos) { x = xpos, y = ypos; }
	void paint(Graphics &g) {
		g.setColour(block_col);
		g.fillRect(x - w / 2, y - h / 2, w, h);
	}
	void resized() override {}
	void set_color(Colour c) { block_col = c; }
private:
	int x, y;
	const int w = 200, h = 30;
	Colour block_col;
};

class BlockComponent5 : public Component
{
public:
	BlockComponent5() : block_col(Colours::darkgrey) {}
	BlockComponent5(int xpos, int ypos) : block_col(Colours::darkgrey) {
		x = xpos;
		y = ypos;
	}
	void setPose(int xpos, int ypos) { x = xpos, y = ypos; }
	void paint(Graphics &g) {
		g.setColour(block_col);
		g.fillRect(x - w / 2, y - h / 2, w, h);
	}
	void resized() override {}
	void set_color(Colour c) { block_col = c; }
private:
	int x, y;
	const int w = 850, h = 200;
	Colour block_col;
};

class roofComponent : public Component
{
public:
	roofComponent() : block_col(Colours::red) {}
	roofComponent(int xpos, int ypos) : block_col(Colours::red) {
		x = xpos;
		y = ypos;
	}
	void setPose(int xpos, int ypos) { x = xpos, y = ypos; }
	void paint(Graphics &g) {
		Path roof;
		g.setColour(block_col);
		roof.addTriangle(x - w / 2, y - h / 2, x + w / 2, y - h / 2, x, y - w / 3 * 2);
		g.fillPath(roof);
	}
	void resized() override {}
	void set_color(Colour c) { block_col = c; }
private:
	int x, y;
	const int w = 200, h = 30;
	Colour block_col;
};

class TopComponent : public Component
{
private:
	BlockComponent3 B1;
	BlockComponent4 B2;
	roofComponent R;
	int x, y;
	int w, h;
	Colour block_col;
public:
	TopComponent() : block_col(Colours::darkgrey) {}
	TopComponent(int xpos, int ypos) : block_col(Colours::darkgrey) {
		x = xpos;
		y = ypos;
		B1.setPose(x, y);
		B2.setPose(x, y-150);
		R.setPose(x, y - 150);
	}
	void paint(Graphics &g) {
		g.setColour(block_col);
		B1.paint(g);
		B2.paint(g);
		R.paint(g);
	}
	void resized() override {}
	void set_color(Colour c) { block_col = c; }
};