#include "lobby.h"
#include <iostream>

Lobby::Lobby():
	m_pHead(0)
{}

Lobby::~Lobby()
{
	Clear();
}

void Lobby::AddPlayer()
{
	cout << "Please enter the name of the new player: ";
	string name;
	cin >> name;
	Player* pNewPlayer = new Player(name);

	if (m_pHead == 0)
	{
		m_pHead = pNewPlayer;
		lastPlayer = pNewPlayer;
	}
	else
	{
		lastPlayer->SetNext(pNewPlayer);
		lastPlayer = pNewPlayer;
	}
}

void Lobby::RemovePlayer()
{
	if (m_pHead == 0)
	{
		cout << "The game lobby is empty. No one to remove!\n";
	}
	else
	{
		Player* pTemp = m_pHead;
		m_pHead = m_pHead->GetNext();
		delete pTemp;
	}
}

void Lobby::Clear()
{
	while (m_pHead != 0)
	{
		RemovePlayer();
	}
}

ostream& operator<<(ostream& os, const Lobby& aLobby)
{
	Player* pIter = aLobby.m_pHead;
	os << "\nHere's who's in the game lobby:\n";
	if (pIter == 0)
	{
		os << "The lobby is empty";
	}
	else
	{
		while (pIter != 0)
		{
			os << *pIter << endl;
			pIter = pIter->GetNext();
		}
	}
	return os;
}