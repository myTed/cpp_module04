#include "Dog.hpp"
#include <iostream>

Dog::Dog()
: Animal("Dog")
{
	std::cout << "Dog Default Constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}
	
Dog::Dog(const Dog& rDog)
: Animal(rDog)
{
	std::cout << "Dog Copy Constructor called\n";
}
	
Dog& Dog::operator=(const Dog& rDog)
{
	std::cout << "Dog Copy Assignment operator called\n";
	if (this == &rDog)
		return (*this);
	type = rDog.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "wwwWALL....WAL...WAL\n";
}
