#ifndef _MAZEFACTORY_H__
#define _MAZEFACTORY_H__
#include "Door.h"
#include "Maze.h"
#include "Room.h"
#include "Wall.h"
#include<utility>

class MazeFactory
{
public:
	MazeFactory();
	Maze* CreateMaze();
	Room* CreateRoom(int iNo);
	Door* CreateDoor(Room* pInner, Room* pOuter);
	Wall* CreateWall();
	void AddSite(MapSite* pSite);
	MapSite* Find(int iID);
	void Remove(int iID);
	void RemoveAll();
private:
	hash_map<int, MapSite*> m_mapSites;
};

#endif