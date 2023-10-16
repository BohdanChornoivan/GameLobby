#include "player.h"
#include <iostream>

Player::Player(const string& name) :
	m_Name(name),
	m_pNext(0)
{}

string Player::GetName() const
{
	return m_Name;
}

Player* Player::GetNext() const
{
	return m_pNext;
}

void Player::SetNext(Player* next)
{
	m_pNext = next;
}

ostream& operator<<(ostream& os, const Player& aPlayer)
{
	os << aPlayer.GetName();
	return os;
}
