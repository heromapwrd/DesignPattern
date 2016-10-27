#include "HandleA.h"
#include "HandleB.h"

void main()
{
	Handle* pHandleA = new HandleA();
	Handle* pHandleB = new HandleB();
	pHandleA->SetSuccesor(pHandleB);
	pHandleA->HandRequest();

	if (pHandleB)
		delete pHandleB;
	if (pHandleA)
		delete pHandleA;
}