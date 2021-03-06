#pragma once

class Entity
{
public:
	enum EntityType
	{
		ET_PLAYER,
		ET_MONSTER,
		ET_NPC
	};
	Entity();
	Entity(string newName, int baseHp, int baseMp);
	string getName();
	void setName(string newName);
private:
	//	Need set/get functions for all values
	string name;
	int health;
	int mana;
	EntityType type;
}
	
