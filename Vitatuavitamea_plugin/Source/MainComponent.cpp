#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
	setSize(400, 400);
	addAndMakeVisible(frequencySlider);

	//frequencySlider.setSliderStyle(juce::Slider::Rotary);
	frequencySlider.setRange(50, 5000);
	frequencySlider.setTextValueSuffix("Hz");

	addAndMakeVisible(frequencyLabel);
	frequencyLabel.setText("Frequency",juce::dontSendNotification);
	frequencyLabel.attachToComponent(&frequencySlider,true);
	//frequencySlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false,50, 20);
	frequencySlider.colourChanged();
	frequencySlider.addListener(this);

	addAndMakeVisible(durationSlider);
	//durationSlider.setSliderStyle(juce::Slider::Rotary);
	durationSlider.setRange(1.0 / frequencySlider.getMaximum(),1.0/frequencySlider.getMinimum());
	durationSlider.setTextValueSuffix("s");
	durationSlider.addListener(this);
	

	addAndMakeVisible(durationLabel);
	durationLabel.setText("Duration", juce::dontSendNotification);
	durationLabel.attachToComponent(&durationSlider, true);
	//durationSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 50, 20);


	frequencySlider.setValue(500);
	frequencySlider.setSkewFactor(500.0);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& component)
{
	component.fillAll(juce::Colours::grey);
}



void MainComponent::resized()
{
    //our children will be drawn relatively to the MainComponent
    //look at the size of our window and set the coordinate system relative to the MainComponent
	juce::Rectangle <int> main_area = getLocalBounds();
	juce::Rectangle <int> frequencySlider_area = main_area;
	juce::Rectangle <int> durationSlider_area = main_area.removeFromBottom(main_area.getWidth()/2);

	frequencySlider.setBounds(120,20,getWidth()-120,20);
	durationSlider.setBounds(120, 60, getWidth() - 120, 20);

	
	//slider_r2.setBounds(slider_2_area);
	//slider_r3.setBounds(slider_3_area);


  }
