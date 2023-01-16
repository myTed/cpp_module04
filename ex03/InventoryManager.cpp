#include "InventoryManager.hpp"
#include <iostream>

InventoryManager::InventoryManager()
: _slot(), _floor()
{
	std::cout << "InventoryManager Default Constructor Called\n";
}

InventoryManager::~InventoryManager()
{
	std::cout << "InventoryManager Destructor Called\n";
}

InventoryManager::InventoryManager(const InventoryManager& rInv)
: _slot(rInv._slot), _floor(rInv._floor)
{
	std::cout << "InventoryManager Copy Constructor Called\n";
}
	
InventoryManager& InventoryManager::operator=(const InventoryManager& rInv)
{
	std::cout << "InvantoryManager Copy Assignment Operator Called\n";
	if (this == &rInv)
		return (*this);
	_slot = rInv._slot;
	_floor = rInv._floor;
	return (*this);	
}

void	InventoryManager::equip(AMateria* m)
{
	if (_slot.isFull())
		return ;
	_slot.add(m);
}

void	InventoryManager::unequip(int idx)
{
	if (_slot.isEmpty())
		return ;
	if ((idx >= DEFAULT_MAX_SIZE) || (idx < 0))
		return ;
	AMateria* item;
	if (_slot.peek(idx, &item) == false)
		return ;
	_floor.add(item);
	_slot.del(idx, &item, false);
}

void	InventoryManager::use(int idx, ICharacter& target)
{
	AMateria* tmp;
	if (_slot.peek(idx, &tmp) == false)
		return ;
	tmp->use(target);
}

void	InventoryManager::clear()
{
	_slot.clear();
	_floor.clear();
}