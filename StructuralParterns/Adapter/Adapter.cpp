#include "Adapter.h"
#include<iostream>
using namespace std;

Adapter::Adapter()
{
	cout << endl << "Create Adapter!" << endl;
}

void Adapter::SpecialRequest()
{
	cout << endl << "Adapter SpecialRequest!" << endl;
	Request();
}