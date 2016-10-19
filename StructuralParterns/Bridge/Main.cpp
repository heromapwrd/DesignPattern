#include "ConcreteAbstract.h"
#include "ConcreteAbstractImp.h"

void main()
{
	AbstractImp* pAbstractImp = new ConcreteAbstractImp;
	Abstract* pAbstract = new ConcreteAbstract(pAbstractImp);
	if (pAbstract)
		pAbstract->Operation();
	if (pAbstract)
		delete pAbstract;
	if (pAbstractImp)
		delete pAbstractImp;
}