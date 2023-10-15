#pragma once
#include "player.h"

class Lobby
{
	friend ostream& operator<<(ostream& os, const Lobby& aLobby);
private:
	Player* m_pHead;
public:
	Lobby();
	~Lobby();
	void AddPlayer();
	void RemovePlayer();
	void Clear();
};

