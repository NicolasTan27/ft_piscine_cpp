/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:35:17 by ntan              #+#    #+#             */
/*   Updated: 2022/06/15 18:43:29 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
	_name = "Zombie";
	std::cout << _name << " Created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " Destroyed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}