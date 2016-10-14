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
	MazeBuilder* pBuilder = new MazeBuilder;
	if (!pBuilder)
	{
		if (mazegame)
			delete mazegame;
		return;
	}
	mazegame->CreateMaze(pBuilder);
	cout << endl << "End" << endl;
	mazegame->Clear(pBuilder);
	if (mazegame)
		delete mazegame;
	if (pBuilder)
		delete pBuilder;
}