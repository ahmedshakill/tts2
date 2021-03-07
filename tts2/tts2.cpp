// tts2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#pragma once
#include <sapi.h>
#include <iostream>
#include <string>
#include "BasicVoice.h"
#include "MaleVoice.h"
#include "FemaleVoice.h"





int main()
{
	BasicVoice* voice=NULL;
	
	int choice;
	do
	{
		cout<<"Enter 1 for male voice\t 2 for female voice\n";

		wcin>>choice;

		switch(choice)
		{
			case 1:
				voice=new MaleVoice;
				voice->setSpeech();
				//voice->byeSpeech();
				voice->outSpeech();
				delete voice;
				break;
			case 2:
				voice=new FemaleVoice;
				voice->setSpeech();
				//voice->byeSpeech();
				voice->outSpeech();
				delete voice;
				break;
			case 3:
				voice=new FemaleVoice;
				voice->byeSpeech();
				voice->outSpeech();
				delete voice;
				break;
			default:
				break;
		}
		
	}while(choice!=3);
	system("pause");
	return 0;
}

