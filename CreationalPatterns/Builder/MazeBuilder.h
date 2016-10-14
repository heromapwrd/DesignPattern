#ifndef _MAZEBUILDER_H__
#define _MAZEBUILDER_H__
#include "MapSite.h"
#include "Maze.h"
#include "Door.h"
#include "Room.h"
#include "Wall.h"
#include<hash_map>
#include<utility>
using namespace std;

class MazeBuilder
{
public:
	MazeBuilder();
	void CreateMaze();
	void CreateRoom(int iNo);
	void CreateDoor(int iNo1, int iNo2);
	Maze* GetCurMaze();
	void AddSite(MapSite* pSite);
	MapSite* Find(int iID);
	void Remove(int iID);
	void RemoveAll();
	Orient GetDirection(Room* pInner, Room* pOuter);
private:
	hash_map<int, MapSite*> m_mapSites;
	Maze* m_pCurMaze;
};

#endif