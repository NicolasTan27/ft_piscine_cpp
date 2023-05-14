/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:10:01 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 15:42:32 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat"; 
	std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const& cpy) : WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = cpy;
}

WrongCat& WrongCat::operator=(const WrongCat& cpy)
{
	std::cout << "WrongCat Copy Assignament Constructor" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

////////////////////////////////

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat : Miaou je suis un chat" << std::endl;
}