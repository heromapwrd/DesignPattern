#include "ConcreteAbstract.h"
#include<iostream>
using namespace std;

ConcreteAbstract::ConcreteAbstract(AbstractImp* pImp)
{
	m_pImp = pImp;
	cout << "ConcreteAbstract Constructor!" << endl;
}

ConcreteAbstract::~ConcreteAbstract()
{
	m_pImp = NULL;
	cout << endl << "ConcreteAbstract Destructor!" << endl;
}

void ConcreteAbstract::Operation()
{
	cout << endl << "ConcreteAbstract Operation!" << endl;
	if (m_pImp)
		m_pImp->Operation();
}
