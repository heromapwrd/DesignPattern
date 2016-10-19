#ifndef _CONCRETEDECORATOR_H__
#define _CONCRETEDECORATOR_H__
#include "Decorator.h"

class ConcreteDecorator :public Decorator
{
public:
	ConcreteDecorator(Component* pComponent);
	~ConcreteDecorator();

	virtual void Draw() override;
private:
	void DrawBound();
};
#endif