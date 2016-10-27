#include "OpenCommand.h"
#include "Reciever.h"
#include <iostream>
using namespace std;

void OpenCommand::Excute()
{
	cout << endl << "OpenCommand Excute!" << endl;
	if (m_pReciever&&m_pFunCallBack)
		(m_pReciever->*m_pFunCallBack)();
}

OpenCommand::OpenCommand(Reciever* pReciever, FCallBack pCallBack)
{
	m_pReciever = pReciever;
	m_pFunCallBack = pCallBack;
	cout << "OpenCommand Constructor!" << endl;
}

OpenCommand::~OpenCommand()
{
	m_pFunCallBack = NULL;
	m_pReciever = NULL;
	cout << endl << "OpenCommand Destructor!" << endl;
}
