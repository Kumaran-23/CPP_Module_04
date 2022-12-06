/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:53 by snair             #+#    #+#             */
/*   Updated: 2022/12/06 12:05:58 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//default constructor function
WrongCat::WrongCat()
{
	std::cout << "Default constructor for WrongCat Class called" << std::endl;
	this->_type = "WrongCat";
}

//copy constructor function
WrongCat::WrongCat(const WrongCat &wcat) : WrongAnimal()
{
	std::cout << "Copy constructor for WrongCat Class called" << std::endl;
	*this = wcat;
}

//destructor function
WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat Class called" << std::endl;
}

//copy assignation operator function
WrongCat	&WrongCat::operator=(const WrongCat &wcat)
{
	this->_type = wcat._type;
	return (*this);
}

//makes a distinct sound depending on animal type
void	WrongCat::makeSound() const
{
	std::cout << "Wrongcat Meoooooww!" << std::endl;
}