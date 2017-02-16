#include "stdafx.h"
#include "UIPart.h"

UIPart::UIPart(void)
{
	pm = new PictureManager();
	commands[0] = new ViewPicture();
	commands[1] = new ViewVerifyPicture();
	commands[2] = new DisposePicture();
	user = "";
}

UIPart::~UIPart(void)
{
	Command *dp = new DisposePicture();
	pm->DoItAllPicture(dp);
	
	delete dp;
	delete pm;
}

void UIPart::Login(string user)
{
	this->user = user;
}

void UIPart::SavePicture(string name)
{
	if (user == "")
	{
		cout << "먼저 로그인을 하십시오." << endl;

	}
	else
	{
		pm->AddPicture(name, user);
	}
}

void UIPart::DoItCommand(CommandEnum cmd)
{
	pm->DoItAllPicture(commands[cmd]);
}