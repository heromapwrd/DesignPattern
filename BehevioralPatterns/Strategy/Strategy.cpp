#include "Strategy.h"
#include <iostream>
using namespace std;

Strategy::~Strategy()
{
	cout << "Strategy Destructor!" << endl;
}

void Strategy::DoDisplay()
{
	cout << endl << "Strategy DoDisplay!" << endl;
}

Strategy::Strategy()
{
	cout << endl << "Strategy Constructor!" << endl;
}
