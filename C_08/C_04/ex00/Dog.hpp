/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:36:42 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 15:57:53 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
	public :
		Dog();
		virtual ~Dog();
		Dog(const Dog&);
		Dog &operator=(const Dog&);

		virtual void makeSound() const;
};

#endif