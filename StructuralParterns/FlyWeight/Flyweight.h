#ifndef _FLYWEIGHT_H__
#define _FLYWEIGHT_H__
#include "Context.h"

class Flyweight
{
public:
	virtual ~Flyweight();
	virtual const char* GetState();
	virtual void SetState(const char* pStr);
	virtual void Draw(Context* pContext);
protected:
	Flyweight(const char* pStr);
private:
	char* m_pStrState;
};
#endif