#ifndef _MAZEGAME_H__
#define _MAZEGAME_H__
#include "Maze.h"
#include "MazeFactory.h"

class MazeGame
{
public:
	MazeGame();
	Maze* CreateMaze(MazeFactory* pMazeFactory);
	void Clear(MazeFactory* pMazeFactory);
};

#endif