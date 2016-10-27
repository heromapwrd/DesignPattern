#include "Originator.h"
#include "Memento.h"
#include <iostream>
using namespace std;

Originator::Originator()
{
	m_State = "";
	cout << endl << "Originator Constructor!" << endl;
}

Originator::Originator(State& state)
{
	m_State = state;
	cout << endl << "Originator Constructor!" << endl;
}

Memento* Originator::CreateMemento()
{
	return new Memento(m_State);
}

void Originator::SetState(State& state)
{
	m_State = state;
}

State Originator::GetState()
{
	return m_State;
}

void Originator::RestoreFromMemento(Memento* pMemento)
{
	if (pMemento)
		m_State = pMemento->GetState();
}

Originator::~Originator()
{
	cout << endl << "Originator Destructor!" << endl;
}

void Originator::PrintState()
{
	cout << endl << "State: " << m_State << endl;
}
