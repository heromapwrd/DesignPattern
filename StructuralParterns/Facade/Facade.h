#ifndef _FACADE_H__
#define _FACADE_H__
#include "SysOne.h"
#include "SysTwo.h"
class Facade
{
public:
	Facade(SysOne* pSysOne,SysTwo* pSysTwo);
	void Operation();
private:
	SysOne* m_pSysOne;
	SysTwo* m_pSysTwo;
};
#endif