#include "StateA.h"
#include "StateB.h"
#include "StateManager.h"
#include "Context.h"

void main()
{
	StateManager* pMan = new StateManager;
	pMan->AddState(new StateA(pMan));
	pMan->AddState(new StateB(pMan));
	Context* pCon = new Context(pMan->FindState(string("StateA")));
	for (int i = 0; i < 10; i++)
	{
		pCon->OperationInterface();
		pCon->OperationChangeState();
	}
	if (pCon)
		delete pCon;
	if (pMan)
		delete pMan;
}