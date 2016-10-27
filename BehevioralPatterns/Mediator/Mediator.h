#ifndef _MEDIATOR_H__
#define _MEDIATOR_H__
#include "Colleague.h"

class Mediator
{
public:
	Mediator();
	~Mediator();
	void SetColleague(Colleague* pA, Colleague* pB);
	void DoActionFromAToB();
	void DoActionFromBToA();
protected:
private:
	Colleague* m_pColleagueA;
	Colleague* m_pColleagueB;
};
#endif