#include "MapSite.h"
#include<stdlib.h>
int MapSite::sID = 0;
MapSite::MapSite()
{
	IncreID();
	m_iID = sID;
}

MapSite::MapSite(const MapSite& mapsite)
{
	IncreID();
	m_iID = sID;
}

void MapSite::Enter()
{

}

void MapSite::IncreID()
{
	sID++;
}

int MapSite::GetID()
{
	return m_iID;
}

MapSite::~MapSite()
{

}

MapSite* MapSite::Clone()
{
	return NULL;
}
