#ifndef _COMPONENT_H__
#define _COMPONENT_H__

class Component
{
public:
	virtual ~Component();
	virtual void Draw();
protected:
	Component();
};
#endif