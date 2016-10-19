#include "Subject.h"
#include<iostream>
using namespace std;

void Subject::Request()
{
	cout << "Subject Request!" << endl;
}

Subject::~Subject()
{
	cout << "Subject Destructor!" << endl;
}

Subject::Subject()
{
	cout << endl << "Subject Constructor!" << endl;
}
