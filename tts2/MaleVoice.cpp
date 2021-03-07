#include "pch.h"
#include "MaleVoice.h"

void MaleVoice::setSpeech()
{
	if(SUCCEEDED(hr))
	{
		cout<<"Enter Text:\n";
		wcin.ignore(1,'\n');
		getline(wcin,input);
	}
	else
	{
		cout<<"Initialization failed\n";
		exit(-1);
	}
	system("cls");
	cout<<"At What Speed you want to Play\
		your Voice\n1 for Normal \n2 for -2x\n3 for 2x ";
	wcin>>choice;
	if(choice==2)
	{
		hr=pVoice->Speak((L"<rate absspreed='-2'>"+input).c_str(),
					0,NULL);
	}
	else if(choice==3)
	{
		hr=pVoice->Speak((L"<rate absspeed='2'>"+input).c_str(),
			0,NULL);
	}
	else
		hr=pVoice->Speak((L"<voice required='Gender=Male'>"+input).c_str(),0,NULL);
}

void MaleVoice::byeSpeech()
{
	hr=pVoice->Speak(L"<voice required='Gender=Male'><rate absspeed='-5'> Muchas Gracias Senor",0,NULL);
}

void MaleVoice::outSpeech()
{
	pVoice->Release();
	pVoice=NULL;
	CoUninitialize();
}
