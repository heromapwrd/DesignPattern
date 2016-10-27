#ifndef _INVOKER_H__
#define _INVOKER_H__
#include "Command.h"

class Invoker
{
public:
	Invoker();
	~Invoker();
	void SetCommand(Command* pCommand);
	Command* GetCommand();
	void Invoke();
protected:
private:
	Command* m_pCommand;
};
#endif