#ifndef _COLLEAGUEA_H__
#define _COLLEAGUEA_H__
#include "Colleague.h"

class ColleagueA :public Colleague
{
public:
	ColleagueA(Mediator* pMediator);
	~ColleagueA();

	virtual void DoAction() override;

	virtual void PrintState() override;

};
#endif