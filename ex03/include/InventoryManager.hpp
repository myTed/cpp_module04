#ifndef _INVENTORY_MANAGER_HPP
#define _INVENTORY_MANAGER_HPP
#include "List.hpp"
#include "AMateria.hpp"

class	InventoryManager
{
enum {DEFAULT_MAX_SIZE = 4};
private:
	List _slot;
	List _floor;
public:
	InventoryManager();
	~InventoryManager();
	InventoryManager(const InventoryManager& rInv);
	InventoryManager& operator=(const InventoryManager& rInv);
public:
	void	clear();
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};

#endif
