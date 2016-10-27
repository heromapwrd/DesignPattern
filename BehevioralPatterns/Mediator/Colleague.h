#ifndef _COLLEAGUE_H__
#define _COLLEAGUE_H__
#include <string>
using namespace std;
typedef string State;

class Mediator;
class Colleague
{
public:
	virtual ~Colleague();
	virtual void DoAction() = 0;
	void SetState(State& state);
	State GetState();
	virtual void PrintState();
protected:
	Colleague(Mediator* pMediator);
protected:
	Mediator* m_pMediator;
	State m_State;
};
#endif