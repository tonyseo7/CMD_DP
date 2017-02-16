#pragma once
#include "CommandAlgorithm.h"
#include "PictureManager.h"

class UIPart
{
	PictureManager *pm;
	Command *commands[3];
	string user;

public:
	enum CommandEnum{VIEW, VIEW_VERIFY};
	UIPart(void);
	~UIPart(void);

	void Login(string user);
	void SavePicture(string name);
	void DoItCommand(CommandEnum cmd);
};
