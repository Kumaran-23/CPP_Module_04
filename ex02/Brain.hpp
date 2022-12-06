#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
			Brain();
			Brain(const Brain &brain);
			Brain &operator=(const Brain &brain);
			virtual ~Brain();
			const std::string &getIdea(int i)const;
			const std::string *getIdeaAddress(int i)const;
			void setIdea(int i, std::string idea);
	private:
			std::string _ideas[100];
};

#endif