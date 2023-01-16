#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
: type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string& name)
: type(name)
{
	std::cout << "WrongAnimal Non Default Constructor called\n";
}

WrongAnimal::~WrongAnimal()

{
	std::cout << "WrongAnimal Destructor called\n";
}
	
WrongAnimal::WrongAnimal(const WrongAnimal& rWani)
{
	std::cout << "WrongAnimal Copy Constructor called\n";
	type = rWani.type;
}
	
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rWani)
{
	std::cout << "WrongAnimal Copy Assignment operator called\n";
	if (this == &rWani)
		return (*this);
	type = rWani.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "umm.......zZZZZZZZZ\n";
}

const std::string& WrongAnimal::getType() const
{
	return (type);
}
