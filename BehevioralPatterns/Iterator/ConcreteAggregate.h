#ifndef _CONGRETEAGGREGATE_H__
#define _CONGRETEAGGREGATE_H__
#include "Aggregate.h"

class ConcreteAggregate :public Aggregate
{
public:
	enum { SIZE = 10 };
	ConcreteAggregate();
	~ConcreteAggregate();

	virtual int GetSize() override;

	virtual bool GetObject(int index, int& Obj) override;

	virtual Iterator* CreateIterator() override;

private:
	int Object[SIZE];
};
#endif