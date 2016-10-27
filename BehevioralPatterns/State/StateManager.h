#ifndef _STATEMANAGER_H__
#define _STATEMANAGER_H__
#include <hash_map>
#include <string>
using namespace std;

class State;
class StateManager
{
public:
	StateManager();
	~StateManager();
	void AddState(State* pState);
	State* FindState(string& sName);
	void RemoveState(string& sName);
	void RemoveAll();
private:
	hash_map<string, State*> m_MapStates;

};
#endif