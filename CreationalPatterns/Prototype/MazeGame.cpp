#include "MazeGame.h"
#include<iostream>
using namespace std;

MazeGame::MazeGame()
{
	cout << endl << "Create MazeGame!" << endl;
}

Maze* MazeGame::CreateMaze(MazeFactory* pMazeFactory)
{
	Maze* aMaze = pMazeFactory->CreateMaze();
	Room* room1 = pMazeFactory->CreateRoom(1);
	Room* room2 = pMazeFactory->CreateRoom(2);
	aMaze->AddRoom(room1);
	aMaze->AddRoom(room2);

	Door* aDoor = pMazeFactory->CreateDoor(room1, room2);
	room1->SetOrient(ORIENT_EAST, pMazeFactory->CreateWall());
	room1->SetOrient(ORIENT_WEST, pMazeFactory->CreateWall());
	room1->SetOrient(ORIENT_SOUTH, aDoor);
	room1->SetOrient(ORIENT_NORTH, pMazeFactory->CreateWall());

	room2->SetOrient(ORIENT_EAST, pMazeFactory->CreateWall());
	room2->SetOrient(ORIENT_WEST, pMazeFactory->CreateWall());
	room2->SetOrient(ORIENT_SOUTH, pMazeFactory->CreateWall());
	room2->SetOrient(ORIENT_NORTH, aDoor);

	return aMaze;
}

void MazeGame::Clear(MazeFactory* pMazeFactory)
{
	pMazeFactory->RemoveAll();
}

