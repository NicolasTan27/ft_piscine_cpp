/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:59:30 by ntan              #+#    #+#             */
/*   Updated: 2022/08/15 14:46:48 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal&);
		Animal &operator=(const Animal&);

		virtual void 	makeSound() const = 0;
		std::string		getType() const;

	protected :
		std::string	type;
};

#endif