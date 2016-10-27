#ifndef _ITERATOR_H__
#define _ITERATOR_H__

class Iterator
{
public:
	virtual ~Iterator();
	virtual bool IsDoon() = 0;
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual int GetItem() = 0;
protected:
	Iterator();
};
#endif