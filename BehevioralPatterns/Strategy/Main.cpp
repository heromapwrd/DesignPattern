#include "Context.h"
#include "FirstStrategy.h"
#include "SecondStrategy.h"

void main()
{
	Strategy* pS1 = new FirstStrategy;
	Strategy* pS2 = new SecondStrategy;
	Context* pContext1 = new Context(pS1);
	Context* pContext2 = new Context(pS2);
	pContext1->Display();
	pContext2->Display();

	if (pContext1)
		delete pContext1;
	if (pContext2)
		delete pContext2;
	if (pS1)
		delete pS1;
	if (pS2)
		delete pS2;
}