#include "Cat.hpp"
#include <iostream>

Cat::Cat()
: Animal("Cat")
{
	std::cout << "Cat Default Constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
}

Cat::Cat(const Cat& rCat)
: Animal(rCat)
{
	std::cout << "Cat Copy Constructor called\n";
}
	
Cat& Cat::operator=(const Cat& rCat)
{
	std::cout << "Cat Copy Assignment operator called\n";
	if (this == &rCat)
		return (*this);	
	type = rCat.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "yyyyYAAAA...OOOONG...YA....ONG\n";
}
