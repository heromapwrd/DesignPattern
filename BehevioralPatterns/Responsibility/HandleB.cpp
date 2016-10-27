#include "HandleB.h"
#include <iostream>
using namespace std;

void HandleB::HandRequest()
{
	if (m_pSuccesor)
		m_pSuccesor->HandRequest();
	else
		cout << endl << "HandleB HandRequest!" << endl;
}

HandleB::HandleB()
{
	cout << "HandleB Constructor!" << endl;
}

HandleB::~HandleB()
{
	cout << endl << "HandleB Destructor!" << endl;
}
