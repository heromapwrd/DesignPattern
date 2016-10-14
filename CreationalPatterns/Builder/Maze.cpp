#include "Maze.h"
#include <utility>
#include<iostream>
using namespace std;


Maze::Maze()
{
	m_mapRooms.clear();
	cout << endl << "Create Maze!" << endl;
}

void Maze::AddRoom(Room* pRoom)
{
	m_mapRooms.insert(pair<int,Room*>(pRoom->GetNo(), pRoom));
}

Room* Maze::GetRoom(int iNo)
{
	hash_map<int, Room*>::iterator it = m_mapRooms.find(iNo);
	if (it == m_mapRooms.end())
		return NULL;
	return it->second;
}
