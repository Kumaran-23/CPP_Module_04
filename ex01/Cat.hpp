/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:23 by snair             #+#    #+#             */
/*   Updated: 2022/12/17 14:55:00 by snair            ###   ########.fr       */
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
		const std::string &getCatIdea(int i)const;
		void setCatIdea(int i, std::string idea);
	private:
		Brain *_brain;
};

#endif