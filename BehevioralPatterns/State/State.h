#ifndef _STATE_H__
#define _STATE_H__
#include "StateManager.h"
#include <string>
using namespace std;

#define STRING(x) #x

class Context;
class State
{
public:
	virtual ~State();
	virtual void OperationInterface(Context* pContext);
	virtual void OperationChangeState(Context* pContext);
	virtual string GetName();
protected:
	State(StateManager* pMan);
	void ChangeState(Context* pContext, State* pNextState);
protected:
	StateManager* m_pStateMan;
};
#endif