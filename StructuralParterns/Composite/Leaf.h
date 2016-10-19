#ifndef _LEAF_H__
#define _LEAF_H__
#include "Component.h"

class Leaf :public Component
{
public:
	Leaf();
	~Leaf();

	virtual void Draw() override;
};
#endif