#pragma once
#include "Picture.h"
#include "Command.h"

typedef vector<Picture *> Pictures;
typedef vector<Picture *>::iterator PIter;

class PictureManager
{
	Pictures pictures;

public:
	void AddPicture(string name, string user);
	void DoItAllPicture(Command *command);

};