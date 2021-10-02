/*
  ==============================================================================

    GrassComponent.h
    Created: 1 Oct 2021 10:51:58am
    Author:  Meriem

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class GrassComponent  : public juce::Component
{
public:
    GrassComponent();
    ~GrassComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GrassComponent)
};
