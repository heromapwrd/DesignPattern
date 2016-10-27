#ifndef _SUBJECT_H__
#define _SUBJECT_H__
#include <list>
#include <string>
using namespace std;
typedef string State;
class Observer;
class Subject
{
public:
	Subject(State& state);
	virtual ~Subject();
	void Attach(Observer* o);
	void Detach(Observer* o);
	void Notify();
	void SetState(State& state);
	State GetState();
private:
	list<Observer*> m_listObserver;
	State m_State;
};
#endif