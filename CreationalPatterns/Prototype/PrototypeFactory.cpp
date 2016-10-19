#include "PrototypeFactory.h"

PrototypeFactory::PrototypeFactory(Maze* pMaze, Room* pRoom, Door* pDoor, Wall* pWall)
{
	m_pProtoMaze = pMaze;
	m_pProtoRoom = pRoom;
	m_pProtoDoor = pDoor;
	m_pProtoWall = pWall;
	if (m_pProtoMaze)
		AddSite(m_pProtoMaze);
	if (m_pProtoRoom)
		AddSite(m_pProtoRoom);
	if (m_pProtoDoor)
		AddSite(m_pProtoDoor);
	if (m_pProtoWall)
		AddSite(m_pProtoWall);
}

Maze* PrototypeFactory::CreateMaze()
{
	if (!m_pProtoMaze) return NULL;
	Maze* pMaze = dynamic_cast<Maze*>(m_pProtoMaze->Clone());
	if (!pMaze || !pMaze->Init())
	{
		if (pMaze)
			delete pMaze;
		return NULL;
	}
	AddSite(pMaze);
	return pMaze;
}

Room* PrototypeFactory::CreateRoom(int iNo)
{
	if (!m_pProtoRoom) return NULL;
	Room* pRoom = dynamic_cast<Room*>(m_pProtoRoom->Clone());
	if (!pRoom || !pRoom->Init(iNo))
	{
		if (!pRoom)
			delete pRoom;
		return NULL;
	}
	AddSite(pRoom);
	return pRoom;
}

Door* PrototypeFactory::CreateDoor(Room* pInner, Room* pOuter)
{
	if (!m_pProtoDoor) return NULL;
	Door* pDoor = dynamic_cast<Door*>(m_pProtoDoor->Clone());
	if (!pDoor || !pDoor->Init(pInner, pOuter))
	{
		if (pDoor)
			delete pDoor;
		return NULL;
	}
	AddSite(pDoor);
	return pDoor;
}

Wall* PrototypeFactory::CreateWall()
{
	if (!m_pProtoWall) return NULL;
	Wall* pWall = dynamic_cast<Wall*>(m_pProtoWall->Clone());
	if (!pWall || !pWall->Init())
	{
		if (pWall)
			delete pWall;
		return NULL;
	}
	AddSite(pWall);
	return pWall;
}
