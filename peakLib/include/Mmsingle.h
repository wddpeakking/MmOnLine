#ifndef _Manm_Sigle_H_
#define _Manm_Sigle_H_

template <class T>
class CSingleton
{
public:
	CSingleton(){};
	~CSingleton(){};
	static T* GetInstance()
	{
		if(g_Instace == NULL)
		{
			g_Instace = new T;
		}
		return g_Instace;
	}
private:
	static T* g_Instace;

};

template<class T> 
T* CSingleton<T>::g_Instace = NULL;
#endif