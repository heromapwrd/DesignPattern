#include "Colleague.h"
#include <iostream>
using namespace std;

Colleague::~Colleague()
{
	cout << "Colleague Destructor!" << endl;
}

void Colleague::SetState(State& state)
{
	m_State = state;
}

State Colleague::GetState()
{
	return m_State;
}

Colleague::Colleague(Mediator* pMediator)
{
	m_pMediator = pMediator;
	cout << endl << "Colleague Constructor!" << endl;
}

void Colleague::PrintState()
{
	cout << endl << m_State << endl;
}
