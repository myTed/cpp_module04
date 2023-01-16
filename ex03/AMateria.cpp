
#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const& type)
{
	std::cout << "Amateria Non Default Constructor Called!\n";
	_type = type;
}
	
AMateria::~AMateria()
{
	std::cout << "Amateria Deconsturctor Called!\n";
}

std::string const& AMateria::getType() const
{
	return (_type);
}
	
void AMateria::use(ICharacter& target)
{
	this->use(target);	
}
