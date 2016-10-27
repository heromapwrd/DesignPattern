#ifndef _HANDLEA_H__
#define _HANDLEA_H__
#include "Handle.h"

class HandleA :public Handle
{
public:
	HandleA();
	~HandleA();

	virtual void HandRequest() override;
};
#endif