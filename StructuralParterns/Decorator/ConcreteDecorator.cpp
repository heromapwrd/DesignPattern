#include "ConcreteDecorator.h"
#include<iostream>
using namespace std;

void ConcreteDecorator::Draw()
{
	cout << endl << "ConcreteDecorator Draw!" << endl;
	if(m_pComponent) m_pComponent->Draw();
	DrawBound();
}

ConcreteDecorator::ConcreteDecorator(Component* pComponent) :Decorator(pComponent)
{
	cout << "ConcreteDecorator Constructor!" << endl;
}

ConcreteDecorator::~ConcreteDecorator()
{
	cout << endl << "ConcreteDecorator Destructor!" << endl;
}

void ConcreteDecorator::DrawBound()
{
	cout << endl << "ConcreteDecorator DrawBound" << endl;
}
