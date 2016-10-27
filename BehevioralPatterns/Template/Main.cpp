#include "ConcreteView.h"

void main()
{
	View* pView = new ConcreteView;
	if (pView)
		pView->Display();
	
	if (pView)
		delete pView;
}