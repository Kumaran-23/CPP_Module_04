#include "Brain.hpp"

//default constructor function
Brain::Brain()
{
	std::cout << "Default constructor for Brain Class called" << std::endl;
}

//copy constructor function
Brain::Brain(const Brain &brain)
{
	std::cout << "Copy constructor for Brain Class called" << std::endl;
	*this = brain;
}

//destructor function
Brain::~Brain()
{
	std::cout << "Destructor for Brain Class called" << std::endl;
}

//copy assignation operator function
Brain	&Brain::operator=(const Brain &brain)
{
    if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++)
	{
			this->_ideas[i] = brain._ideas[i];
	}
	return (*this);
}

//gets value for current index of ideas
const std::string	&Brain::getIdea(int i)const
{
	if (i >= 100 || i < 0)
	{
		std::cout << "Brain is limited to 100 ideas and value cant be negative." << std::endl;
		exit(1);
	}
    return(this->_ideas[i]);        
}

//sets idea for current index of _idea
void	Brain::setIdea(std::string idea, int i)
{
	if (i >= 100 || i < 0)
		std::cout << "Brain is limited to 100 ideas and value cant be negative." << std::endl;
	else
		this->_ideas[i] = idea;
}

//gets the address of current index of idea
const std::string *Brain::getIdeaAddress(int i)const
{
	if (i < 100)
	{
		const std::string	&stringREF = this->_ideas[i];
		return(&stringREF);
	}
	else
		return (NULL);
}