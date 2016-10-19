#ifndef _CONCRETEFLYWEIGHT_H__
#define _CONCRETEFLYWEIGHT_H__
#include "Flyweight.h"

class ConcreteFlyweight :public Flyweight
{
public:
	ConcreteFlyweight(const char* pStr);
	~ConcreteFlyweight();

	virtual void Draw(Context* pContext) override;
};
#endif