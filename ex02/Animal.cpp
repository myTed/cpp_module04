#include "Animal.hpp"
#include <iostream>

Animal::Animal()
: type("Animal")
{
	std::cout << "Animal Default Constructor called\n";
}

Animal::Animal(const std::string& name)
: type(name)
{
	std::cout << "Animal Non Default Constructor called\n";
}

Animal::~Animal()

{
	std::cout << "Animal Destructor called\n";
}
	
Animal::Animal(const Animal& rAni)
{
	std::cout << "Animal Copy Constructor called\n";
	type = rAni.type;
}
	
Animal& Animal::operator=(const Animal& rAni)
{
	std::cout << "Animal Copy Assignment operator called\n";
	if (this == &rAni)
		return (*this);
	type = rAni.type;
	return (*this);
}

const std::string& Animal::getType() const
{
	return (type);
}
