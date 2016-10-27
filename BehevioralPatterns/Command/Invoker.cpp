#include "Invoker.h"
#include <iostream>
using namespace std;

Invoker::Invoker()
{
	cout << endl << "Invoker Constructor!" << endl;
}

Invoker::~Invoker()
{
	cout << endl << "Invoker Destructor!" << endl;
}

void Invoker::SetCommand(Command* pCommand)
{
	m_pCommand = pCommand;
}

Command* Invoker::GetCommand()
{
	return m_pCommand;
}

void Invoker::Invoke()
{
	cout << endl << "Invoke Invoke!" << endl;
	if (m_pCommand)
		m_pCommand->Excute();
}
