#include "Visitor.h"
#include <iostream>
using namespace std;

Visitor::~Visitor()
{
	cout << "Visitor Destructor!" << endl;
}

Visitor::Visitor()
{
	cout << endl << "Visitor Constructor!" << endl;
}
