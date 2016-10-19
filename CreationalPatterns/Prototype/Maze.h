#ifndef _MAZE_H__
#define _MAZE_H__
#include "Room.h"
#include<hash_map>
using std::hash_map;

class Maze:public MapSite
{
public:
	Maze();
	Maze(const Maze& maze);
	void AddRoom(Room* pRoom);
	Room* GetRoom(int iNo);
	virtual bool Init();
	virtual MapSite* Clone() override;
private:
	hash_map<int, Room*> m_mapRooms;
};
#endif 