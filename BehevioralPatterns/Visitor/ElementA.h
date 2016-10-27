#ifndef _ELEMENTA_H__
#define _ELEMENTA_H__
#include "Element.h"

class ElementA :public Element
{
public:
	ElementA();
	~ElementA();

	virtual void Accept(Visitor* pVisitor) override;

};
#endif