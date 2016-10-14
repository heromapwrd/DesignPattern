#include "MazeFactory.h"
using namespace std;
Maze* MazeFactory::CreateMaze()
{
	Maze* pMaze = new Maze;
	AddSite(pMaze);
	return pMaze;
}

Room* MazeFactory::CreateRoom(int iNo)
{
	Room* pRoom = new Room(iNo);
	AddSite(pRoom);
	return pRoom;
}

Door* MazeFactory::CreateDoor(Room* pInner, Room* pOuter)
{
	Door* pDoor = new Door(pInner, pOuter);
	AddSite(pDoor);
	return pDoor;
}

Wall* MazeFactory::CreateWall()
{
	Wall* pWall = new Wall;
	AddSite(pWall);
	return pWall;
}

void MazeFactory::AddSite(MapSite* pSite)
{
	m_mapSites.insert(pair<int, MapSite*>(pSite->GetID(), pSite));
}

MapSite* MazeFactory::Find(int iID)
{
	hash_map<int, MapSite*>::iterator it;
	it = m_mapSites.find(iID);
	return (it == m_mapSites.end()) ? it->second : NULL;
}

void MazeFactory::Remove(int iID)
{
	hash_map<int, MapSite*>::iterator it;
	it = m_mapSites.find(iID);
	if (it == m_mapSites.end())
		return;
	MapSite* pSite = it->second;
	it->second = NULL;
	if (pSite)
		delete pSite;
	m_mapSites.erase(it);
}

void MazeFactory::RemoveAll()
{
	hash_map<int, MapSite*>::iterator it;
	for (it = m_mapSites.begin(); it != m_mapSites.end(); ++it)
	{
		MapSite* pSite = it->second;
		it->second = NULL;
		if (pSite)
			delete pSite;
	}
	m_mapSites.clear();
}

MazeFactory::MazeFactory()
{
	m_mapSites.clear();
}
