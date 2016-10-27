#include "Observer.h"
#include <iostream>
using namespace std;

Observer::~Observer()
{
	m_pSubject->Detach(this);
	cout << "Observer Destructor!" << endl;
}

void Observer::Update(Subject* pSubject)
{
	m_State = pSubject->GetState();
	cout << endl << "Observer Update!" << endl;
	cout << endl << "Observer:" << m_State << endl;
}

Observer::Observer(Subject* pSubject)
{
	m_pSubject = pSubject;
	m_pSubject->Attach(this);
	cout << endl << "Observer Constructor!" << endl;
}

void Observer::SetState(State& state)
{
	m_State = state;
}

State Observer::GetState()
{
	return m_State;
}
