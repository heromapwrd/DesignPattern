#include "StateManager.h"
#include "State.h"
#include <iostream>
using namespace std;

StateManager::StateManager()
{
	m_MapStates.clear();
	cout << endl << "StateManager Constructor!" << endl;
}

StateManager::~StateManager()
{
	RemoveAll();
	cout << endl << "StateManager Destructor!" << endl;
}

void StateManager::AddState(State* pState)
{
	if (!pState)
		return;
	m_MapStates.insert(pair<string, State*>(pState->GetName(), pState));
}

void StateManager::RemoveState(string& sName)
{
	hash_map<string, State*>::iterator it = m_MapStates.find(sName);
	if (it == m_MapStates.end())
		return;
	State* pState = it->second;
	m_MapStates.erase(it);
	if (pState)
	{
		delete pState;
		pState = NULL;
	}
}

void StateManager::RemoveAll()
{
	hash_map<string, State*>::iterator it = m_MapStates.begin();
	for (; it != m_MapStates.end(); it++)
	{
		State* pState = NULL;
		pState = it->second;
		it->second = NULL;
		if (pState)
		{
			delete pState;
			pState = NULL;
		}
	}
}

State* StateManager::FindState(string& sName)
{
	hash_map<string, State*>::iterator it = m_MapStates.find(sName);
	if (it == m_MapStates.end())
		return NULL;
	else
		return it->second;
}
