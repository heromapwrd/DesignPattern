#include "Subject.h"
#include "Observer.h"
#include <iostream>
using namespace std;

void main()
{
	Subject* pSubject = new Subject(State("Old"));
	Observer* pObserver = new Observer(pSubject);
	cout << endl << "Subject:" << pSubject->GetState() << endl;
	pSubject->SetState(State("New"));
	cout << endl << "Subject:" << pSubject->GetState() << endl;
	pSubject->Notify();

	if (pObserver)
		delete pObserver;
	if (pSubject)
		delete pSubject;
}