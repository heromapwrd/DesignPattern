#include "ColleagueA.h"
#include "ColleagueB.h"
#include "Mediator.h"

void main()
{
	Mediator* pMediator = new Mediator;
	Colleague* pA = new ColleagueA(pMediator);
	Colleague* pB = new ColleagueB(pMediator);
	pMediator->SetColleague(pA, pB);
	pA->SetState(State("Old"));
	pB->SetState(State("New"));
	pA->PrintState();
	pB->PrintState();
	pA->DoAction();
	pA->PrintState();
	pB->PrintState();
	pB->SetState(State("New"));
	pB->DoAction();
	pA->PrintState();
	pB->PrintState();
	if (pA)
		delete pA;
	if (pB)
		delete pB;
	if (pMediator)
		delete pMediator;
}