#include "MazeBuilder.h"

MazeBuilder::MazeBuilder()
{
	m_mapSites.clear();
	m_pCurMaze = NULL;
}

void MazeBuilder::CreateMaze()
{
	Maze* pMaze = new Maze;
	AddSite(pMaze);
	m_pCurMaze = pMaze;
}

void MazeBuilder::CreateRoom(int iNo)
{
	Room* pRoom = new Room(iNo);
	AddSite(pRoom);

	Wall* pWall = new Wall;
	pRoom->SetOrient(ORIENT_EAST, pWall);
	AddSite(pWall);

	pWall = new Wall;
	pRoom->SetOrient(ORIENT_WEST, pWall);
	AddSite(pWall);

	pWall = new Wall;
	pRoom->SetOrient(ORIENT_SOUTH, pWall);
	AddSite(pWall);

	pWall = new Wall;
	pRoom->SetOrient(ORIENT_NORTH, pWall);
	AddSite(pWall);
}

void MazeBuilder::CreateDoor(int iNo1, int iNo2)
{
	if (!m_pCurMaze)
		return;
	
	Room* pRoomInner = m_pCurMaze->GetRoom(iNo1);
	Room* pRoomOuter = m_pCurMaze->GetRoom(iNo2);
	if (!pRoomInner || !pRoomOuter)
		return;
	Door* pDoor = new Door(pRoomInner, pRoomOuter);
	AddSite(pDoor);
	MapSite* pSite1 = pRoomInner->SetOrient(ORIENT_EAST, pDoor);
	MapSite* pSite2 = pRoomOuter->SetOrient(ORIENT_WEST, pDoor);
	if (pSite1)
	{
		Remove(pSite1->GetID());
	}

	if (pSite2)
	{
		Remove(pSite2->GetID());
	}
}

Maze* MazeBuilder::GetCurMaze()
{
	return m_pCurMaze;
}

void MazeBuilder::AddSite(MapSite* pSite)
{
	m_mapSites.insert(pair<int, MapSite*>(pSite->GetID(), pSite));
}

MapSite* MazeBuilder::Find(int iID)
{
	hash_map<int, MapSite*>::iterator it;
	it = m_mapSites.find(iID);
	if (it == m_mapSites.end())
		return NULL;
	return it->second;
}

void MazeBuilder::Remove(int iID)
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

void MazeBuilder::RemoveAll()
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

Orient MazeBuilder::GetDirection(Room* pInner, Room* pOuter)
{
	return ORIENT_EAST;
}
