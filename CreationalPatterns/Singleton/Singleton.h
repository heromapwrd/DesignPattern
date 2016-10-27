#ifndef _SINGLETON_H__
#define _SINGLETON_H__

class Singleton
{
public:
	~Singleton();
	static Singleton* GetInstance();
private:
	Singleton();
	Singleton(const Singleton& singleton);
	Singleton& operator = (const Singleton& singleton);
private:
	static Singleton* _sInstance;
};
#endif