#ifndef _MEMENTO_H__
#define _MEMENTO_H__
#include "Originator.h"
#include <string>
using namespace std;
typedef string State;

class Memento
{
private:
	friend Originator;
	Memento();
	Memento(State& state);
	void SetState(State& state);
	State GetState();
public:
	~Memento();
private:
	State m_State;
};
#endif