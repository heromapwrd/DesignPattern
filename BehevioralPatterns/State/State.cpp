#include "State.h"
#include "Context.h"
#include <iostream>
using namespace std;

State::~State()
{
	m_pStateMan = NULL;
	cout << "State Destructor!" << endl;
}

void State::OperationInterface(Context* pContext)
{
	cout << endl << "State OperationInterface!" << endl;
}

void State::OperationChangeState(Context* pContext)
{
	cout << endl << "State OperationChangeState!" << endl;
}

State::State(StateManager* pMan)
{
	m_pStateMan = pMan;
	cout << endl << "State Constructor!" << endl;
}

void State::ChangeState(Context* pContext, State* pNextState)
{
	cout << endl << "Change State Form " << GetName() << " to " << pNextState->GetName() << endl;
	pContext->ChangeState(pNextState);
}

string State::GetName()
{
	string name(STRING(State));
	return name;
}
