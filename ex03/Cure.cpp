#include "Cure.hpp"
#include <iostream>
#include <cstdlib>

Cure::Cure()
: AMateria("cure")
{
	std::cout << "Cure Default Constructor Called\n";
}
	
Cure::Cure(const std::string& type)
: AMateria(type)
{
	std::cout << "Cure Non Default Constructor Called\n";	
}
	
Cure::Cure(const Cure& rCure)
: AMateria(rCure)
{
	std::cout << "Cure Copy constructor Called\n";	
}
	
Cure::~Cure()
{
	std::cout << "Cure Destructor Called\n";
}
	
Cure& Cure::operator=(const Cure& rCure)
{
	if (this == &rCure)
		return (*this);
	_type = rCure._type;
	return (*this);
}

AMateria* 	Cure::clone() const
{
	AMateria* tmp = new (std::nothrow) Cure();
	if (tmp == 0)
	{
		std::cout << "Memory Allocation Error\n";
		std::exit(1);
	}
	return (tmp);
}
	
void		Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}

