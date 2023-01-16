#ifndef _MATERIASOURCE_HPP
#define _MATERIASOURCE_HPP

#include "List.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
enum {DEFAULT_LEARN_MAX = 4};
private:
	List	_learn;
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& rMat);
	MateriaSource& operator=(const MateriaSource& rMat);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const &type);
};

#endif

