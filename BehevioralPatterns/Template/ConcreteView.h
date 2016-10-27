#ifndef _CONCRETEVIEW_H__
#define _CONCRETEVIEW_H__
#include "View.h"

class ConcreteView :public View
{
public:
	ConcreteView();
	~ConcreteView();

	virtual void DoDisplay() override;
};
#endif