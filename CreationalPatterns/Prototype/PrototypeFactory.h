#ifndef _PROTOTYPEFACTORY_H__
#define _PROTOTYPEFACTORY_H__
#include "MazeFactory.h"

class PrototypeFactory:public MazeFactory
{
public:
	PrototypeFactory(Maze* pMaze,Room* pRoom,Door* pDoor,Wall* pWall);

	virtual Maze* CreateMaze() override;

	virtual Room* CreateRoom(int iNo) override;

	virtual Door* CreateDoor(Room* pInner, Room* pOuter) override;

	virtual Wall* CreateWall() override;

private:
	Maze* m_pProtoMaze;
	Room* m_pProtoRoom;
	Door* m_pProtoDoor;
	Wall* m_pProtoWall;
};



#endif