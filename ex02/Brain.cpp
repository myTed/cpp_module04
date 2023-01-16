#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain Default Constructor called\n";	
	memCnt = 0;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}
	
Brain::Brain(const Brain& rBrain)
{
	std::cout << "Brain Copy Constructor called\n";
	for (int idx = 0; idx < STR_MAX; idx++)
		ideas[idx] = rBrain.ideas[idx];
	memCnt = rBrain.memCnt;
}

Brain& Brain::operator=(const Brain& rBrain)
{
	std::cout << "Brain Copy Assignment operator called\n";
	if (this == &rBrain)
		return (*this);
	for (int idx = 0; idx < STR_MAX; idx++)
		ideas[idx] = rBrain.ideas[idx];
	memCnt = rBrain.memCnt;
	return (*this);
}

void	Brain::learn(const std::string &str)
{
	ideas[memCnt] = str;
	memCnt = (memCnt + 1) % STR_MAX;
}

void  Brain::comeUp() const
{
	for(size_t idx = 0; idx < memCnt; idx++)
		std::cout << ideas[idx] << std::endl;
	std::cout << "\n\n";
}
