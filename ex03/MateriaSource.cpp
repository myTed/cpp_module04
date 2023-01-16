#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
: _learn(DEFAULT_LEARN_MAX)
{
	std::cout << "MateriaSource Default Constructor Called\n";
}
	
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor Called\n";
}
	
MateriaSource::MateriaSource(const MateriaSource& rMat)
 : _learn(rMat._learn)
{
	std::cout  << "MateriaSource Copy Constructor Called\n";
}
	
MateriaSource& MateriaSource::operator=(const MateriaSource& rMat)
{
	std::cout << "MateriasSource Copy Assignment Operator Called\n";
	if (this == &rMat)
		return (*this);
	_learn = rMat._learn;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* pAm)
{
	_learn.add(pAm);
}
	
AMateria* MateriaSource::createMateria(std::string const &type)
{
	AMateria* item;

	for (int idx = 0; idx < DEFAULT_LEARN_MAX; idx++)
	{
		if (_learn.peek(idx, &item) == false)
			return (0);
		if (item->getType() == type)
			return (item->clone());
	}
	return (0);
}
