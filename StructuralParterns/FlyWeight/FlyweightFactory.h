#ifndef _FLYWEIGHTFACTORY_H__
#define _FLYWEIGHTFACTORY_H__
#include "ConcreteFlyweight.h"
#include <hash_map>
using std::hash_map;

class FlyweightFactory
{
public:
	FlyweightFactory();
	virtual ~FlyweightFactory();
	virtual Flyweight* GetObject(const char* pKey);

protected:
	hash_map<const char*, Flyweight*> m_pMapObject;
};
#endif