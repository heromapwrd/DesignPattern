#include "Singleton.h"
#include <iostream>
using namespace std;

Singleton* Singleton::_sInstance = NULL;
Singleton::~Singleton()
{
	_sInstance = NULL;
	cout << endl << "Singleton Destructor!" << endl;
}

Singleton* Singleton::GetInstance()
{
	if (_sInstance == NULL)
	{
		_sInstance = new Singleton;
	}
	return _sInstance;
}

Singleton::Singleton()
{
	cout << endl << "Singleton Constructor!" << endl;
}

Singleton::Singleton(const Singleton& singleton)
{

}

Singleton& Singleton::operator=(const Singleton& singleton)
{
	return *this;
}
