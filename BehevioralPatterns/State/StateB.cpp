#include "StateB.h"
#include <iostream>
using namespace std;

void StateB::OperationInterface(Context* pContext)
{
	cout << endl << "StateB OperationInterface!" << endl;
}

void StateB::OperationChangeState(Context* pContext)
{
	if (m_pStateMan)
	{
		State* pNextState = m_pStateMan->FindState(string("StateA"));
		if (!pNextState)
			return;
		ChangeState(pContext, pNextState);
	}
}

std::string StateB::GetName()
{
	return STRING(StateB);
}

StateB::StateB(StateManager* pMan) :State(pMan)
{
	cout << "StateB Constructor!" << endl;
}

StateB::~StateB()
{
	cout << endl << "StateB Destructor!" << endl;
}
