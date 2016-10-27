#include "Singleton.h"
#include <iostream>
using namespace std;

void main()
{
	Singleton* pS1 = Singleton::GetInstance();
	Singleton* pS2 = Singleton::GetInstance();
	cout << endl << "pS1:" << pS1 << endl;
	cout << endl << "pS2:" << pS2 << endl;

	if (pS1)
		delete pS1;
	
	Singleton* pS3 = Singleton::GetInstance();
	cout << endl << "pS1:" << pS1 << endl;
	cout << endl << "pS2:" << pS2 << endl;
	cout << endl << "pS3:" << pS3 << endl;

	if (pS3)
		delete pS3;
}