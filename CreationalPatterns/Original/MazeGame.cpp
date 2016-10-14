#include "MazeGame.h"
#include "Room.h"
#include "Door.h"
#include "Wall.h"
#include<iostream>
using namespace std;

MazeGame::MazeGame()
{
	cout << endl << "Create MazeGame!" << endl;
}

Maze* MazeGame::CreateMaze()
{
	Maze* aMaze = new Maze();
	Room* room1 = new Room(1);
	Room* room2 = new Room(2);
	aMaze->AddRoom(room1);
	aMaze->AddRoom(room2);

	Door* aDoor = new Door(room1, room2);
	room1->SetOrient(ORIENT_EAST, new Wall);
	room1->SetOrient(ORIENT_WEST, new Wall);
	room1->SetOrient(ORIENT_SOUTH, aDoor);
	room1->SetOrient(ORIENT_NORTH, new Wall);

	room2->SetOrient(ORIENT_EAST, new Wall);
	room2->SetOrient(ORIENT_WEST, new Wall);
	room2->SetOrient(ORIENT_SOUTH, new Wall);
	room2->SetOrient(ORIENT_NORTH, aDoor);

	return aMaze;
}

