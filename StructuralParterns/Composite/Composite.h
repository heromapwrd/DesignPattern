#ifndef _COMPOSITE_H__
#define _COMPOSITE_H__
#include "Component.h"
#include<vector>
using namespace std;
class Composite :public Component
{
public:
	Composite();
	~Composite();

	virtual void Add(Component* pComponent) override;

	virtual void Remove(int index) override;

	virtual Component* GetChild(int index) override;

	virtual void Draw() override;

	virtual void RemoveAll() override;

private:
	vector<Component*> m_vecChildren;
};
#endif