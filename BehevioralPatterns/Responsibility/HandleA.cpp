#include "HandleA.h"
#include <iostream>
using namespace std;

void HandleA::HandRequest()
{
	if (m_pSuccesor)
		m_pSuccesor->HandRequest();
	else
		cout << endl << "HandleA HandRequest!" << endl;
}

HandleA::HandleA()
{
	cout << "HandleA Constructor!" << endl;
}

HandleA::~HandleA()
{
	cout << endl << "HandleA Destructor!" << endl;
}
