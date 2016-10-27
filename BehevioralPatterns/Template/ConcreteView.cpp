#include "ConcreteView.h"
#include <iostream>
using namespace std;

void ConcreteView::DoDisplay()
{
	cout << endl << "ConcreteView DoDisplay!" << endl;
}

ConcreteView::ConcreteView()
{
	cout << "ConcreteView Constructor!" << endl;
}

ConcreteView::~ConcreteView()
{
	cout << endl << "ConcreteView Destructor!" << endl;
}

