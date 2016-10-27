#include "DrawCommand.h"
#include "OpenCommand.h"
#include "Invoker.h"
#include "Reciever.h"

void main()
{
	Invoker* pInvoker = new Invoker;
	Reciever* pReciever = new Reciever;
	/*Command* pCommand = new DrawCommand(pReciever);
	pInvoker->SetCommand(pCommand);
	pInvoker->Invoke();*/

	Command* pCallBack = new OpenCommand(pReciever, &Reciever::Excute);
	pInvoker->SetCommand(pCallBack);
	pInvoker->Invoke();

	
	///*if (pCommand)
	//	delete pCommand;*/
	if (pReciever)
		delete pReciever;
	if (pInvoker)
		delete pInvoker;
	if (pCallBack)
		delete pCallBack;
}