#include "MazeGame.h"
#include<iostream>
using namespace std;
void main();

void main()
{
	cout << "Hello" << endl;
	MazeGame* mazegame = new MazeGame;
	if (!mazegame)
		return;
	MazeFactory* factory = new MazeFactory;
	if (!factory)
	{
		if (mazegame)
			delete mazegame;
		return;
	}
	mazegame->CreateMaze(factory);
	cout << endl << "End" << endl;
	mazegame->Clear(factory);
	if (mazegame)
		delete mazegame;
	if (factory)
		delete factory;
}