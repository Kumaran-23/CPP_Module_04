/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:35:05 by snair             #+#    #+#             */
/*   Updated: 2022/12/06 16:13:57 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdio>

int main()
{
	{
		std::cout << "\nTest from PDF\n" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	{
		std::cout << "\nTest from PDF looping\n" << std::endl;
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
		std::cout << "\nDeep copy test\n" << std::endl;
		Cat c1;
		c1.setCatIdea(0, "Where is my food peasant!!");
		c1.setCatIdea(1, "Give me pats peasant");
		Cat c2(c1);
		std::cout << "c1 first idea : " << c1.getCatIdea(0) << std::endl;
		std::cout << "C2 first idea : " << c2.getCatIdea(0) << std::endl;
		std::cout << "c1 first address : " << &(c1.getCatIdea(0)) << std::endl;
		std::cout << "C2 first address : " << &(c2.getCatIdea(0)) << std::endl;
		std::cout << "c1 second idea : " << c1.getCatIdea(1) << std::endl;
		std::cout << "C2 second idea : " << c2.getCatIdea(1) << std::endl;
		std::cout << "c1 second address : " << &(c1.getCatIdea(1)) << std::endl;
		std::cout << "C2 second address : " << &(c2.getCatIdea(1)) << std::endl;
	}
	{
		std::cout << "\nCopy assignment operator test\n" << std::endl;
		Dog d1;
		Dog d2;
		
		d1.setDogIdea(0, "Give me pats yo");
		d2 = d1;
		std::cout << "d1 first idea : " << d1.getDogIdea(0) << std::endl;
		std::cout << "d2 first idea : " << d2.getDogIdea(0) << std::endl;
		std::cout << "d1 first idea address : " << &(d1.getDogIdea(0)) << std::endl;
		std::cout << "d2 first idea address : " << &(d2.getDogIdea(0)) << std::endl;
	}
	return (0);
}

