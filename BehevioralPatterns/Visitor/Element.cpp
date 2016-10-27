#include "Element.h"
#include <iostream>
using namespace std;

Element::~Element()
{
	cout << "Element Destructor!" << endl;
}

Element::Element()
{
	cout << endl << "Element Constructor!" << endl;
}
