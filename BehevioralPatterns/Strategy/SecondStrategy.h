#ifndef _SECONDSTRATEGY_H__
#define _SECONDSTRATEGY_H__
#include "Strategy.h"

class SecondStrategy :public Strategy
{
public:
	SecondStrategy();
	~SecondStrategy();

	virtual void DoDisplay() override;

};
#endif