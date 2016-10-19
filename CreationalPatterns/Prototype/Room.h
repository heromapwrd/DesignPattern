#ifndef _ROOM_H__
#define _ROOM_H__
#include "MapSite.h"

enum Orient
{
	ORIENT_EAST = 0,
	ORIENT_WEST,
	ORIENT_SOUTH,
	ORIENT_NORTH,
	ORIENT_NUM
};

class Room:public MapSite
{
public:
	Room(int iNo);
	Room(const Room& room);
	~Room();
	virtual void Enter() override;
	virtual void SetOrient(Orient orient, MapSite* pSite);
	virtual bool Init(int iNo);
	virtual int GetNo();
	virtual MapSite* Clone() override;
private: 
	static void IncreaseCount();
private:
	static int sRoomCount;
private:
	MapSite* m_ppOrientSite[ORIENT_NUM];
	int m_iRoomNo;
};
#endif 