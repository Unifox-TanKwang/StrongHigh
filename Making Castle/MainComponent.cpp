/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

const int w = 1200, h = 800;
//==============================================================================
MainComponent::MainComponent()
{
    setSize (w, h);
}

MainComponent::~MainComponent()
{

}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
	const int cx = w / 2, cy = h / 2 + 100;
	const int ccx = w / 2, ccy = h / 2 - 50;
	const int rx = w / 4 * 3 +50, ry = h / 2 - 50;
	const int lx = w / 4 - 50, ly = h / 2 - 50;
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

	TopComponent top1(lx, ly), top2(rx, ry), top3(ccx, ccy);
	top1.paint(g);
	top2.paint(g);
	top3.paint(g);

	BlockComponent1 B1(cx, cy + 100), B3(cx, cy - 100);
	BlockComponent2 B2(cx, cy + 170);
	BlockComponent5 B10(cx, cy);
	B2.paint(g);
	B10.paint(g);
	B1.paint(g);
	B3.paint(g);

}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
