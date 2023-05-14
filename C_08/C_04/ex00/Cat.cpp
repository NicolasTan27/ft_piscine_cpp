/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:10:01 by ntan              #+#    #+#             */
/*   Updated: 2022/08/02 12:37:16 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->type = "Cat"; 
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor" << std::endl;
}

Cat::Cat(Cat const& cpy) : Animal()
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = cpy;
}

Cat& Cat::operator=(const Cat& cpy)
{
	std::cout << "Cat Copy Assignament Constructor" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat : Miaou je suis un chat" << std::endl;
}