#ifndef _CURE_HPP
#define _CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
public:
	Cure();
	Cure(const std::string& type);
	Cure(const Cure& rCure);
	~Cure();
	Cure& operator=(const Cure& rCure);

	AMateria* 	clone() const;
	void		use(ICharacter& target);
};


#endif
