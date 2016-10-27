#include "Mediator.h"
#include <iostream>
using namespace std;

Mediator::Mediator()
{
	cout << endl << "Mediator Constructor!" << endl;
}

Mediator::~Mediator()
{
	cout << endl << "Mediator Destructor!" << endl;
}

void Mediator::SetColleague(Colleague* pA, Colleague* pB)
{
	m_pColleagueA = pA;
	m_pColleagueB = pB;
}

void Mediator::DoActionFromAToB()
{
	cout << endl << "Mediator DoActionFromAToB!" << endl;
	m_pColleagueB->SetState(m_pColleagueA->GetState());
}

void Mediator::DoActionFromBToA()
{
	cout << endl << "Mediator DoActionFromBToA!" << endl;
	m_pColleagueA->SetState(m_pColleagueB->GetState());
}
