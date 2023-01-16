#ifndef _CHARACTER_HPP
#define _CHARACTER_HPP

#include "ICharacter.hpp"
#include "InventoryManager.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter
{
private:
	std::string			_name;
	InventoryManager	_inventory;
public:
	Character();
	Character(const std::string& name);
	~Character();
	Character(const Character &rCh);
	Character& operator=(const Character &rCh);

	std::string const &	getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif
