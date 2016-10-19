#include "Proxy.h"
#include<iostream>
using namespace std;

void Proxy::Request()
{
	cout << endl << "Proxy Request!" << endl;
	if (m_pSubject)
		m_pSubject->Request();
}

Proxy::Proxy(Subject* pSub) :m_pSubject(pSub)
{
	cout << "Proxy Constructor!" << endl;
}

Proxy::~Proxy()
{
	m_pSubject = NULL;
	cout << "Proxy Destructor!" << endl;
}
