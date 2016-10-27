#include "ConcreteIterator.h"
#include "ConcreteAggregate.h"
#include <iostream>
using namespace std;
void main()
{
	Aggregate* pAggregate = new ConcreteAggregate;
	Iterator* pIterator = pAggregate->CreateIterator();
	for (pIterator->First(); !pIterator->IsDoon(); pIterator->Next())
		cout << endl << pIterator->GetItem() << endl;

	if (pIterator)
		delete pIterator;
	if (pAggregate)
		delete pAggregate;
}