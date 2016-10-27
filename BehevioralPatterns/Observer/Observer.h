#ifndef _OBSERVER_H__
#define _OBSERVER_H__
#include "Subject.h"

class Observer
{
public:
	Observer(Subject* pSubject);
	virtual ~Observer();
	void Update(Subject* pSubject);
	void SetState(State& state);
	State GetState();
private:
	Subject* m_pSubject;
	State m_State;
};
#endif