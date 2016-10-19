#include "Decorator.h"
#include<iostream>
using namespace std;

void Decorator::Draw()
{
	cout << endl << "Decorator Draw" << endl;
}

Decorator::Decorator(Component* pComponent)
{
	m_pComponent = pComponent;
	cout << "Decorator Constructor!" << endl;
}

Decorator::~Decorator()
{
	m_pComponent = NULL;
	cout << "Decorator Destructor!" << endl;
}
