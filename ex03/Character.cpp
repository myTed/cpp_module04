#include "Character.hpp"
#include <iostream>

Character::Character()
: _name("null")
{
	std::cout << "Character Default Constructor Called\n";	
}

Character::Character(const std::string& name)
: _name(name)
{
	std::cout << "Character Non Default Constructor Called\n";
}

Character::~Character()
{
	std::cout << "Character Destructor Called\n";
}

Character::Character(const Character &rCh)
: _name(rCh._name), _inventory(rCh._inventory)
{
	std::cout << "Character Copy Constructor Called\n";
}

	
Character& Character::operator=(const Character &rCh)
{
	std::cout << "Character Copy Assignment Operator Called!\n";
	_name = rCh._name;
	_inventory = rCh._inventory;
	return (*this);
}

	
std::string const &	Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	_inventory.equip(m);
}
	
void	Character::unequip(int idx)
{
	_inventory.unequip(idx);
}

void	Character::use(int idx, ICharacter& target)
{
	_inventory.use(idx, target);
}
