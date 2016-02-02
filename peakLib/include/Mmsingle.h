#ifndef _Manm_Sigle_H_
#define _Manm_Sigle_H_

template <class T>
class CSingleInstace
{
public:
	CSingleInstace(){};
	~CSingleInstace(){};
	T* GetInstance()
	{
		if(g_Instace == NULL)
		{
			g_Instace = new T;
		}
		return g_Instace;
	}
private:
	static T* g_Instace;

}

template<class T> 
CSingleInstace<T> CSingleInstace::g_Instance = NULL;
#endif