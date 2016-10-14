#ifndef _MALL_H__
#define _MALL_H__
#include "MapSite.h"

class Wall :public MapSite
{
public:
	Wall();
	virtual void Enter() override;
};
#endif 