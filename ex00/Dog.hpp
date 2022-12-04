/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:11 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 21:34:12 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		Dog();
		Dog(const Dog &dog);
		virtual ~Dog();
		Dog		&operator=(const Dog &dog);
		void	makeSound() const;
};

#endif