#ifndef _VISITOR_H__
#define _VISITOR_H__

class Element;
class ElementA;
class ElementB;
class Visitor
{
public:
	virtual ~Visitor();
	virtual void VisitElement(ElementA* pEle) = 0;
	virtual void VisitElement(ElementB* pEle) = 0;
protected:
	Visitor();
};
#endif