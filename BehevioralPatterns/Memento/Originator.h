#ifndef _ORIGINATOR_H__
#define _ORIGINATOR_H__
#include <string>
using namespace std;
typedef string State;

class Memento;
class Originator
{
public:
	Originator();
	Originator(State& state);
	~Originator();
	Memento* CreateMemento();
	void SetState(State& state);
	State GetState();
	void RestoreFromMemento(Memento* pMemento);
	void PrintState();
private:
	State m_State;
};
#endif