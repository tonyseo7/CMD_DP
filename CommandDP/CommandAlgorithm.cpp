#include "stdafx.h"
#include "CommandAlgorithm.h"

void ViewPicture::Execute(Picture *picture)
{
	cout << "���� ���ϸ�:" << picture->GetName() << endl;
}


void ViewVerifyPicture::Execute(Picture *picture)
{
	cout << "[���� ���ϸ�]" << picture->GetName();
	cout << "[������]" << picture->GetUser() << endl;
}

void DisposePicture::Execute(Picture *picture)
{
	delete picture;
}