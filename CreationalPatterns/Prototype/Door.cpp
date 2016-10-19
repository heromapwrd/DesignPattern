#include "Door.h"
#include<iostream>
using namespace std;

void Door::Enter()
{
	
}

Door::Door(Room* pInner, Room* pOuter)
{
	m_pInner = pInner;
	m_pOuter = pOuter;
	cout <<endl<< "Create Door:" << endl;
	cout << "Inner Room and Outer Room is (" << (pInner ? pInner->GetNo():-1) << "," <<
		(pOuter ? pOuter->GetNo() : -1) << ")" << endl;
}

Door::Door(const Door& door) :MapSite(*(dynamic_cast<MapSite*>(this)))
{
	cout << endl << "Copy Constructor Create Door:" << endl;
	cout << "Door Wait To Initial!" << endl;
}

bool Door::Init(Room* pInner, Room* pOuter)
{
	m_pInner = pInner;
	m_pOuter = pOuter;
	cout << endl << "Door Init!" << endl;
	return true;
}

MapSite* Door::Clone()
{
	return new Door(*this);
}
