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
	virtual Maze* CreateMaze();
	virtual Room* CreateRoom(int iNo);
	virtual Door* CreateDoor(Room* pInner, Room* pOuter);
	virtual Wall* CreateWall();
	virtual void AddSite(MapSite* pSite);
	virtual MapSite* Find(int iID);
	virtual void Remove(int iID);
	virtual void RemoveAll();
private:
	hash_map<int, MapSite*> m_mapSites;
};

#endif