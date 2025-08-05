#include <FindDirectory.h>
#include <Directory.h>
#include <Path.h>
#include <Entry.h>
#include <File.h>
#include <Control.h>
#include <String.h>

#include <stdlib.h>

#include "NvSettings.h"

NvSettings::NvSettings(const char *fileName) : BMessage('NvSt')
{
	BPath path;
	
	fFilePath.SetTo("");
	fState = B_ERROR;

	if(find_directory(B_USER_SETTINGS_DIRECTORY, &path) != B_OK)
		path.SetTo("/boot/home/config/settings");

	fFilePath = path.Path();
	fFilePath << "/";
	fFilePath << fileName;

	fState = B_OK;
}

bool
NvSettings::FileExist()
{
	if(fState != B_OK)
		return false;

	BEntry fileEntry;
	fileEntry.SetTo(fFilePath.String());
	return fileEntry.Exists();
}

status_t
NvSettings::Save()
{	
	if(fState != B_OK)
		return B_ERROR;

	BFile file(fFilePath.String(), B_CREATE_FILE | B_ERASE_FILE | B_WRITE_ONLY);
	if(file.InitCheck() != B_OK)
		return B_ERROR;

	if(IsEmpty())
		return B_ERROR;

	if(BMessage::Flatten(&file) != B_OK)
		return B_ERROR;

	return B_OK;
}

status_t
NvSettings::Load()
{
	if(fState != B_OK)
		return B_ERROR;

	BFile file(fFilePath.String(), B_READ_ONLY);
	if(file.InitCheck() != B_OK)
		return B_ERROR;

	BMessage::MakeEmpty();
	if(BMessage::Unflatten(&file) != B_OK)
		return B_ERROR;

	return B_OK;
}
