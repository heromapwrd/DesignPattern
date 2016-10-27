#include "VisitorA.h"
#include <iostream>
using namespace std;

void VisitorA::VisitElement(ElementA* pEle)
{
	cout << endl << "VisitorA Visit ElementA" << endl;
}

void VisitorA::VisitElement(ElementB* pEle)
{
	cout << endl << "VisitorA Visit ElementB" << endl;
}

VisitorA::VisitorA()
{
	cout << "VisitorA Constructor!" << endl;
}

VisitorA::~VisitorA()
{
	cout << endl << "VisitorA Destructor!" << endl;
}
