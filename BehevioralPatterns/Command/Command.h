#ifndef _COMMAND_H__
#define _COMMAND_H__

class Command
{
public:
	virtual ~Command();
	virtual void Excute() = 0;
protected:
	Command();
};
#endif