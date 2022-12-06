/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:29 by snair             #+#    #+#             */
/*   Updated: 2022/12/06 16:10:19 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//default constructor function
Cat::Cat()
{
	std::cout << "Default constructor for Cat Class called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		std::cerr << "Cat brain allocation error." << std::endl;
		exit(1);
	}
}

//copy constructor function
Cat::Cat(const Cat &cat) : Animal()
{
	std::cout << "Copy constructor for Cat Class called" << std::endl;
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		std::cerr << "Cat brain allocation error." << std::endl;
		exit(1);
	}
	*this = cat;
}

//destructor function
Cat::~Cat()
{
	std::cout << "Destructor for Cat Class called" << std::endl;
	delete(this->_brain);
}

//copy assignation operator function
Cat	&Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return *this;
	this->_type = cat._type;
	*this->_brain = *cat._brain;
	return (*this);
}

//makes a distinct sound depending on animal type
void	Cat::makeSound() const
{
	std::cout << "Meoooooww!" << std::endl;
}

//gets idea for the current index
const std::string	&Cat::getCatIdea(int i)const
{
	return (this->_brain->getIdea(i));
}

//sets idea for the current index
void	Cat::setCatIdea(int i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}
