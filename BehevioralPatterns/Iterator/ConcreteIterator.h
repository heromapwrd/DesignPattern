#ifndef _CONCRETEITERATOR_H__
#define _CONCRETEITERATOR_H__
#include "Iterator.h"
#include "Aggregate.h"

class ConcreteIterator :public Iterator
{
public:
	ConcreteIterator(Aggregate* pAggregate, int index = 0);
	~ConcreteIterator();

	virtual bool IsDoon() override;

	virtual void First() override;

	virtual void Next() override;

	virtual int GetItem() override;

private:
	Aggregate* m_pAggerate;
	int m_Index;
};
#endif