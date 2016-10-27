#include "ColleagueB.h"
#include "Mediator.h"
#include <iostream>
using namespace std;

void ColleagueB::DoAction()
{
	if (m_pMediator)
		m_pMediator->DoActionFromBToA();
}

ColleagueB::ColleagueB(Mediator* pMediator) :Colleague(pMediator)
{
	cout << "ColleagueB Constructor!" << endl;
}

ColleagueB::~ColleagueB()
{
	cout << endl << "ColleagueB Destructor!" << endl;
}

void ColleagueB::PrintState()
{
	cout << "ColleagueB:";
	Colleague::PrintState();
}
