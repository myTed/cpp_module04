#ifndef _BRAIN_HPP
#define _BRAIN_HPP
#include <string>

class	Brain
{
	enum {STR_MAX = 100};
private:
	size_t	memCnt;
	std::string ideas[STR_MAX];
public:
	Brain();
	~Brain();
	Brain(const Brain& rBrain);
	Brain& operator=(const Brain& rBrain);

	void learn(const std::string &str);
	void comeUp(void) const;
};

#endif
