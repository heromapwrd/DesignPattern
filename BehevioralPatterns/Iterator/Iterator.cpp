#include "Iterator.h"
#include <iostream>
using namespace std;

Iterator::~Iterator()
{
	cout << "Iterator Destructor!" << endl;
}

//bool Iterator::IsDoon()
//{
//	cout << endl << "Iterator IsDoon!" << endl;
//}
//
//void Iterator::First()
//{
//	cout << endl << "Iterator First!" << endl;
//}
//
//void Iterator::Next()
//{
//	cout << endl << "Iterator Next!" << endl;
//}
//
//int Iterator::GetItem()
//{
//	cout << endl << "Iterator GetItem!" << endl;
//}

Iterator::Iterator()
{
	cout << endl << "Iterator Constructor!" << endl;
}
