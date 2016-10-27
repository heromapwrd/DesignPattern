#ifndef _AGGREGATE_H__
#define _AGGREGATE_H__
#include "Iterator.h"
class Aggregate
{
public:
	virtual ~Aggregate();
	virtual int GetSize() = 0;
	virtual bool GetObject(int index, int& Obj) = 0;
	virtual Iterator* CreateIterator() = 0;
protected:
	Aggregate();
};
#endif