/*
  ==============================================================================

    GrassComponent.cpp
    Created: 1 Oct 2021 10:51:58am
    Author:  Meriem

  ==============================================================================
*/

#include <JuceHeader.h>
#include "GrassComponent.h"

//==============================================================================
GrassComponent::GrassComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

GrassComponent::~GrassComponent()
{
}

void GrassComponent::paint (juce::Graphics& g)
{
   
//draw line
	float thickness =10;
	g.drawLine(10, 325, getWidth() - 10, 325,thickness);
	g.setColour(juce::Colours::greenyellow);
}

void GrassComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
