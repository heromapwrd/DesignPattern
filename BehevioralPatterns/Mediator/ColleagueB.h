#ifndef _COLLEAGUEB_H__
#define _COLLEAGUEB_H__
#include "Colleague.h"

class ColleagueB :public Colleague
{
public:
	ColleagueB(Mediator* pMediator);
	~ColleagueB();

	virtual void DoAction() override;

	virtual void PrintState() override;

};
#endif