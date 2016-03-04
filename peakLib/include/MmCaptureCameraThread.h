#ifndef _Manm_Capture_Camera_H_
#define _Manm_Capture_Camera_H_

#include "MmThread.h"
class CCaptureCameraThread : public CMmThread
{
public:
	CCaptureCameraThread();
	~CCaptureCameraThread();

	virtual void run();
};
#endif