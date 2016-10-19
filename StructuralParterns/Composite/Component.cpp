#include "Component.h"
#include<iostream>
using namespace std;

Component::Component()
{
	cout << endl << "Component Constructor!" << endl;
}

Component::~Component()
{
	cout << "Component Destructor!" << endl;
}

void Component::Add(Component* pComponent)
{

}

void Component::Remove(int index)
{
	
}

Component* Component::GetChild(int index)
{
	return NULL;
}

void Component::RemoveAll()
{

}

void Component::Draw()
{
	cout << endl << "Component Draw!" << endl;
}
