/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:17 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 21:34:18 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//default constructor function
Dog::Dog()
{
	std::cout << "Default constructor for Dog Class called" << std::endl;
	this->_type = "Dog";
}

//copy constructor function
Dog::Dog(const Dog &dog)
{
	std::cout << "Copy constructor for Dog Class called" << std::endl;
	*this = dog;
}

//destructor function
Dog::~Dog()
{
	std::cout << "Destructor for Dog Class called" << std::endl;
}

//copy assignation operator function
Dog	&Dog::operator=(const Dog &dog)
{
	this->_type = dog._type;
	return (*this);
}

//makes a distinct sound depending on animal type
void	Dog::makeSound() const
{
	std::cout << "WoofWoof!" << std::endl;
}