#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP
#include <string>

class	Animal
{
protected:
	std::string	type;
	Animal(const std::string& name);
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& rAni);
	Animal& operator=(const Animal& rAni);

	virtual void		makeSound() const;
	const std::string& 	getType() const;
};

#endif
