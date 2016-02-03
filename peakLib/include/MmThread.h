#ifndef _Manm_Thread_H_
#define _Manm_Thread_H_
#include "MmTypedef.h"
class CMmThread
{
public:
	CMmThread(void);
	~CMmThread(void);

	virtual void CreateThread();
	virtual bool IsRunning();
	virtual void Stop(); 

	virtual void run()=0;
	 
private:
	void* m_pHandle;		//线程句柄
	uint32 m_nThreadID;		//线程ID
	bool m_bIsRunning;		//运行状态
};

#endif