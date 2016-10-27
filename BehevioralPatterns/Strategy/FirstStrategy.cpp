#include "FirstStrategy.h"
#include <iostream>
using namespace std;

FirstStrategy::FirstStrategy()
{
	cout << "FirstStrategy Constructor!" << endl;
}

FirstStrategy::~FirstStrategy()
{
	cout << endl << "FirstStrategy Destructor!" << endl;
}

void FirstStrategy::DoDisplay()
{
	cout << endl << "FirstStrategy DoDisplay!" << endl;
}
