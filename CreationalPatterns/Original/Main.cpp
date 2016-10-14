#include "MazeGame.h"
#include<iostream>
using namespace std;
void main();

void main()
{
	cout << "Hello" << endl;
	MazeGame* mazegame = new MazeGame;
	mazegame->CreateMaze();
	cout << endl << "End" << endl;
}