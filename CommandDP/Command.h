#pragma once

#include "Picture.h"

class Command
{
public:
	virtual void Execute(Picture *picture) = 0;
};
