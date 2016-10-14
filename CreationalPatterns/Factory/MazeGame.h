#ifndef _MAZEGAME_H__
#define _MAZEGAME_H__
#include "Maze.h"
#include "Room.h"
#include "Door.h"
#include "Wall.h"
#include<hash_map>
using namespace std;
class MazeGame
{
public:
	MazeGame();
	Maze* CreateMaze();
	void Clear();

protected:
	Maze* MakeMaze();
	Room* MakeRoom(int iNo);
	Door* MakeDoor(int iNo1, int iNo2);
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