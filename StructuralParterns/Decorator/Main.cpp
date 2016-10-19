#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

void main()
{
	Component* pComponent = new ConcreteComponent;
	if (pComponent) pComponent->Draw();
	Decorator* pDecorator = new ConcreteDecorator(pComponent);
	if (pDecorator) pDecorator->Draw();

	if (pDecorator)
		delete pDecorator;

	if (pComponent)
		delete pComponent;
}