#include "StateA.h"
#include <iostream>
using namespace std;

void StateA::OperationInterface(Context* pContext)
{
	cout << endl << "StateA OperationInterface!" << endl;
}

void StateA::OperationChangeState(Context* pContext)
{
	if (m_pStateMan)
	{
		State* pNextState = m_pStateMan->FindState(string("StateB"));
		if (!pNextState)
			return;
		ChangeState(pContext, pNextState);
	}
}

std::string StateA::GetName()
{
	return STRING(StateA);
}

StateA::StateA(StateManager* pMan) :State(pMan)
{
	cout << "StateA Constructor!" << endl;
}

StateA::~StateA()
{
	cout << endl << "StateA Destructor!" << endl;
}
