#include "Abstract.h"
#include<iostream>
using namespace std;

Abstract::~Abstract()
{
	cout << "Abstract Destructor!" << endl;
}

void Abstract::Operation()
{
	cout << endl << "Abstract Operation!" << endl;
}

Abstract::Abstract()
{
	cout << endl << "Abstract Constructor!" << endl;
}
