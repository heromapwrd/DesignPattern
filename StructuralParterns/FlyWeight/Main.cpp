#include "FlyweightFactory.h"
#include "Context.h"

void main()
{
	Context* pContext = new Context;
	FlyweightFactory* pFactory = new FlyweightFactory;
	Flyweight* pF1 = pFactory->GetObject("Hello World");
	if (pF1)
		pF1->Draw(pContext);
	Flyweight* pF2 = pFactory->GetObject("ajsda");
	if (pF2)
		pF2->Draw(pContext);
	if (pContext)
		delete pContext;
	if (pFactory)
		delete pFactory;
}