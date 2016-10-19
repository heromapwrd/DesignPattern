#include "AbstractImp.h"
#include<iostream>
using namespace std;

AbstractImp::~AbstractImp()
{
	cout << "AbstractImp Destructor!" << endl;
}

void AbstractImp::Operation()
{
	cout << endl << "AbstractImp Operation!" << endl;
}

AbstractImp::AbstractImp()
{
	cout << endl << "AbstractImp Constructor!" << endl;
}
