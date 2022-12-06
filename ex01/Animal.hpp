/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:33:58 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 21:33:59 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
			Animal();
			Animal(const Animal &Animal);
			//to make sure derieved class destuctors are properly called
			virtual 		~Animal();
			Animal  		&operator=(const Animal &animal);

			virtual void    makeSound() const;
			std::string     getType() const;
	protected:
			std::string		_type;
};

#endif