#ifndef _WRONG_CAT_HPP
#define _WRONG_CAT_HPP
#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& rWCat);
	WrongCat& operator=(const WrongCat& rWCat);

	void	makeSound() const;	
};

#endif
