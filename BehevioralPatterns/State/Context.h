#ifndef _CONTEXT_H__
#define _CONTEXT_H__
#include "State.h"

class Context
{
public:
	Context(State* pState);
	~Context();
	void OperationInterface();
	void OperationChangeState();
protected:
	void ChangeState(State* pNextState);
private:
	State* m_pState;
	friend State;
};
#endif