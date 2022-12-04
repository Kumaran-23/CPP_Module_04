/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:35:14 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 21:35:15 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//default constructor function
WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor for WrongAnimal Class called" << std::endl;
	this->_type = "WrongUnknow";
}

//copy constructor function
WrongAnimal::WrongAnimal(const WrongAnimal &wa)
{
	std::cout << "Copy constructor for WrongAnimal Class called" << std::endl;
	*this = wa;
}

//destructor function
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal Class called" << std::endl;
}

//copy assignation operator function
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wa)
{
	this->_type = wa._type;
	return (*this);
}

//makes a distinct sound depending on WrongAnimal type, unknown WrongAnimals make unknown sounds
void	WrongAnimal::makeSound() const
{
	std::cout << "WrongUnknown noises in the vacinity" << std::endl;
}

//gets the value of _type attribute 
std::string	WrongAnimal::getType() const
{
	return (this->_type);
}