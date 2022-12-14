#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Brain
{
	public:
			Brain();
			Brain(const Brain &brain);
			Brain &operator=(const Brain &brain);
			virtual ~Brain();
			const std::string &getIdea(int i)const;
			const std::string *getIdeaAddress(int i)const;
			void setIdea(std::string idea, int i);
	private:
			std::string _ideas[100];
};

#endif