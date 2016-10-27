#include "Aggregate.h"
#include <iostream>
using namespace std;

Aggregate::~Aggregate()
{
	cout << "Aggregate Destructor!" << endl;
}

//int Aggregate::GetSize()
//{
//	cout << endl << "Aggregate GetSize!" << endl;
//}
//
//bool Aggregate::GetObject(int index, int& Obj)
//{
//	cout << endl << "Aggregate GetObject!" << endl;
//}
//
//Iterator* Aggregate::CreateIterator()
//{
//	cout << endl << "Aggregate CreateIterator!" << endl;
//}

Aggregate::Aggregate()
{
	cout << endl << "Aggregate Constructor!" << endl;
}
