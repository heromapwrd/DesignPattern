#ifndef _MAZEGAME_H__
#define _MAZEGAME_H__
#include "Maze.h"
#include "MazeBuilder.h"

class MazeGame
{
public:
	MazeGame();
	Maze* CreateMaze(MazeBuilder* pBuilder);
	void Clear(MazeBuilder* pBuilder);
};

#endif