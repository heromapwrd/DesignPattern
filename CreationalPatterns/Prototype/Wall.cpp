#include "Wall.h"
#include<iostream>
using namespace std;
void Wall::Enter()
{
	cout << "error,fail to enter wall!" << endl;
}

Wall::Wall()
{
	cout << endl << "Create Wall!" << endl;
}

Wall::Wall(const Wall& wall) :MapSite(*(dynamic_cast<MapSite*>(this)))
{
	cout << endl << "Copy Constructor Create Wall:" << endl;
	cout << "Wall Wait To Initial!" << endl;
}

bool Wall::Init()
{
	cout <<endl<< "Wall Init!" << endl;
	return true;
}

MapSite* Wall::Clone()
{
	return new Wall(*this);
}
