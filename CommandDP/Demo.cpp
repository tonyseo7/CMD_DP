#include "stdafx.h"
#include "UIPart.h"


void main()
{
	UIPart *up = new UIPart();
	up->Login("ȫ�浿");

	up->SavePicture("������� ��");
	up->Login("����");
	up->SavePicture("���������� ��");

	up->DoItCommand(UIPart::CommandEnum::VIEW);
	up->DoItCommand(UIPart::CommandEnum::VIEW_VERIFY);

	delete up;
}