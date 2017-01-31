#include "stdafx.h"
#include "CommandAlgorithm.h"

void ViewPicture::Execute(Picture *picture)
{
	cout << "사진 파일명:" << picture->GetName() << endl;
}


void ViewVerifyPicture::Execute(Picture *picture)
{
	cout << "[사진 파일명]" << picture->GetName();
	cout << "[소유자]" << picture->GetUser() << endl;
}

void DisposePicture::Execute(Picture *picture)
{
	delete picture;
}