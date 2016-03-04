#include "../include/MmCaptureCameraThread.h"
//#include "cv.h"
#include "highgui/highgui.hpp"

#pragma comment(lib,"opencv_core249d.lib")
#pragma comment(lib,"opencv_highgui249d.lib")
CCaptureCameraThread::CCaptureCameraThread()
{

}
CCaptureCameraThread::~CCaptureCameraThread()
{

}
void CCaptureCameraThread::run()
{
	CvCapture* pCapture = cvCreateCameraCapture( -1 );
	while(1)
	{
		if (pCapture != NULL)
		{
			int nFrame = 0;
			IplImage* pImage = NULL;
			while (1)
			{
				pImage = cvQueryFrame(pCapture);
				if (pImage != NULL)
				{
				}
			}
		}
	}
	
}