#include "Memento.h"
#include <iostream>
using namespace std;

Memento::Memento()
{
	cout << endl << "Memento Constructor!" << endl;
}

Memento::Memento(State& state)
{
	m_State = state;
	cout << endl << "Memento Constructor!" << endl;
}

void Memento::SetState(State& state)
{
	m_State = state;
}

State Memento::GetState()
{
	return m_State;
}

Memento::~Memento()
{
	cout << endl << "Memento Dstructor!" << endl;
}
