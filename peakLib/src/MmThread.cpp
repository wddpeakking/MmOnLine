#include "../include/MmThread.h"
#include "../include/MmLog.h"

#ifdef _WINDOWS_OS_
#include <Windows.h>
#else

#endif
static unsigned long __stdcall ProxyFunc(void* pFun)
{
	if (pFun)
	{
		CMmThread* pThread = (CMmThread*)(pFun);
		if (pThread)
		{
			pThread->run();
			return 0;
		}
	}
	return -1;
}

CMmThread::CMmThread(void)
{

}


CMmThread::~CMmThread(void)
{
}

void CMmThread::CreateThread()
{
#ifdef _WINDOWS_OS_
	m_pHandle = (void*)::CreateThread(NULL,0,ProxyFunc,this,0,(DWORD*)&m_nThreadID);
	SetThreadPriorityBoost(m_pHandle,TRUE);
	if (m_pHandle == NULL)
	{
		LogErrorMsg("Create Thread Failed");
	}
#else

#endif
}
bool CMmThread::IsRunning()
{
	return m_bIsRunning;
}
void CMmThread::Stop()
{
	m_bIsRunning = false;
}