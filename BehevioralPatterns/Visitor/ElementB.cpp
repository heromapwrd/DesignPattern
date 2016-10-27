#include "ElementB.h"
#include <iostream>
using namespace std;

void ElementB::Accept(Visitor* pVisitor)
{
	cout << endl << "ElementB Accept!" << endl;
	if (pVisitor)
		pVisitor->VisitElement(this);
}

ElementB::ElementB()
{
	cout << "ElementB Constructor!" << endl;
}

ElementB::~ElementB()
{
	cout << endl << "ElementB Destructor!" << endl;
}
