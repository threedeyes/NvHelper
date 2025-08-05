#ifndef NV_SETTINGS_H
#define NV_SETTINGS_H

#include <Message.h>
#include <GraphicsDefs.h>
#include <String.h>

class NvSettings : public BMessage
{
public:
				NvSettings(const char *fileName);
	virtual 	~NvSettings() {};

	status_t	Save();
	status_t	Load();
	bool		FileExist();

protected:
	BString		fFilePath;
	status_t	fState;
};

#endif
