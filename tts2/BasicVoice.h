#pragma once
#include <sapi.h>
#include <iostream>
#include <string>
using std::wstring;
using std::cout;
using std::wcin;
class BasicVoice
{

public:
	BasicVoice()
	{
		pVoice=NULL;
		input=L"";
		a=CoInitializeEx(NULL,COINIT_APARTMENTTHREADED);
		if(FAILED(a))
		{
			cout<<"Error 404 Failed Initializing com\n";
			exit(1);
		}
		hr=CoCreateInstance(CLSID_SpVoice,NULL,
			CLSCTX_ALL,
			IID_ISpVoice,
			(void** )&pVoice);


	}

	virtual void setSpeech();
	virtual void byeSpeech();
	virtual void outSpeech();
	virtual ~BasicVoice()
	{
		CoUninitialize();
		delete pVoice;
	}

protected:
	int choice;
	ISpVoice *pVoice;
	HRESULT hr,a;
	wstring input;
	
};

