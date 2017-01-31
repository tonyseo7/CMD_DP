#pragma once
#include "Command.h"

class  ViewPicture : public Command
{
public :
	void Execute(Picture *picture);
};


class ViewVerifyPicture : public Command
{
public:
	void Execute(Picture *picture);
	
};


class DisposePicture : public Command
{
public:
	void Execute(Picture *picture);
	
};
