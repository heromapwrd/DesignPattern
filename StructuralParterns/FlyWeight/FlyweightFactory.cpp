#include "FlyweightFactory.h"
#include<iostream>
using namespace std;

FlyweightFactory::FlyweightFactory()
{
	m_pMapObject.clear();
	cout << endl << "FlyweightFactory Constructor!" << endl;
}

FlyweightFactory::~FlyweightFactory()
{
	hash_map<const char*, Flyweight*>::iterator objIter = m_pMapObject.begin();
	for (; objIter != m_pMapObject.end(); objIter++)
	{
		Flyweight* pFlyweight = objIter->second;
		if (pFlyweight)
			delete pFlyweight;
		objIter->second = NULL;
	}
	m_pMapObject.clear();
	cout << "FlyweightFactory Destructor!" << endl;
}

Flyweight* FlyweightFactory::GetObject(const char* pKey)
{
	if (!pKey)
		return NULL;
	hash_map<const char*, Flyweight*>::iterator objIter = m_pMapObject.begin();
	for (; objIter != m_pMapObject.end(); objIter++)
	{
		const char* pStr = objIter->first;
		if (!strcmp(pStr, pKey))
			return objIter->second;
	}
	Flyweight* pFlyweight = new ConcreteFlyweight(pKey);
	m_pMapObject.insert(pair<const char*, Flyweight*>(pKey, pFlyweight));
	return pFlyweight;
}
