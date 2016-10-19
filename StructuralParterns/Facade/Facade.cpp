#include "Facade.h"
#include <iostream>
using namespace std;

Facade::Facade(SysOne* pSysOne, SysTwo* pSysTwo)
{
	m_pSysOne = pSysOne;
	m_pSysTwo = pSysTwo;
	cout << endl << "Create SysOne!" << endl;
}

void Facade::Operation()
{
	cout << endl;
	if (m_pSysOne)
		m_pSysOne->Operation();
	if (m_pSysTwo)
		m_pSysTwo->Operation();
	cout << "Facade Operation!" << endl;
}
