/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
	const int screen_width = 600, screen_height = 400;
    setSize (screen_width, screen_height);
	paint(g);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g) 
{
	const int Width = 600, Height = 400;
	BlockComponent B(10, 10);
	B.paint(g);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
