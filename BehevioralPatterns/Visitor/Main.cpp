#include "VisitorA.h"
#include "VisitorB.h"
#include "ElementA.h"
#include "ElementB.h"


void main()
{
	Element* pEleA = new ElementA;
	Element* pEleB = new ElementB;
	Visitor* pVisA = new VisitorA;
	Visitor* pVisB = new VisitorB;

	pEleA->Accept(pVisA);
	pEleA->Accept(pVisB);
	pEleB->Accept(pVisA);
	pEleB->Accept(pVisB);

	if (pEleA)
		delete pEleA;
	if (pEleB)
		delete pEleB;
	if (pVisA)
		delete pVisA;
	if (pVisB)
		delete pVisB;
}