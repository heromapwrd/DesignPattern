#include "ConcreteAbstractImp.h"
#include<iostream>
using namespace std;

void ConcreteAbstractImp::Operation()
{
	cout << endl << "ConcreteAbstractImp Operation!" << endl;
}

ConcreteAbstractImp::ConcreteAbstractImp()
{
	cout << "ConcreteAbstractImp Constructor!" << endl;
}

ConcreteAbstractImp::~ConcreteAbstractImp()
{
	cout << endl << "ConcreteAbstractImp Destructor!" << endl;
}
