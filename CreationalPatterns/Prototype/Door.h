#ifndef _DOOR_H__
#define _DOOR_H__
#include "MapSite.h"
#include "Room.h"

class Door :public MapSite
{
public:
	Door(Room* pInner,Room* pOuter);
	Door(const Door& door);
	virtual bool Init(Room* pInner, Room* pOuter);
	virtual void Enter() override;

	virtual MapSite* Clone() override;

private:
	MapSite* m_pInner;
	MapSite* m_pOuter;
};
#endif 