#pragma once
#include "BasicVoice.h"

class MaleVoice : public BasicVoice
{
public:
	void setSpeech() override;
	void byeSpeech() override;
	void outSpeech() override;
};

