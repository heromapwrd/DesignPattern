#include "VisitorB.h"
#include <iostream>
using namespace std;

void VisitorB::VisitElement(ElementA* pEle)
{
	cout << endl << "VisitorB Visit ElementA" << endl;
}

void VisitorB::VisitElement(ElementB* pEle)
{
	cout << endl << "VisitorB Visit ElementB" << endl;
}

VisitorB::VisitorB()
{
	cout << "VisitorB Constructor!" << endl;
}

VisitorB::~VisitorB()
{
	cout << endl << "VisitorB Destructor!" << endl;
}
