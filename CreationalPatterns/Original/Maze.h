#ifndef _MAZE_H__
#define _MAZE_H__
#include "Room.h"
#include<hash_map>
using std::hash_map;

class Maze
{
public:
	Maze();
	void AddRoom(Room* pRoom);
	Room* GetRoom(int iNo);
protected:
private:
	hash_map<int, Room*> m_mapRooms;
};
#endif 