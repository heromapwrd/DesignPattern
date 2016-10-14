#include "MazeGame.h"
#include<iostream>
using namespace std;

MazeGame::MazeGame()
{
	cout << endl << "Create MazeGame!" << endl;
}

Maze* MazeGame::CreateMaze(MazeBuilder* pBuilder)
{
	pBuilder->CreateMaze();
	pBuilder->CreateRoom(1);
	pBuilder->CreateRoom(2);
	pBuilder->CreateDoor(1, 2);
	return pBuilder->GetCurMaze();
}

void MazeGame::Clear(MazeBuilder* pBuilder)
{
	pBuilder->RemoveAll();
}

