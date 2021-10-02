/*
  ==============================================================================

    RoofComponent.cpp
    Created: 1 Oct 2021 11:22:27am
    Author:  Meriem

  ==============================================================================
*/

#include <JuceHeader.h>
#include "RoofComponent.h"

//==============================================================================
RoofComponent::RoofComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

RoofComponent::~RoofComponent()
{
}

void RoofComponent::paint (juce::Graphics& g)
{
 
    g.setColour (juce::Colours::grey);
	juce::Path p;
	p.startNewSubPath(200, 190);
	p.lineTo(400, 190);
	p.lineTo(300, 140);
	p.closeSubPath();

	g.strokePath(p, juce::PathStrokeType(15.0f));
  
}

void RoofComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
