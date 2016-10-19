#ifndef _SUBJECT_H__
#define _SUBJECT_H__

class Subject
{
public:
	virtual void Request();
	virtual ~Subject();
protected:
	Subject();
};
#endif