#include "MapSite.h"

int MapSite::sID = 0;
MapSite::MapSite()
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
