#include "MazeGame.h"
#include<iostream>
using namespace std;

MazeGame::MazeGame()
{
	cout << endl << "Create MazeGame!" << endl;
	m_mapSites.clear();
	m_pCurMaze = NULL;
}

Maze* MazeGame::CreateMaze()
{
	Maze* pMaze = MakeMaze();
	MakeRoom(1);
	MakeRoom(2);
	MakeDoor(1, 2);
	return pMaze;
}

void MazeGame::Clear()
{
	RemoveAll();
}

Maze* MazeGame::MakeMaze()
{
	Maze* pMaze = new Maze;
	m_pCurMaze = pMaze;
	AddSite(pMaze);
	return pMaze;
}

Room* MazeGame::MakeRoom(int iNo)
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
	return pRoom;
}

Door* MazeGame::MakeDoor(int iNo1, int iNo2)
{
	if (!m_pCurMaze)
		return NULL;

	Room* pRoomInner = m_pCurMaze->GetRoom(iNo1);
	Room* pRoomOuter = m_pCurMaze->GetRoom(iNo2);
	if (!pRoomInner || !pRoomOuter)
		return NULL;
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
	return pDoor;
}

void MazeGame::AddSite(MapSite* pSite)
{
	m_mapSites.insert(pair<int, MapSite*>(pSite->GetID(), pSite));
}

MapSite* MazeGame::Find(int iID)
{
	hash_map<int, MapSite*>::iterator it;
	it = m_mapSites.find(iID);
	if (it == m_mapSites.end())
		return NULL;
	return it->second;
}

void MazeGame::Remove(int iID)
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

void MazeGame::RemoveAll()
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

Orient MazeGame::GetDirection(Room* pInner, Room* pOuter)
{
	return ORIENT_EAST;
}

