#include "stdafx.h"
#include "Picture.h"

Picture::Picture(string name, string user)
{
	this->name = name;
	this->user = user;
}

Picture::~Picture()
{
	cout << name << "���� ����" << endl;
}
