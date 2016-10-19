#ifndef _CONCRETEABSTRACTIMP_H__
#define _CONCRETEABSTRACTIMP_H__
#include "AbstractImp.h"

class ConcreteAbstractImp :public AbstractImp
{
public:
	ConcreteAbstractImp();
	~ConcreteAbstractImp();

	virtual void Operation() override;
};
#endif