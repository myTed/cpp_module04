#ifndef _CAT_HPP
#define _CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
private:
	Brain* _pBrain;
public:
	Cat();
	Cat(Brain& rBrain);
	virtual ~Cat();
	Cat(const Cat& rCat);
	Cat& operator=(const Cat& rCat);
	
	void	makeSound() const;
	void	learn(const std::string &str);
	void	comeUp() const;	
};

#endif
