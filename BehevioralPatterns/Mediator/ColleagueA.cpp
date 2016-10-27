#include "ColleagueA.h"
#include "Mediator.h"
#include <iostream>
using namespace std;

void ColleagueA::DoAction()
{
	if (m_pMediator)
		m_pMediator->DoActionFromAToB();
}

ColleagueA::ColleagueA(Mediator* pMediator) :Colleague(pMediator)
{
	cout << "ColleagueA Constructor!" << endl;
}

ColleagueA::~ColleagueA()
{
	cout << endl << "ColleagueA Destructor!" << endl;
}

void ColleagueA::PrintState()
{
	cout << "ColleagueA:";
	Colleague::PrintState();
}
