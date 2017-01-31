#include "stdafx.h"
#include "Picture.h"

Picture::Picture(string name, string user)
{
	this->name = name;
	this->user = user;
}

Picture::~Picture()
{
	cout << name << "파일 삭제" << endl;
}
