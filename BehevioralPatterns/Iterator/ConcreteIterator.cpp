#include "ConcreteIterator.h"
#include <iostream>
using namespace std;
bool ConcreteIterator::IsDoon()
{
	return (m_Index >= m_pAggerate->GetSize()) ? true : false;
}

void ConcreteIterator::First()
{
	m_Index = 0;
}

void ConcreteIterator::Next()
{
	m_Index++;
}

int ConcreteIterator::GetItem()
{
	int Obj = 0;
	m_pAggerate->GetObject(m_Index, Obj);
	return Obj;
}

ConcreteIterator::ConcreteIterator(Aggregate* pAggregate, int index /*= 0*/)
{
	m_pAggerate = pAggregate;
	m_Index = index;
	cout << "ConcreteIterator Constructor!" << endl;
}

ConcreteIterator::~ConcreteIterator()
{
	m_pAggerate = NULL;
	cout << endl << "ConcreteIterator Destructor!" << endl;
}

