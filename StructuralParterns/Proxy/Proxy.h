#ifndef _PROXY_H__
#define _PROXY_H__
#include "Subject.h"

class Proxy :public Subject
{
public:
	Proxy(Subject* pSub);
	~Proxy();

	virtual void Request() override;

private:
	Subject* m_pSubject;
};
#endif