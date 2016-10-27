#ifndef _OPENCOMMAND_H__
#define _OPENCOMMAND_H__
#include "Command.h"

class Reciever;
typedef void(Reciever:: *FCallBack)();
class OpenCommand :public Command
{
public:
	OpenCommand(Reciever* pReciever, FCallBack pCallBack);
	~OpenCommand();

	virtual void Excute() override;

private:
	Reciever* m_pReciever;
	FCallBack m_pFunCallBack;
};
#endif