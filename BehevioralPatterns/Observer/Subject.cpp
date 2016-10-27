#include "Subject.h"
#include "Observer.h"
#include <iostream>
using namespace std;

Subject::~Subject()
{
	cout << endl << "Subject Destructor!" << endl;
}

void Subject::Attach(Observer* o)
{
	if (o)
		m_listObserver.push_back(o);
}

void Subject::Detach(Observer* o)
{
	if (o)
		m_listObserver.remove(o);
}

void Subject::Notify()
{
	cout << endl << "Subject Notify!" << endl;
	list<Observer*>::iterator it = m_listObserver.begin();
	for (; it != m_listObserver.end(); it++)
	{
		(*it)->Update(this);
	}
}

Subject::Subject(State& state)
{
	m_State = state;
	cout << endl << "Subject Constructor!" << endl;
}

void Subject::SetState(State& state)
{
	m_State = state;
}

State Subject::GetState()
{
	return m_State;
}
