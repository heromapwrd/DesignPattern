#include "ConcreteComponent.h"
#include<iostream>
using namespace std;

void ConcreteComponent::Draw()
{
	cout << endl << "ConcreteComponent Draw!" << endl;
}

ConcreteComponent::ConcreteComponent()
{
	cout << "ConcreteComponent Constructor!" << endl;
}

ConcreteComponent::~ConcreteComponent()
{
	cout << endl << "ConcreteComponent Destructor!" << endl;
}
