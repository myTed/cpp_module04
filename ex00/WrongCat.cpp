#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}

WrongCat::WrongCat(const WrongCat& rWCat)
: WrongAnimal(rWCat)
{
	std::cout << "WrongCat Copy Constructor called\n";
}
	
WrongCat& WrongCat::operator=(const WrongCat& rWCat)
{
	std::cout << "WrongCat Copy Assignment operator called\n";
	if (this == &rWCat)
		return (*this);	
	type = rWCat.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "yyyyYAAAA...OOOONG...YA....ONG\n";
}
