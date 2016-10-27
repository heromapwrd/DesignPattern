#ifndef _STATEB_H__
#define _STATEB_H__
#include "State.h"

class StateB:public State
{
public:
	StateB(StateManager* pMan);
	~StateB();

	virtual void OperationInterface(Context* pContext) override;

	virtual void OperationChangeState(Context* pContext) override;

	virtual string GetName() override;

};
#endif