#include "Ice.hpp"
#include <iostream>

Ice::Ice()
: AMateria("ice")
{
	std::cout << "Ice Default Constructor Called\n";
}
	
Ice::Ice(const std::string& type)
: AMateria(type)
{
	std::cout << "Ice Non Default Constructor Called\n";	
}
	
Ice::Ice(const Ice& rIce)
: AMateria(rIce)
{
	std::cout << "Ice Copy constructor Called\n";	
}
	
Ice::~Ice()
{
	std::cout << "Ice Destructor Called\n";
}
	
Ice& Ice::operator=(const Ice& rIce)
{
	if (this == &rIce)
		return (*this);
	_type = rIce._type;
	return (*this);
}

AMateria* 	Ice::clone() const
{
	AMateria* tmp = new (std::nothrow) Ice();
	if (tmp == 0)
	{
		std::cout << "Memory Allocation Error\n";
		std::exit(1);
	}
	return (tmp);
}
	
void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
