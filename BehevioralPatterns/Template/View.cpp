#include "View.h"
#include <iostream>
using namespace std;

View::~View()
{
	cout << "View Destructor!" << endl;
}

void View::Display()
{
	SetFocus();
	DoDisplay();
	ResetFocus();
}

void View::SetFocus()
{
	cout << endl << "View SetFocus!" << endl;
}

void View::ResetFocus()
{
	cout << endl << "View ResetFocus!" << endl;
}

void View::DoDisplay()
{
	cout << endl << "View DoDisplay!" << endl;
}

View::View()
{
	cout << endl << "View Constructor!" << endl;
}
