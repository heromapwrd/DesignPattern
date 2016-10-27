#include "SecondStrategy.h"
#include <iostream>
using namespace std;

SecondStrategy::SecondStrategy()
{
	cout << "SecondStrategy Constructor!" << endl;
}

SecondStrategy::~SecondStrategy()
{
	cout << endl << "SecondStrategy Destructor!" << endl;
}

void SecondStrategy::DoDisplay()
{
	cout << endl << "SecondStrategy DoDisplay!" << endl;
}
