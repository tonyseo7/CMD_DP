#include "stdafx.h"
#include "PictureManager.h"

void PictureManager::AddPicture(string name, string user)
{
	pictures.push_back(new Picture(name, user));

}



void PictureManager::DoItAllPicture(Command *command)
{
	PIter seek = pictures.begin();
	PIter end = pictures.end();

	for (; seek != end; ++seek)
	{
		command->Execute(*seek);
	}
}