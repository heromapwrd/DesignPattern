#ifndef _VISITORA_H__
#define _VISITORA_H__
#include "Visitor.h"

class VisitorA :public Visitor
{
public:
	VisitorA();
	~VisitorA();

	virtual void VisitElement(ElementA* pEle) override;

	virtual void VisitElement(ElementB* pEle) override;

};
#endif