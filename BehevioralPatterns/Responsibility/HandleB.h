#ifndef _HANDLEB_H__
#define _HANDLEB_H__
#include "Handle.h"

class HandleB :public Handle
{
public:
	HandleB();
	~HandleB();

	virtual void HandRequest() override;

};
#endif