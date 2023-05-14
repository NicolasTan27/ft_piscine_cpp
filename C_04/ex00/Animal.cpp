/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:02:20 by ntan              #+#    #+#             */
/*   Updated: 2022/07/31 18:42:27 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Unknown";
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor" << std::endl;
}

Animal::Animal(Animal const& cpy)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = cpy;
}

Animal& Animal::operator=(const Animal& cpy)
{
	std::cout << "Animal Copy Assignament Constructor" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

////////////////////////////////

void	Animal::makeSound() const
{
	std::cout << "Animal : ???" << std::endl;
}

std::string		Animal::getType() const
{
	return (type);
}
