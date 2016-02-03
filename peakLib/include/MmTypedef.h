#ifndef _Manm_TypeDef_H_
#define _Manm_TypeDef_H_

#ifdef _WIN32
#	define _WINDOWS_OS_
#	ifndef _WIN32_WINNT
#		define _WIN32_WINNT 0x0500
#	endif
#	if _MSC_VER >=1600
#		define NL_COMP_VC10
#	elif _MSC_VER >=1500
#		define NL_COMP_VC9
#	elif _MSC_VER >=1400
#		define NL_COMP_VC8
#	endif

#	ifdef _WIN64
#		define _WIN64_OS_
#	endif

#	define NOMINMAX

#else
#	define _LINUX_OS_
#	define LINUX_COMP_GCC
#endif

#ifdef LINUX_COMP_GCC
#	define GCC_VERSION(__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
#	if GCC_VERSION > 40100
#		define _MM_ISO_STDTR1_AVAILABLE
#		define _MM_ISO_STDTR1_HEADER(header) <tr1/header>
#	endif
#endif

#ifdef _WINDOWS_OS_
#	pragma warning (disable : 4503)
#	pragma warning (disable : 4786)
#	pragma warning (disable : 4290)
#	pragma warning (disable : 4250)
#	pragma warning (disable : 4390)
#	pragma warning (disable : 4996)
#	if defined(NL_COMP_VC8) || defined(NL_COMP_VC9) || defined(NL_COMP_VC10) 
#		pragma warning (disable : 4005)
#	endif
#endif

#ifdef _WINDOWS_OS_
typedef signed		__int8		sint8;
typedef unsigned	__int8		uint8;
typedef signed		__int16		sint16;
typedef unsigned	__int16		uint16;
typedef signed		__int32		sint32;
typedef unsigned	__int32		uint32;
typedef signed		__int64		sint64;
typedef unsigned	__int64		uint64;
typedef signed		int			sint;
typedef unsigned	int			uint;
/*
#ifndef _INTPTR_T_DEFINED
#ifdef _WIN64
typedef __int64		intptr_t;
#else
typedef _W64 int	intptr_t;
#endif
#define _INTPTR_T_DEFINED
#endif
typedef intptr_t intptr;
*/
#elif defined(_LINUX_OS_)

#include <sys/types.h>
#include <stdint.h>
#include <climits>

typedef		int8_t		sint8;
typedef		uint8_t		uint8;
typedef		int16_t		sint16;
typedef		uint16_t	uint16;
typedef		int32_t		sint32;
typedef		uint32_t	uint32;
typedef		int64_t		sint64;
typedef		uint64_t	uint64;

typedef signed		int			sint;
typedef unsigned	int			uint;
typedef intptr_t intptr;

#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#endif
#endif
