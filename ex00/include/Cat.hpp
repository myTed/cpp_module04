#ifndef _CAT_HPP
#define _CAT_HPP
#include "Animal.hpp"

class	Cat: public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat& rCat);
	Cat& operator=(const Cat& rCat);

	void	makeSound() const;	
};

#endif
