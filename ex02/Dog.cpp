/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:17 by snair             #+#    #+#             */
/*   Updated: 2022/12/17 22:45:00 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//default constructor function
Dog::Dog()
{
	std::cout << "Default constructor for Dog Class called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		std::cerr << "Cat brain allocation error." << std::endl;
		exit(1);
	}
}

//copy constructor function
Dog::Dog(const Dog &dog) : Animal()
{
	std::cout << "Copy constructor for Dog Class called" << std::endl;
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		std::cerr << "Cat brain allocation error." << std::endl;
		exit(1);
	}
	//this->_type = dog._type;
	//this->_brain = dog._brain;
	*this = dog;
}

//destructor function
Dog::~Dog()
{
	std::cout << "Destructor for Dog Class called" << std::endl;
	delete this->_brain;
}

//copy assignation operator function
Dog	&Dog::operator=(const Dog &dog)
{
	if (this == &dog)
		return *this;
	this->_type = dog._type;
	*this->_brain = *dog._brain;
	return (*this);
}

//makes a distinct sound depending on animal type
void	Dog::makeSound() const
{
	std::cout << "WoofWoof!" << std::endl;
}

//gets idea for the current index
void	Dog::getDogIdea(int i)const
{
	std::cout << "Idea number: " << i << " for dog is " << this->_brain->getIdea(i) 
	<< " at the address: " << this->_brain->getIdeaAddress(i) << std::endl;
}

//sets idea for the current index
void	Dog::setDogIdea(std::string idea, int i)
{
		this->_brain->setIdea(idea, i);
}