/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:29 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 21:34:30 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//default constructor function
Cat::Cat()
{
	std::cout << "Default constructor for Cat Class called" << std::endl;
	this->_type = "Cat";
}

//copy constructor function
Cat::Cat(const Cat &cat)
{
	std::cout << "Copy constructor for Cat Class called" << std::endl;
	*this = cat;
}

//destructor function
Cat::~Cat()
{
	std::cout << "Destructor for Cat Class called" << std::endl;
}

//copy assignation operator function
Cat	&Cat::operator=(const Cat &cat)
{
	this->_type = cat._type;
	return (*this);
}

//makes a distinct sound depending on animal type
void	Cat::makeSound() const
{
	std::cout << "Meoooooww!" << std::endl;
}