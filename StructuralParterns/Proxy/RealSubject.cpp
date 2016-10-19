#include "RealSubject.h"
#include<iostream>
using namespace std;

void RealSubject::Request()
{
	cout << endl << "RealSubject Request!" << endl;
}

RealSubject::RealSubject()
{
	cout << "RealSubject Constructor!" << endl;
}

RealSubject::~RealSubject()
{
	cout << endl << "RealSubject Destructor!" << endl;
}
