/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:23 by snair             #+#    #+#             */
/*   Updated: 2022/12/17 22:30:50 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdlib>

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &cat);
		virtual ~Cat();
		Cat		&operator=(const Cat &cat);
		void	makeSound() const;
		void 	getCatIdea(int i)const;
		void 	setCatIdea(std::string idea, int i);
	private:
		Brain *_brain;
};

#endif