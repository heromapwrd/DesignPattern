#include "Composite.h"
#include "Leaf.h"

void main()
{
	Component* pLeaf = new Leaf();
	if (pLeaf) pLeaf->Draw();

	Component* pComposite = new Composite;
	pComposite->Add(pLeaf);
	pComposite->Draw();

	Component* pChild = pComposite->GetChild(0);
	pChild->Draw();

	if (pComposite)
		delete pComposite;
}