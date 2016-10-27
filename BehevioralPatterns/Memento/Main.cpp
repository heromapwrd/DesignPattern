#include "Originator.h"
#include "Memento.h"

void main()
{
	Originator* pOriginator = new Originator(State("Old"));
	pOriginator->PrintState();
	Memento* pMemento = pOriginator->CreateMemento();
	pOriginator->SetState(State("New"));
	pOriginator->PrintState();
	pOriginator->RestoreFromMemento(pMemento);
	pOriginator->PrintState();
	if (pMemento)
		delete pMemento;
	if (pOriginator)
		delete pOriginator;
}