#include "Command.h"
#include <iostream>
using namespace std;

Command::~Command()
{
	cout << "Command Destructor!" << endl;
}

Command::Command()
{
	cout << endl << "Command Constructor!" << endl;
}
