#ifndef _CONCRETEABSTRACT_H__
#define _CONCRETEABSTRACT_H__
#include "Abstract.h"
#include "AbstractImp.h"

class ConcreteAbstract :public Abstract
{
public:
	ConcreteAbstract(AbstractImp* pImp);
	~ConcreteAbstract();
	virtual void Operation();
private:
	AbstractImp* m_pImp;
};
#endif