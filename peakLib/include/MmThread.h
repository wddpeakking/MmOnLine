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
	void* m_pHandle;		//�߳̾��
	uint32 m_nThreadID;		//�߳�ID
	bool m_bIsRunning;		//����״̬
};

#endif