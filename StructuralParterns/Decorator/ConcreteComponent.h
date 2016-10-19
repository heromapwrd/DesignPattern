#ifndef _CONCRETECOMPONENT_H__
#define _CONCRETECOMPONENT_H__
#include "Component.h"

class ConcreteComponent :public Component
{
public:
	ConcreteComponent();
	~ConcreteComponent();
	virtual void Draw() override;


};
#endif