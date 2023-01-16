#ifndef _WRONG_ANIMAL_HPP
#define _WRONG_ANIMAL_HPP
#include <string>

class	WrongAnimal
{
protected:
	std::string	type;
	WrongAnimal(const std::string& name);
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal& rWAni);
	WrongAnimal& operator=(const WrongAnimal& rWAni);

	void				makeSound() const;
	const std::string& 	getType() const;
};

#endif
