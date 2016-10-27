#ifndef _DRAWCOMMAND_H__
#define _DRAWCOMMAND_H__
#include "Command.h"
#include "Reciever.h"

class DrawCommand :public Command
{
public:
	DrawCommand(Reciever* pReciever);
	~DrawCommand();

	virtual void Excute() override;

protected:
private:
	Reciever* m_pReciever;
};
#endif


