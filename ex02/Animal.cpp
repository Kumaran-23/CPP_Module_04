/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:03 by snair             #+#    #+#             */
/*   Updated: 2022/12/17 17:55:58 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//default constructor function
Animal::Animal()
{
	std::cout << "Default constructor for Animal Class called" << std::endl;
	this->_type = "Unknow";
}

//copy constructor function
Animal::Animal(const Animal &animal)
{
	std::cout << "Copy constructor for Animal Class called" << std::endl;
	*this = animal;
}

//destructor function
Animal::~Animal()
{
	std::cout << "Destructor for Animal Class called" << std::endl;
}

//copy assignation operator function
Animal	&Animal::operator=(const Animal &animal)
{
	this->_type = animal._type;
	return (*this);
}

//makes a distinct sound depending on animal type, unknown animals make unknown sounds
/*void	Animal::makeSound() const
{
	std::cout << "Unknown noises in the distance" << std::endl;
}*/

//gets the value of _type attribute 
std::string	Animal::getType() const
{
	return (this->_type);
}