#include "Flyweight.h"
#include <iostream>
using namespace std;

Flyweight::~Flyweight()
{
	if (m_pStrState)
		delete m_pStrState;
	cout << "Flyweight Destructor!" << endl;
}

const char* Flyweight::GetState()
{
	return m_pStrState;
}

void Flyweight::SetState(const char* pStr)
{
	int size = strlen(pStr) + 1;
	if (m_pStrState)
		delete m_pStrState;
	m_pStrState = new char[size];
	memset(m_pStrState, 0, size*sizeof(char));
	memcpy(m_pStrState, pStr, size - 1);
}

void Flyweight::Draw(Context* pContext)
{
	if (m_pStrState)
		cout << endl << "Flyweight Draw:" << m_pStrState << endl;
	else
		cout << endl << "Flyweight Draw!" << endl;
}

Flyweight::Flyweight(const char* pStr)
{
	m_pStrState = NULL;
	SetState(pStr);
	cout << endl << "Flyweight Constructor!" << endl;
}
