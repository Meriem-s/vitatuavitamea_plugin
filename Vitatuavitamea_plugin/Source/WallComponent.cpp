/*
  ==============================================================================

    WallComponent.cpp
    Created: 30 Sep 2021 6:52:34pm
    Author:  Meriem

  ==============================================================================
*/

#include <JuceHeader.h>
#include "WallComponent.h"

#include "GrassComponent.h"

using namespace juce;
//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (juce::Graphics& g)
{
	//all of these funtions are from the Graphics class

	juce::Rectangle <float> wall(200,200,200,120);
	g.fillCheckerBoard(wall, 20, 10,juce::Colours::sandybrown,juce::Colours::white);
	g.drawRect(wall);

}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
