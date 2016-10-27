#ifndef _ELEMENTB_H__
#define _ELEMENTB_H__
#include "Element.h"

class ElementB :public Element
{
public:
	ElementB();
	~ElementB();

	virtual void Accept(Visitor* pVisitor) override;

};
#endif