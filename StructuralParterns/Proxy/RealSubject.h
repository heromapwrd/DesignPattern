#ifndef _REALSUBJECT_H__
#define _REALSUBJECT_H__
#include "Subject.h"

class RealSubject :public Subject
{
public:
	RealSubject();
	~RealSubject();

	virtual void Request() override;

};
#endif