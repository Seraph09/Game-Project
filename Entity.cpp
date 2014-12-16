#include "Entity.h"

Entity::Entity()
	name(""),
	health(0),
	mana(0)
{}

Entity::Entity(string newName, int baseHp, int baseMp) :
	name(newName),
	health(baseHp),
	mana(baseMp)
{}

string Entity::getName()
{
	return name;
}

void Entity::setName(string newName)
{
	name = newName;
}
