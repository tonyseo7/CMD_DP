#pragma once
#include "common.h"

class Picture
{
	string name;
	string user;

public:
	Picture(string name, string user);

	~Picture();
	
	string GetName()const { return name; }
	string GetUser()const { return user; }
};
