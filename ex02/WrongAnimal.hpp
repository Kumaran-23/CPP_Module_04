/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:34:36 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 21:34:37 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal &wa);
			//to make sure derieved class destuctors are properly called
			virtual 		~WrongAnimal();
			WrongAnimal     &operator=(const WrongAnimal &wa);
			void    		makeSound() const;
			std::string     getType() const;
	protected:
			std::string		_type;
};

#endif