#ifndef _MAPSITE_H__
#define _MAPSITE_H__

class MapSite
{
public:
	MapSite();
	virtual ~MapSite();
	virtual void Enter();
	virtual int GetID();
private:
	static void IncreID();
private:
	static int sID;
	int m_iID;
};

#endif