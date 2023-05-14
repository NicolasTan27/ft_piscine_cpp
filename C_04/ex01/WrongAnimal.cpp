/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:02:20 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 15:47:21 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Unkown";
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& cpy)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = cpy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cpy)
{
	std::cout << "WrongAnimal Copy Assignament Constructor" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

////////////////////////////////

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal : ???" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (type);
}
