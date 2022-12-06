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
	if (i > 100)
        return(this->_ideas[0]);
    return(this->_ideas[i]);        
}

//sets idea for current index of _idea
void	Brain::setIdea(int i, std::string idea)
{
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "Brain is limited to 100 ideas." << std::endl;
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