#ifndef _MALL_H__
#define _MALL_H__
#include "MapSite.h"

class Wall :public MapSite
{
public:
	Wall();
	Wall(const Wall& wall);
	virtual bool Init();
	virtual void Enter() override;

	virtual MapSite* Clone() override;

};
#endif 