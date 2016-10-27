#include "DrawCommand.h"
#include <iostream>
using namespace std;

void DrawCommand::Excute()
{
	cout << endl << "DrawCommand Excute!" << endl;
	if (m_pReciever)
		m_pReciever->Excute();
}

DrawCommand::DrawCommand(Reciever* pReciever)
{
	m_pReciever = pReciever;
	cout << "DrawCommand Constructor!" << endl;
}

DrawCommand::~DrawCommand()
{
	cout << endl << "DrawCommand Destructor!" << endl;
}
