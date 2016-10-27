#ifndef _FIRSTSTRATEGY_H__
#define _FIRSTSTRATEGY_H__
#include "Strategy.h"

class FirstStrategy :public Strategy
{
public:
	FirstStrategy();
	~FirstStrategy();

	virtual void DoDisplay() override;
};
#endif