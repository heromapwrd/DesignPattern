#include "Leaf.h"
#include<iostream>
using namespace std;

void Leaf::Draw()
{
	cout << endl << "Leaf Draw!" << endl;
}

Leaf::Leaf()
{
	cout << "Leaf Constructor!" << endl;
}

Leaf::~Leaf()
{
	cout << endl << "Leaf Destructor!" << endl;
}
