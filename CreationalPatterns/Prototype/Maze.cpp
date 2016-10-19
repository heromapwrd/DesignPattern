#include "Maze.h"
#include <utility>
#include<iostream>
using namespace std;


Maze::Maze()
{
	m_mapRooms.clear();
	cout << endl << "Create Maze!" << endl;
}

Maze::Maze(const Maze& maze) :MapSite(*(dynamic_cast<MapSite*>(this)))
{
	m_mapRooms.clear();
	cout << endl << "Copy Contrustor Create Maze!" << endl;
}

void Maze::AddRoom(Room* pRoom)
{
	if (!pRoom)
		return;
	m_mapRooms.insert(pair<int,Room*>(pRoom->GetNo(), pRoom));
}

Room* Maze::GetRoom(int iNo)
{
	hash_map<int, Room*>::iterator it = m_mapRooms.find(iNo);
	if (it == m_mapRooms.end())
		return NULL;
	return it->second;
}

MapSite* Maze::Clone()
{
	return new Maze(*this);
}

bool Maze::Init()
{
	cout << endl << "Maze Init!" << endl;
	return true;
}
