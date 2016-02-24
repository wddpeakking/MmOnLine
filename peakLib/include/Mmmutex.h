#ifndef _Manm_Mutex_H_
#define _Manm_Mutex_H_

#include "MmTypedef.h"
#include <iostream>

#ifdef _WINDOWS_OS_
#include <Windows.h>
#else
	#include <semaphore.h>
#endif

class CMutex
{
public:
	CMutex(){
		m_strName = "unset mutex name";
#ifdef _WINDOWS_OS_
		InitializeCriticalSection(&m_cs);
#else
		sem_init(const_cast<sem_t*>(&m_cs),0,1);
#endif

	};
	CMutex(const std::string str){
		m_strName = str;
#ifdef _WINDOWS_OS_
		InitializeCriticalSection(&m_cs);
#else
		sem_init(const_cast<sem_t*>(&m_cs),0,1);
#endif
	};
	~CMutex(){
#ifdef _WINDOWS_OS_
		DeleteCriticalSection(&m_cs);
#else
		sem_destroy(const_cast<sem_t*>(&m_cs));
#endif
	};

	void enter()
	{
#ifdef _WINDOWS_OS_
		EnterCriticalSection(&m_cs);
#else
		sem_wait(const_cast<sem_t*>(&m_cs));
#endif
	}

	void leave()
	{
#ifdef _WINDOWS_OS_
		LeaveCriticalSection(&m_cs);
#else
		sem_post(const_cast<sem_t*>(&m_cs));
#endif
	}

private:
	std::string m_strName;
#ifdef _WINDOWS_OS_
	CRITICAL_SECTION m_cs;
#else
	sem_t m_cs;
#endif

};
#endif