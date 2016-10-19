#include "Facade.h"


void main()
{
	SysOne* pOne = new SysOne;
	SysTwo* pTwo = new SysTwo;
	Facade* pFacade = new Facade(pOne, pTwo);
	if (pFacade)
		pFacade->Operation();
	if (pFacade)
		delete pFacade;
	if (pTwo)
		delete pTwo;
	if (pOne)
		delete pOne;
}