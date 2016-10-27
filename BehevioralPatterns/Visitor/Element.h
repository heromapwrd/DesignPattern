#ifndef _ELEMENT_H__
#define _ELEMENT_H__
#include "Visitor.h"

class Element
{
public:
	virtual ~Element();
	virtual void Accept(Visitor* pVisitor) = 0;
protected:
	Element();
};
#endif