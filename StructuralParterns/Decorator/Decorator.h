#ifndef _DECORATOR_H__
#define _DECORATOR_H__
#include "Component.h"

class Decorator :public Component
{
public:
	Decorator(Component* pComponent);
	virtual ~Decorator();

	virtual void Draw() override;

protected:
	Component* m_pComponent;
};
#endif