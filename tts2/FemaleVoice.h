#pragma once
#include "BasicVoice.h"
class FemaleVoice : public BasicVoice
{
public:
	void setSpeech() override;
	void byeSpeech() override;
	void outSpeech() override;
};

