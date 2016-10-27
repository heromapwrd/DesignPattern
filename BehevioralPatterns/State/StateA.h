#ifndef _STATEA_H__
#define _STATEA_H__
#include "State.h"

class StateA :public State
{
public:
	StateA(StateManager* pMan);
	~StateA();

	virtual void OperationInterface(Context* pContext) override;

	virtual void OperationChangeState(Context* pContext) override;

	virtual string GetName() override;

};
#endif