#include "Context.h"
#include <iostream>
using namespace std;

Context::Context(State* pState)
{
	m_pState = pState;
	cout << endl << "Context Constructor!" << endl;
}

void Context::OperationInterface()
{
	if (m_pState)
		m_pState->OperationInterface(this);
}

void Context::OperationChangeState()
{
	if (m_pState)
		m_pState->OperationChangeState(this);
}

void Context::ChangeState(State* pNextState)
{
	if (!pNextState)
		return;
	m_pState = pNextState;
}

Context::~Context()
{
	cout << endl << "Context Destructor!" << endl;
}
