/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:35:05 by snair             #+#    #+#             */
/*   Updated: 2022/12/17 23:01:33 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdio>

int main()
{
	{
		std::cout << "Test from PDF" << std::endl;
		std::cout << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	{
		std::cout << std::endl;
		std::cout << "Test from PDF looping" << std::endl;
		std::cout << std::endl;
		const Animal	*array_animals[10];

		for (int i = 0; i < 5; i++)
		{
			if (i % 2)
				array_animals[i] = new Dog();
			else
				array_animals[i] = new Cat();
		}
		for (int i = 0; i < 5; i++) 
			array_animals[i]->makeSound();
		for (int i = 0; i < 5; i++) 
			delete array_animals[i];
	}
	{
		std::cout << std::endl;
		std::cout << "Deep copy test" << std::endl;
		std::cout << std::endl;
		Cat *c1 = new Cat();
		c1->setCatIdea("Where is my food peasant!!", 0);
		c1->setCatIdea("Give me pats peasant", 1);
		Cat *c2 = new Cat(*c1);
		std::cout << "c1 ";
		c1->getCatIdea(0);
		std::cout << "c2 ";
		c2->getCatIdea(0);
		std::cout << "c1 ";
		c1->getCatIdea(1);
		std::cout << "c2 ";
		c2->getCatIdea(1);
		c1->setCatIdea("i want fish!", 1);
		std::cout << "c1 ";
		c1->getCatIdea(1);
		std::cout << "c2 ";
		c2->getCatIdea(1);
		delete c1;
		delete c2;
	}
	{
		std::cout << std::endl;
		std::cout << "assignment operator test" << std::endl;
		std::cout << std::endl;
		Dog d1;
		Dog d2;
		d1.setDogIdea("Give me pats yo", 0);
		d1.setDogIdea("i want meat!", 1);
		d2 = d1;
		d1.setDogIdea("lets go for a walk!", 99);
		d2.setDogIdea("i want my ball!", 99);
		std::cout << "d1 ";
		d1.getDogIdea(0);
		std::cout << "d2 ";
		d2.getDogIdea(0);
		std::cout << "d1 ";
		d1.getDogIdea(1);
		std::cout << "d2 ";
		d2.getDogIdea(1);
		std::cout << "d1 ";
		d1.getDogIdea(99);
		std::cout << "d2 ";
		d2.getDogIdea(99);
	}
	return (0);
}

