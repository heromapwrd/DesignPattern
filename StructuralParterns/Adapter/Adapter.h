#ifndef _ADAPTER_H__
#define _ADAPTER_H__
#include "Adaptee.h"
#include "Target.h"
class Adapter:public Adaptee,private Target
{
public:
	Adapter();

	virtual void SpecialRequest() override;

};
#endif