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
	mazegame->CreateMaze();
	cout << endl << "End" << endl;
	mazegame->Clear();
	if (mazegame)
		delete mazegame;
}