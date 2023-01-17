#include "Dog.hpp"
#include <cstdlib>
#include <iostream>

Dog::Dog()
: Animal("Dog")
{
	std::cout << "Dog Default Constructor called\n";
	_pBrain = new (std::nothrow) Brain();
	if (_pBrain == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
}


Dog::Dog(Brain &rBrain)
: Animal("Dog")
{
	std::cout << "Dog Non Default Constructor called\n";
	_pBrain = new (std::nothrow) Brain();
	if (_pBrain == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
	_pBrain->operator=(rBrain);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	if (_pBrain)
		delete _pBrain;
}
	
Dog::Dog(const Dog& rDog)
: Animal(rDog)
{
	std::cout << "Dog Copy Constructor called\n";
	_pBrain = new (std::nothrow) Brain();
	if (_pBrain == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
	_pBrain->operator=(*(rDog._pBrain));	
}
	
Dog& Dog::operator=(const Dog& rDog)
{
	std::cout << "Dog Copy Assignment operator called\n";
	if (this == &rDog)
		return (*this);
	type = rDog.type;
	if (_pBrain)
		delete _pBrain;
	_pBrain = new (std::nothrow) Brain();
	if (_pBrain == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
	_pBrain->operator=(*(rDog._pBrain));
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "wwwWALL....WAL...WAL\n";
}


void	Dog::learn(const std::string &str)
{
	_pBrain->learn(str);	
}

void	Dog::comeUp() const
{
	_pBrain->comeUp();
}
