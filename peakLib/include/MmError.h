#ifndef _Manm_Error_
#define _Manm_Error_
#include "Mmsingle.h"

class CMmError : public CSingleton<CMmError>
{
public:
	CMmError(void);
	~CMmError(void);

	enum Error_Code
	{
		en_False,
		en_OK,
	};
};

#endif

