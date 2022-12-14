/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:11 by snair             #+#    #+#             */
/*   Updated: 2022/12/17 22:35:01 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdlib>

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &dog);
		virtual ~Dog();
		Dog		&operator=(const Dog &dog);
		void	makeSound() const;
		void	getDogIdea(int i)const;
		void setDogIdea(std::string idea, int i);
	private:
		Brain *_brain;
};

#endif