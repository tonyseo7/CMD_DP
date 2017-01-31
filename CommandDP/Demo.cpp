#include "stdafx.h"
#include "UIPart.h"


void main()
{
	UIPart *up = new UIPart();
	up->Login("È«±æµ¿");

	up->SavePicture("ÇöÃæ»çÀÇ º½");
	up->Login("¼­Èñ");
	up->SavePicture("µ¶¸³±â³ä°üÀÇ ²É");

	up->DoItCommand(UIPart::CommandEnum::VIEW);
	up->DoItCommand(UIPart::CommandEnum::VIEW_VERIFY);

	delete up;
}