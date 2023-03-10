#include "Cat.hpp"
#include <cstdlib>
#include <iostream>

Cat::Cat()
: Animal("Cat")
{
	std::cout << "Cat Default Constructor called\n";
	_pBrain = new (std::nothrow) Brain();
	if (_pBrain == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
}

Cat::Cat(Brain &rBrain)
: Animal("Cat")
{
	std::cout << "Cat Non Default Constructor called\n";
	_pBrain = new (std::nothrow) Brain();
	if (_pBrain == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
	_pBrain->operator=(rBrain);
}


Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	if (_pBrain)
		delete _pBrain;
}

Cat::Cat(const Cat& rCat)
: Animal(rCat)
{
	std::cout << "Cat Copy Constructor called\n";
	_pBrain = new (std::nothrow) Brain();
	if (_pBrain == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
	_pBrain->operator=(*(rCat._pBrain));
}
	
Cat& Cat::operator=(const Cat& rCat)
{
	std::cout << "Cat Copy Assignment operator called\n";
	if (this == &rCat)
		return (*this);	
	type = rCat.type;
	if (_pBrain)
		delete _pBrain;
	_pBrain = new (std::nothrow) Brain();
	if (_pBrain == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
	_pBrain->operator=(*(rCat._pBrain));
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "yyyyYAAAA...OOOONG...YA....ONG\n";
}


void	Cat::learn(const std::string &str)
{
	_pBrain->learn(str);	
}

void	Cat::comeUp(void) const
{
	_pBrain->comeUp();
}
