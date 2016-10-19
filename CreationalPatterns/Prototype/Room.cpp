#include "Room.h"
#include <stdlib.h>
#include<iostream>
#include<tchar.h>
using namespace std;
#define Name(x) #x

const char* strName[] =
{
	Name(ORIENT_EAST),
	Name(ORIENT_WEST),
	Name(ORIENT_SOUTH),
	Name(ORIENT_NORTH)
};
const char* GetName(Orient orient)
{
	return strName[orient];
}


int Room::sRoomCount = 0;
void Room::Enter()
{
	
}

Room::Room(int iNo)
{
	IncreaseCount();
	for (int i = 0; i < ORIENT_NUM; i++)
	{
		m_ppOrientSite[i] = NULL;
	}	
	m_iRoomNo = iNo;
	cout << endl<<"Create Room:" << endl;
	cout << "Room count is:" << sRoomCount << endl;
	cout << "Room No is:" << m_iRoomNo << endl;
}

Room::Room(const Room& room) :MapSite(*(dynamic_cast<MapSite*>(this)))
{
	IncreaseCount();
	for (int i = 0; i < ORIENT_NUM; i++)
	{
		m_ppOrientSite[i] = NULL;
	}
	m_iRoomNo = -1;
	cout << endl << "Copy Constructor Create Room:" << endl;
	cout << "Room Wait To Initial!" << endl;
}

void Room::SetOrient(Orient orient, MapSite* pSite)
{
	if (orient < 0 || orient >= ORIENT_NUM)
		return;
	MapSite* pOriginSite = m_ppOrientSite[orient];
	m_ppOrientSite[orient] = pSite;
	if (pOriginSite)
		delete pOriginSite;
	cout << "Set Orient: " << GetName(orient) << " "<< pSite->GetID() << endl;
}

Room::~Room()
{
	for (int i = 0; i < ORIENT_NUM; i++)
	{
		m_ppOrientSite[i] = NULL;
	}
}

int Room::GetNo()
{
	return m_iRoomNo;
}

void Room::IncreaseCount()
{
	sRoomCount++;
}

MapSite* Room::Clone()
{
	return new Room(*this);
}

bool Room::Init(int iNo)
{
	m_iRoomNo = iNo;
	cout << endl << "Room Init!" << endl;
	return true;
}

