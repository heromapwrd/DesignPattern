#include "Composite.h"
#include<iostream>
using namespace std;

void Composite::Add(Component* pComponent)
{
	if (!pComponent)
		return;
	m_vecChildren.push_back(pComponent);
}

void Composite::Remove(int index)
{
	if (index >= m_vecChildren.size() || index < 0)
		return;
	vector<Component*>::iterator comIter = m_vecChildren.begin();
	for (; comIter != m_vecChildren.end(); comIter++)
	{
		Component* pComponent = *comIter;
		if (pComponent == m_vecChildren[index])
		{
			m_vecChildren.erase(comIter);
			break;
		}
	}
}

Component* Composite::GetChild(int index)
{
	if (index >= m_vecChildren.size() || index < 0)
		return NULL;
	else
		return m_vecChildren[index];
}

void Composite::Draw()
{
	cout << endl << "Composite Draw!" << endl;
	vector<Component*>::iterator comIter = m_vecChildren.begin();
	for (; comIter != m_vecChildren.end(); comIter++)
	{
		Component* pComponent = *comIter;
		if (pComponent)
		{
			pComponent->Draw();
		}
	}
}

Composite::Composite()
{
	cout << "Composite Constructor!" << endl;
}

Composite::~Composite()
{
	RemoveAll();
	cout << endl << "Composite Destructor!" << endl;
}

void Composite::RemoveAll()
{
	vector<Component*>::iterator comIter = m_vecChildren.begin();
	for (; comIter != m_vecChildren.end(); comIter++)
	{
		Component* pComponent = *comIter;
		if (pComponent)
		{
			*comIter = NULL;
			delete pComponent;
		}
	}
	m_vecChildren.clear();
}
