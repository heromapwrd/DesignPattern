#include "Proxy.h"
#include "RealSubject.h"

void main()
{
	Subject* pSub = new RealSubject;
	Proxy* pProxy = new Proxy(pSub);
	if (pProxy)
		pProxy->Request();

	if (pProxy)
		delete pProxy;

	if (pSub)
		delete pSub;
}