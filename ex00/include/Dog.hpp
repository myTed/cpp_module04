#ifndef _DOG_HPP
#define _DOG_HPP
#include "Animal.hpp"

class	Dog: public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog& rDog);
	Dog& operator=(const Dog& rDog);

	void	makeSound() const;
};

#endif
