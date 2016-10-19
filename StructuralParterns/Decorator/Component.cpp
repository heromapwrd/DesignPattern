#include "Component.h"
#include<iostream>
using namespace std;

Component::Component()
{
	cout << endl << "Component Constructor!" << endl;
}

void Component::Draw()
{
	cout << endl << "Component Draw!" << endl;
}

Component::~Component()
{
	cout << "Component Destructor!" << endl;
}
