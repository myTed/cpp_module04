#ifndef _ICE_HPP
#define _ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria
{
public:
	Ice();
	Ice(const std::string& type);
	Ice(const Ice& rIce);
	~Ice();
	Ice& operator=(const Ice& rIce);

	AMateria* 	clone() const;
	void		use(ICharacter& target);
};


#endif
