#ifndef _COMPONENT_H__
#define _COMPONENT_H__

class Component
{
public:
	virtual ~Component();
	virtual void Add(Component* pComponent);
	virtual void Remove(int index);
	virtual Component* GetChild(int index);
	virtual void RemoveAll();
	virtual void Draw();
protected:
	Component();
};
#endif