#include "Context.h"
#include <iostream>
using namespace std;

Context::Context(Strategy* pStrategy)
{
	m_pStrategy = pStrategy;
	cout << endl << "Context Constructor!" << endl;
}

Context::~Context()
{
	cout << endl << "Context Destructor!" << endl;
}

void Context::SetFocus()
{
	cout << endl << "Context SetFocus!" << endl;
}

void Context::ResetFocus()
{
	cout << endl << "Context ResetFocus!" << endl;
}

void Context::Display()
{
	SetFocus();
	if (m_pStrategy) m_pStrategy->DoDisplay();
	ResetFocus();
}
