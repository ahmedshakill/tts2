#include "pch.h"
#include "FemaleVoice.h"

void FemaleVoice::setSpeech()
{
	if(SUCCEEDED(hr))
	{
		cout<<"Enter text: \n";
		wcin.ignore(1,'\n');
		getline(wcin,input);
	}

	cout<<"At What Speed you want to Play your Voice\n1 for Normal \n2 for -2x\n3 for 2x";
	wcin>>choice;
	if(choice==2)
	{
		hr=pVoice->Speak((L"<rate absspeed='-2'><voice required='Gender\
				=Female;'>"+input).c_str(),0,NULL);
	}
	else if(choice==3)
	{
		hr=pVoice->Speak((L"<rate absspeed='2'><voice required='Gender\
				=Female;'>"+input).c_str(),0,NULL);
	}
	else
	{
		hr=pVoice->Speak((L"<voice required='Gender = Female;'>"+input).c_str(),0,NULL);
	}
}

void FemaleVoice::byeSpeech()
{
	hr=pVoice->Speak(L"<voice required='Gender=Female'><rate absspeed='-5'> Muchas Gracias Senor",0,NULL);
}

void FemaleVoice::outSpeech()
{
	pVoice->Release();
	pVoice=NULL;
	CoUninitialize();
}
