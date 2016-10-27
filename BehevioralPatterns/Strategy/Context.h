#ifndef _CONTEXT_H__
#define _CONTEXT_H__
#include "Strategy.h"

class Context
{
public:
	Context(Strategy* pStrategy);
	virtual ~Context();
	void SetFocus();
	void ResetFocus();
	void Display();
private:
	Strategy* m_pStrategy;
};
#endif