#ifndef _VISITORB_H__
#define _VISITORB_H__
#include "Visitor.h"

class VisitorB :public Visitor
{
public:
	VisitorB();
	~VisitorB();

	virtual void VisitElement(ElementA* pEle) override;

	virtual void VisitElement(ElementB* pEle) override;

};
#endif