#pragma once
#include <string>

using namespace std;
class Player
{
	friend ostream& operator<<(ostream& os, const Player& aPlayer);
private:
	string m_Name;
	Player* m_pNext;
public:
	Player(const string& name = "");
	string GetName() const;
	Player* GetNext() const;
	void SetNext(Player* next);
};
