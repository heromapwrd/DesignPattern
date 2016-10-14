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
	cout << "Inner Room and Outer Room is (" << (dynamic_cast<Room*>(m_pInner))->GetNo() << "," <<
		(dynamic_cast<Room*>(m_pOuter))->GetNo() << ")" << endl;
}
