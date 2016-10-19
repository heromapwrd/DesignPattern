#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;

void ConcreteFlyweight::Draw(Context* pContext)
{
	cout << endl << "ConcreteFlyweight Draw!" << endl;
	Flyweight::Draw(pContext);
}

ConcreteFlyweight::ConcreteFlyweight(const char* pStr) :Flyweight(pStr)
{
	cout << "ConcreteFlyweight Constructor!" << endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{
	cout << endl << "ConcreteFlyweight Destructor!" << endl;
}

