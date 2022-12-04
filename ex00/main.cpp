/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:35:05 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 21:35:06 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete (meta);
		delete (j);
		delete (i);
	}
	{
		std::cout << "WrongAnimal Test" << std::endl;
		const WrongAnimal* w_animal = new WrongAnimal();
		const WrongAnimal* w_cat = new WrongCat();
		std::cout << w_animal->getType() << std::endl;
		std::cout << w_cat->getType() << std::endl;
		w_animal->makeSound();
		w_cat->makeSound();
		delete (w_animal);
		delete (w_cat);
	}
	return (0);
}
