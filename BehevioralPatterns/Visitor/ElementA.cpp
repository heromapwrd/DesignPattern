#include "ElementA.h"
#include <iostream>
using namespace std;

void ElementA::Accept(Visitor* pVisitor)
{
	cout << endl << "ElementA Accept!" << endl;
	if (pVisitor)
		pVisitor->VisitElement(this);
}

ElementA::ElementA()
{
	cout << "ElementA Constructor!" << endl;
}

ElementA::~ElementA()
{
	cout << endl << "ElementA Destructor!" << endl;
}
