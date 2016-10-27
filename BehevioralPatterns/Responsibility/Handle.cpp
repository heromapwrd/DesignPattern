#include "Handle.h"
#include <iostream>
using namespace std;

void Handle::HandRequest()
{
	if (m_pSuccesor)
		m_pSuccesor->HandRequest();
	else
		cout << endl << "Handle HandRequest!" << endl;
}

Handle::Handle()
{
	m_pSuccesor = NULL;
	cout << endl << "Handle Constructor!" << endl;
}

Handle::~Handle()
{
	m_pSuccesor = NULL;
	cout <<  "Handle Destructor!" << endl;
}

void Handle::SetSuccesor(Handle* pSuccessor)
{
	m_pSuccesor = pSuccessor;
}

Handle* Handle::GetSuccesor()
{
	return m_pSuccesor;
}
