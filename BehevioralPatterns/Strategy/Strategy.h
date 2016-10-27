#ifndef _STRATEGY_H__
#define _STRATEGY_H__

class Strategy
{
public:
	virtual ~Strategy();
	virtual void DoDisplay();
protected:
	Strategy();
};
#endif