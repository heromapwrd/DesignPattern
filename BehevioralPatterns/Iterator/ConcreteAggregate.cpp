#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"
#include <iostream>
using namespace std;

int ConcreteAggregate::GetSize()
{
	return SIZE;
}

bool ConcreteAggregate::GetObject(int index, int& Obj)
{
	Obj = 0;
	if (index < 0 || index >= SIZE)
		return false;
	Obj = Object[index];
	return true;
}

Iterator* ConcreteAggregate::CreateIterator()
{
	return new ConcreteIterator(this);
}

ConcreteAggregate::ConcreteAggregate()
{
	cout << "ConcreteAggregate Constructor!" << endl;
	for (int i = 0; i < SIZE; i++)
		Object[i] = i;
}

ConcreteAggregate::~ConcreteAggregate()
{
	cout << endl << "ConcreteAggregate Destructor!" << endl;

}
