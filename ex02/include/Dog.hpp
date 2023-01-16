#ifndef _DOG_HPP
#define _DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
private:
	Brain* _pBrain;				
public:
	Dog();
	Dog(Brain& rBrain);
	virtual ~Dog();
	Dog(const Dog& rDog);
	Dog& operator=(const Dog& rDog);

	void	makeSound() const;
	void	learn(const std::string &str);
	void	comeUp() const;
};

#endif
