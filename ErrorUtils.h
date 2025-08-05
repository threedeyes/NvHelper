#pragma once

#include <stdexcept>

#include "nv.h"
#include "nvos.h"


#define Assert(cond) {if (!(cond)) {fprintf(stderr, "[!] assert failed: %s:%d\n", __FILE__, __LINE__); abort();}}


class NvException: public std::runtime_error {
private:
	NV_STATUS fStatus;
	
public:
	NvException(NV_STATUS status):
		std::runtime_error(nvstatusToString(status)), fStatus(status) {}
	
	NV_STATUS Status() const {return fStatus;}
};


inline void NvCheck(NV_STATUS status)
{
	if (status != NV_OK) {
		throw NvException(status);
	}
}
